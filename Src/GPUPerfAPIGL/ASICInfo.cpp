//==============================================================================
// Copyright (c) 2006-2016 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Utility routines for retreiving ASIC information
//==============================================================================


//=================================================================================================================================
//
//          Includes / defines / typedefs / static member variable initialization block
//
//=================================================================================================================================
#include "ASICInfo.h"

#ifdef _WIN32
    #include <windows.h>
#endif

#include "GLEntryPoints.h"
#include <assert.h>
#include <string>
#include <sstream>

#include "Logging.h"

#ifdef _LINUX
    #include <string.h>
    #include <stdlib.h>
#endif

#include <ADLUtil.h>

/// Driver-defined ASIC info group
#define ASIC_GROUP   "GPIN"
/// Driver-defined ASIC type counter
#define ASIC_TYPE    "GPIN_000"

//=================================================================================================================================
//
//          Private Function(s)
//
//=================================================================================================================================

//=========================================================================================================
/// Get the group ID for the given string
/// \param pGroupStr Pointer to group string name
/// \return -1 if group not found, group ID otherwise
//=========================================================================================================
GLint GetGroupID(const char* pGroupStr)
{
    GLint nNumGroups = 0;

    // Get the number of performance counter groups
    oglUtils::_oglGetPerfMonitorGroupsAMD(&nNumGroups, 0, nullptr);

    if (nNumGroups > 0)
    {
        GLuint* pPerfGroups = new(std::nothrow) GLuint[nNumGroups];

        if (nullptr != pPerfGroups)
        {
            // Get the group Ids
            oglUtils::_oglGetPerfMonitorGroupsAMD(nullptr, nNumGroups, pPerfGroups);

            for (int i = 0; i < nNumGroups; i++)
            {
                char groupStr[256];

                // Get the group name
                oglUtils::_oglGetPerfMonitorGroupStringAMD(pPerfGroups[i], 255, nullptr, groupStr);

                if (!strcmp(groupStr, pGroupStr))
                {
                    GLint nGroupID = pPerfGroups[i];
                    delete[] pPerfGroups;
                    return nGroupID;
                }
            }

            delete[] pPerfGroups;
        }
    }

    return -1;
}

//=========================================================================================================
/// Get the value of a counter by name in a given group
/// \param nGroup GroupID to find counter in
/// \param pCounterStr String name of counter
/// \param rValue Value of counter (returned)
/// \return false if counter not found, true otherwise
//=========================================================================================================
bool GetCounterValue(GLint nGroup, const char* pCounterStr, GLuint& rValue)
{
    GLint nNumCounters;
    bool bResult = false;

    // Start by getting the list of counters in the group
    oglUtils::_oglGetPerfMonitorCountersAMD(nGroup, &nNumCounters, nullptr, 0, nullptr);

    if (nNumCounters > 0)
    {
        GLuint* pCounterList = new(std::nothrow) GLuint[nNumCounters];

        if (nullptr != pCounterList)
        {
            // Get the list of counters in the group
            oglUtils::_oglGetPerfMonitorCountersAMD(nGroup, nullptr, nullptr, nNumCounters, pCounterList);

            for (int i = 0; i < nNumCounters; i++)
            {
                char counterStr[256];

                oglUtils::_oglGetPerfMonitorCounterStringAMD(nGroup, pCounterList[i], 255, nullptr, counterStr);

                if (!strcmp(pCounterStr, counterStr))
                {
                    GLuint monitor;
                    GLuint nResultSize;

                    // Counter found, now create a monitor with it and get its value
                    oglUtils::_oglGenPerfMonitorsAMD(1, &monitor);

                    oglUtils::_oglSelectPerfMonitorCountersAMD(monitor, GL_TRUE, nGroup, 1, &pCounterList[i]);

                    // need to begin / end the monitor so that the data is obtained
                    oglUtils::_oglBeginPerfMonitorAMD(monitor);
                    oglUtils::_oglEndPerfMonitorAMD(monitor);

                    // Get the counter result size
                    oglUtils::_oglGetPerfMonitorCounterDataAMD(monitor, GL_PERFMON_RESULT_SIZE_AMD, 4, &nResultSize, nullptr);

                    assert((GLint)nResultSize == 3 * sizeof(GLuint));

                    // Result should just be 3 GLuint per counter
                    if ((GLint)nResultSize == 3 * sizeof(GLuint))
                    {
                        GLubyte* pCounterData;
                        pCounterData = new(std::nothrow) GLubyte[nResultSize];

                        if (nullptr != pCounterData)
                        {
                            // Get the counter results
                            oglUtils::_oglGetPerfMonitorCounterDataAMD(monitor, GL_PERFMON_RESULT_AMD, nResultSize, (GLuint*)pCounterData, nullptr);
                            rValue = ((GLuint*)pCounterData)[2];
                            bResult = true;

                            delete[] pCounterData;
                        }
                    }

                    oglUtils::_oglSelectPerfMonitorCountersAMD(monitor, GL_FALSE, nGroup, 1, &pCounterList[i]);
                    oglUtils::_oglDeletePerfMonitorsAMD(1, &monitor);
                    break;
                }
            }

            delete[] pCounterList;
        }
    }

    return bResult;
}

