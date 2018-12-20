//==============================================================================
// Copyright (c) 2016-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Maintains a set of hardware counters
//==============================================================================

#ifndef _GPA_HARDWARE_COUNTERS_H_
#define _GPA_HARDWARE_COUNTERS_H_

#include "GPAInternalCounter.h"
#include "GPASplitCountersInterfaces.h"
#include "IGPACounterScheduler.h"

/// Struct to describe a hardware counter
struct GPA_HardwareCounterDescExt
{
    gpa_uint32 m_groupIndex;                     ///< index of group containing this counter
    gpa_uint32 m_groupIdDriver;                  ///< group ID according to the driver
    gpa_uint32 m_counterIdDriver;                ///< counter ID according to the driver
    GPA_HardwareCounterDesc* m_pHardwareCounter; ///< the internal counter
};

/// Maintains a set of hardware counters
class GPA_HardwareCounters
{
public:
    /// Initializes an instance of the GPA_HardwareCounters class.
    GPA_HardwareCounters()
    {
        Clear();
    }

    /// Destructor
    virtual ~GPA_HardwareCounters()
    {
    }

    /// Clears all counter data
    void Clear()
    {
        m_currentGroupUsedCounts.clear();
        m_counters.clear();
        m_ppCounterGroupArray = nullptr;
        m_pGroups = nullptr;
        m_groupCount = 0;
        m_pAdditionalGroups = nullptr;
        m_additionalGroupCount = 0;
        m_pSQCounterGroups = nullptr;
        m_sqGroupCount = 0;
        m_gpuTimeBottomToBottomDurationCounterIndex = static_cast<unsigned int>(-1);
        m_gpuTimeBottomToBottomStartCounterIndex = static_cast<unsigned int>(-1);
        m_gpuTimeBottomToBottomEndCounterIndex = static_cast<unsigned int>(-1);
        m_gpuTimeTopToBottomDurationCounterIndex = static_cast<unsigned int>(-1);
        m_gpuTimeTopToBottomStartCounterIndex = static_cast<unsigned int>(-1);
        m_gpuTimeTopToBottomEndCounterIndex = static_cast<unsigned int>(-1);
        m_countersGenerated = false;
        m_pIsolatedGroups = nullptr;
        m_isolatedGroupCount = 0;
    }

    /// Obtains the number of hardware counters
    /// \return the number of hardware counters
    gpa_uint32 GetNumCounters() const
    {
        return static_cast<gpa_uint32>(m_counters.size());
    }

    /// Gets the name of the specified counter
    /// \param index the index of the counter whose name is needed
    /// \return the name of the specified counter
    const char* GetCounterName(gpa_uint32 index) const
    {
        return m_counters[index].m_pHardwareCounter->m_pName;
    }

    /// Gets the group (hw block) of the specified counter
    /// \param index the index of the counter whose group is needed
    /// \return the group name of the specified counter
    const char* GetCounterGroup(gpa_uint32 index) const
    {
        if (m_counters[index].m_groupIndex < m_groupCount)
        {
            return m_pGroups[m_counters[index].m_groupIndex].m_pName;
        }
        else
        {
            gpa_uint32 additionalGroupIndex = m_counters[index].m_groupIndex - m_groupCount;

            if (additionalGroupIndex < m_additionalGroupCount)
            {
                return m_pAdditionalGroups[additionalGroupIndex].m_pName;
            }
        }

        return nullptr;
    }

    /// Gets the description of the specified counter
    /// \param index the index of the counter whose description is needed
    /// \return the description of the specified counter
    const char* GetCounterDescription(gpa_uint32 index) const
    {
        return m_counters[index].m_pHardwareCounter->m_pDescription;
    }

    /// Gets a counter's UUID
    /// \param index the index of the requested counter
    /// \return the counter's UUID
    GPA_UUID GetCounterUuid(gpa_uint32 index) const
    {
        return ::GetCounterUuid(GetCounterName(index), GetCounterDescription(index));
    }

    /// Gets a counter's supported sample type
    /// \param index the index of the requested counter
    /// \return the counter's supported sample type
    GPA_Counter_Sample_Type GetCounterSampleType(gpa_uint32 index) const
    {
        // TODO: Hard coding to discrete-only counters for now.
        //       Uncomment the below line and remove the following two lines when we have a mechanism
        //       for hardware counters to specify which sample types they support.
        //return m_counters[index].m_pHardwareCounter->m_supportedSampleTypes;

        UNREFERENCED_PARAMETER(index);
        return GPA_COUNTER_SAMPLE_TYPE_DISCRETE;
    }

