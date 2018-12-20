//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  CL internal counter definitions for GFX7
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project

#ifndef _GPA_INTERNAL_COUNTERS_CL_GFX7_H_
#define _GPA_INTERNAL_COUNTERS_CL_GFX7_H_

#include <set>

struct GPA_HardwareCounterDesc;
struct GPA_CounterGroupDesc;
struct GPA_SQCounterGroupDesc;

extern GPA_HardwareCounterDesc* CLCounterGroupArrayGfx7[]; ///< Array of hardware counter groups for CL for Gfx7 family
extern GPA_CounterGroupDesc HWCLGroupsGfx7[]; ///< Array of counter groups for CL for Gfx7 family
extern GPA_SQCounterGroupDesc HWCLSQGroupsGfx7[]; ///< Array of SQ groups for CL for Gfx7 family
extern unsigned int HWCLSQIsolatedGroupsGfx7[]; ///< Array of counter groups isolated from SQ counter groups for CL for Gfx7 family
extern const std::set<unsigned int> HWCLTimestampBlockIdsGfx7; ///< Timestamp block id's for CL for Gfx7 family
extern const std::set<unsigned int> HWCLTimeCounterIndicesGfx7; ///< Timestamp counter indices for CL for Gfx7 family
extern const unsigned int HWCLGroupCountGfx7; ///< Hardware Group Count for CL for Gfx7 family
extern const unsigned int HWCLSQGroupCountGfx7; ///< Hardware SQ Group Count for CL for Gfx7 family
extern const unsigned int HWCLSQIsolatedGroupCountGfx7; ///< Hardware Isolated Group Count for CL for Gfx7 family

#endif // _GPA_INTERNAL_COUNTERS_CL_GFX7_H_