/// Parses a version number like this: "4.2.12325 Compatibility Profile Context 13.100.0.0"
/// to extract the "12325" portion.
/// \param pVersion the version string to extract the number from
/// \return 0 on failure, the build version number on success
int extractVersionNumber(const GLubyte* pVersion)
{
    const char* pcszVer = reinterpret_cast<const char*>(pVersion);

    std::string strVer(pcszVer);

    // the build number ends at the first space
    int nEndBuild = (int)strVer.find_first_of(' ');

    // truncate the input at the first space
    strVer = strVer.substr(0, nEndBuild);

    // the build number starts after the last decimal point
    int nStartBuild = (int)strVer.find_last_of('.') + 1;

    // parse the version number
    int nVersion = atoi(strVer.substr(nStartBuild, nEndBuild - nStartBuild).c_str());

    // couldn't extract version -- return MAX_INT to simulate most recent driver
    if (0 == nVersion)
    {
        nVersion = INT_MAX;
    }

    return nVersion;
}

//=================================================================================================================================
//
//          Public Function(s)
//
//=================================================================================================================================

//=========================================================================================================
bool GetASICInfo(ASICInfo& rASICInfo)
{
    if (nullptr == oglUtils::_oglGetPerfMonitorCountersAMD      ||
        nullptr == oglUtils::_oglGetPerfMonitorGroupStringAMD   ||
        nullptr == oglUtils::_oglGetPerfMonitorCounterInfoAMD   ||
        nullptr == oglUtils::_oglGetPerfMonitorCounterStringAMD ||
        nullptr == oglUtils::_oglGenPerfMonitorsAMD             ||
        nullptr == oglUtils::_oglDeletePerfMonitorsAMD          ||
        nullptr == oglUtils::_oglSelectPerfMonitorCountersAMD   ||
        nullptr == oglUtils::_oglBeginPerfMonitorAMD            ||
        nullptr == oglUtils::_oglEndPerfMonitorAMD              ||
        nullptr == oglUtils::_oglGetPerfMonitorCounterDataAMD)
    {
        // No AMD_peformance_monitor support, means no ASIC info
        GPA_LogError("One or more of the GL_AMD_performance_monitor functions were not found.");
        return false;
    }

    // Find the ASIC info group (GPIN = GPu INformation)
    GLint nASICGroupId = GetGroupID(ASIC_GROUP);

    if (nASICGroupId == -1)
    {
        GPA_LogError("Unable to find the GPIN group.");
        return false;
    }

    // Get the ASIC ID
    GLuint nAsicType = 0;

    if (!GetCounterValue(nASICGroupId, ASIC_TYPE, nAsicType))
    {
        GPA_LogError("Unable to get the asic id.");
        return false;
    }

    // query the driver version so that we can correct the asic ID after a driver
    // change that happened for 10.2, where support for pre-R6xx hardware was removed
    //(legacy driver will support that)

#ifndef GLES
    // Since GL ES didn't exist before version 9551, there's no need to check the
    // version number. For now, it is assumed the version number will be >9551

    const GLubyte* pVersion = oglUtils::_oglGetString(GL_VERSION);
    int nVersion = extractVersionNumber(pVersion);

    std::stringstream message;
    message << "ASIC ID returned from driver is: " << nAsicType << " and GL_VERSION is: " << reinterpret_cast<const char*>(pVersion) << ".";
    GPA_LogMessage(message.str().c_str());
#else
    int nVersion = INT_MAX;
#endif

    if (nVersion < 13452)
    {
        // pre-GCN devices were removed from the driver starting with version 13452.
        // if the driver version is earlier than that we will return an error.
        GPA_LogError("OpenGL driver version is too old. Please update your driver.");
        return false;
    }

    // store the Asic Revision ID
    rASICInfo.eAsicRev = (ATIAsicID) nAsicType;

    // Decode the ASIC Type
    if (nAsicType == ATIASIC_ID_TAHITI_P ||
        nAsicType == ATIASIC_ID_PITCAIRN_PM ||
        nAsicType == ATIASIC_ID_CAPEVERDE_M ||
        nAsicType == ATIASIC_ID_OLAND_M ||
        nAsicType == ATIASIC_ID_HAINAN_M)
    {
        GPA_LogMessage("Recognized a GFX6 card.");
        rASICInfo.eAsicType = ASIC_Gfx6;
    }
    else if (nAsicType == ATIASIC_ID_BONAIRE_M ||
             nAsicType == ATIASIC_ID_HAWAII_P)
    {
        GPA_LogMessage("Recognized a GFX7 card.");
        rASICInfo.eAsicType = ASIC_Gfx7;
    }
    else if (nAsicType == ATIASIC_ID_KALINDI ||
             nAsicType == ATIASIC_ID_GODAVARI ||
             nAsicType == ATIASIC_ID_SPECTRE ||
             nAsicType == ATIASIC_ID_SPOOKY)
    {
        GPA_LogMessage("Recognized an APU with GFX7 graphics.");
        rASICInfo.eAsicType = ASIC_Gfx7;
    }
    else if (nAsicType == ATIASIC_ID_ICELAND_M ||
             nAsicType == ATIASIC_ID_TONGA_P ||
             nAsicType == ATIASIC_ID_FIJI_P ||
             nAsicType == ATIASIC_ID_ELLESMERE ||
             nAsicType == ATIASIC_ID_BAFFIN ||
             nAsicType == ATIASIC_ID_LEXA ||
             nAsicType == ATIASIC_ID_VEGAM)
    {
        GPA_LogMessage("Recognized a GFX8 card.");
        rASICInfo.eAsicType = ASIC_Gfx8;
    }
    else if (nAsicType == ATIASIC_ID_CARRIZO ||
             nAsicType == ATIASIC_ID_STONEY)
    {
        GPA_LogMessage("Recognized an APU with GFX8 graphics.");
        rASICInfo.eAsicType = ASIC_Gfx8;
    }
    else if (nAsicType == ATIASIC_ID_GFX900 ||
             nAsicType == ATIASIC_ID_PLACEHOLDER1 ||
             nAsicType == ATIASIC_ID_GFX906)
    {
        GPA_LogMessage("Recognized a GFX9 card.");
        rASICInfo.eAsicType = ASIC_Gfx9;
    }
    else if (nAsicType == ATIASIC_ID_GFX902 ||
             nAsicType == ATIASIC_ID_PLACEHOLDER)
    {
        GPA_LogMessage("Recognized an APU with GFX9 graphics.");
        rASICInfo.eAsicType = ASIC_Gfx9;
    }
    else
    {
        std::stringstream errorMessage;
        errorMessage << "Unrecognized asic type: " << nAsicType << ".";
        GPA_LogError(errorMessage.str().c_str());
        assert(0); // Unknown ASIC Type, need to update enums list from UGL driver
        rASICInfo.eAsicType = ASIC_UNKNOWN;
        return false;
    }

    // Now, fill in the rest of the ASIC structure
    switch (rASICInfo.eAsicType)
    {
        case ASIC_Gfx6:
        case ASIC_Gfx7:
        case ASIC_Gfx8:
        case ASIC_Gfx9:
            if (!GetCounterValue(nASICGroupId, "GPIN_001", rASICInfo.nNumSIMD))
            {
                GPA_LogError("Unable to query GPIN_001.");
                return false;
            }

            if (!GetCounterValue(nASICGroupId, "GPIN_002", rASICInfo.nNumQuadPipe))
            {
                GPA_LogError("Unable to query GPIN_002.");
                return false;
            }

            if (!GetCounterValue(nASICGroupId, "GPIN_003", rASICInfo.nNumRB))
            {
                GPA_LogError("Unable to query GPIN_003.");
                return false;
            }

            if (!GetCounterValue(nASICGroupId, "GPIN_004", rASICInfo.nNumSPI))
            {
                GPA_LogError("Unable to query GPIN_004.");
                return false;
            }

            break;

        default:
            break;
    }

    return true;
}