    /// Determines whether the indicated block id is a timestamp block id
    /// \param blockId The block id to check
    /// \return True if the block id is a timestamp block id
    bool IsTimestampBlockId(unsigned int blockId) const
    {
        return m_timestampBlockIds.find(blockId) != m_timestampBlockIds.end();
    }

    /// Determines whether the indicated counter index is a timestamp counter
    /// \param counterIndex The counter index to check
    /// \return True if the counter index is a timestamp counter
    bool IsTimeCounterIndex(unsigned int counterIndex) const
    {
        return m_timeCounterIndices.find(counterIndex) != m_timeCounterIndices.end();
    }

    /// Finds and returns the hardware timing counter with the minimum index in the set
    /// \return The hardware timing counter with the minimum index in the set
    unsigned int GetFirstHardwareTimeCounterIndex() const
    {
        auto iter = std::min_element(m_timeCounterIndices.begin(), m_timeCounterIndices.end());
        return *iter;
    }

    /// Determines whether the indicated counter index is a bottom of pipe counter index
    /// \param counterIndex The counter index to check
    /// \return True if the counter index is a bottom of pipe counter
    bool IsBottomOfPipeCounterIndex(unsigned int counterIndex) const
    {
        return counterIndex == m_gpuTimeBottomToBottomDurationCounterIndex
            || counterIndex == m_gpuTimeBottomToBottomStartCounterIndex
            || counterIndex == m_gpuTimeBottomToBottomEndCounterIndex;
    }

    /// Determines whether the indicated counter index is a top of pipe counter index
    /// \param counterIndex The counter index to check
    /// \return True if the counter index is a top of pipe counter
    bool IsTopOfPipeCounterIndex(unsigned int counterIndex) const
    {
        return counterIndex == m_gpuTimeTopToBottomDurationCounterIndex
            || counterIndex == m_gpuTimeTopToBottomStartCounterIndex
            || counterIndex == m_gpuTimeTopToBottomEndCounterIndex;
    }

    GPA_HardwareCounterDesc**               m_ppCounterGroupArray;                        ///< List of counter groups as defined by the list of internal counters in each group.
    GPA_CounterGroupDesc*                   m_pGroups;                                    ///< List of internal counter groups
    GPA_CounterGroupDesc*                   m_pAdditionalGroups;                          ///< List of internal counter groups exposed by the driver, but not known by GPA
    unsigned int                            m_groupCount;                                 ///< The number of internal counter groups
    unsigned int                            m_additionalGroupCount;                       ///< The number of internal counter groups exposed by the driver, but not known by GPA
    GPA_SQCounterGroupDesc*                 m_pSQCounterGroups;                           ///< List of SQCounterGroupDesc
    unsigned int                            m_sqGroupCount;                               ///< The number of internal SQ counter groups
    std::set<unsigned int>                  m_timestampBlockIds;                          ///< Set of timestamp block id's
    std::set<unsigned int>                  m_timeCounterIndices;                         ///< Set of timestamp counter indices
    unsigned int                            m_gpuTimeBottomToBottomDurationCounterIndex;  ///< the index of the GPUTime Bottom-to-Bottom duration counter (-1 if it doesn't exist)
    unsigned int                            m_gpuTimeBottomToBottomStartCounterIndex;     ///< the index of the GPUTime Bottom-to-Bottom start counter (-1 if it doesn't exist)
    unsigned int                            m_gpuTimeBottomToBottomEndCounterIndex;       ///< the index of the GPUTime Bottom-to-Bottom end counter (-1 if it doesn't exist)
    unsigned int                            m_gpuTimeTopToBottomDurationCounterIndex;     ///< the index of the GPUTime Top-to-Bottom duration counter (-1 if it doesn't exist)
    unsigned int                            m_gpuTimeTopToBottomStartCounterIndex;        ///< the index of the GPUTime Top-to-Bottom start counter (-1 if it doesn't exist)
    unsigned int                            m_gpuTimeTopToBottomEndCounterIndex;          ///< the index of the GPUTime Top-to-Bottom end counter (-1 if it doesn't exist)
    bool                                    m_countersGenerated;                          ///< indicates that the internal counters have been generated
    const uint32_t*                         m_pIsolatedGroups;                            ///< List of groups that are isolated from SQ groups
    uint32_t                                m_isolatedGroupCount;                         ///< The number of isolated groups
    std::vector<GPA_HardwareCounterDescExt> m_counters;                                   ///< vector of hardware counters
    std::vector<int>                        m_currentGroupUsedCounts;                     ///< List of the number of counters which have been enabled in each group
};

#endif //_GPA_HARDWARE_COUNTERS_H_
