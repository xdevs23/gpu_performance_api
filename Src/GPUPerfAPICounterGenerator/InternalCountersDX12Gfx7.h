//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  DX12 internal counter definitions for GFX7
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project

#ifndef _GPA_INTERNAL_COUNTERS_DX12_GFX7_H_
#define _GPA_INTERNAL_COUNTERS_DX12_GFX7_H_

#include <windows.h>
#pragma warning (push)
#pragma warning (disable: 4201)
#include <AmdExtGpaInterface.h>
#pragma warning (pop)

#include <set>

struct GPA_HardwareCounterDesc;
struct GPA_CounterGroupDesc;
struct GPA_SQCounterGroupDesc;

extern GPA_HardwareCounterDesc* DX12CounterGroupArrayGfx7[]; ///< Array of hardware counter groups for DX12 for Gfx7 family
extern GPA_CounterGroupDesc HWDX12GroupsGfx7[]; ///< Array of counter groups for DX12 for Gfx7 family
extern GPA_SQCounterGroupDesc HWDX12SQGroupsGfx7[]; ///< Array of SQ groups for DX12 for Gfx7 family
extern unsigned int HWDX12SQIsolatedGroupsGfx7[]; ///< Array of counter groups isolated from SQ counter groups for DX12 for Gfx7 family
extern AmdExtGpuBlock HWDX12DriverEnumGfx7[]; ///< Array of driver enum values per group for DX12 for Gfx7 family
extern const unsigned int HWDX12GputimeBottomToBottomDurationIndexGfx7; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for DX12 for Gfx7 family
extern const unsigned int HWDX12GputimeBottomToBottomStartIndexGfx7; ///< Index of time of the previous command reaching bottom of pipe for DX12 for Gfx7 family
extern const unsigned int HWDX12GputimeBottomToBottomEndIndexGfx7; ///< Index of time of the current command reaching bottom of pipe for DX12 for Gfx7 family
extern const unsigned int HWDX12GputimeTopToBottomDurationIndexGfx7; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for DX12 for Gfx7 family
extern const unsigned int HWDX12GputimeTopToBottomStartIndexGfx7; ///< Index of time that the current command reaches the top of pipe for DX12 for Gfx7 family
extern const unsigned int HWDX12GputimeTopToBottomEndIndexGfx7; ///< Index of time that the current command reaches the bottom of pipe for DX12 for Gfx7 family
extern const std::set<unsigned int> HWDX12TimestampBlockIdsGfx7; ///< Timestamp block id's for DX12 for Gfx7 family
extern const std::set<unsigned int> HWDX12TimeCounterIndicesGfx7; ///< Timestamp counter indices for DX12 for Gfx7 family
extern const unsigned int HWDX12GroupCountGfx7; ///< Hardware Group Count for DX12 for Gfx7 family
extern const unsigned int HWDX12SQGroupCountGfx7; ///< Hardware SQ Group Count for DX12 for Gfx7 family
extern const unsigned int HWDX12SQIsolatedGroupCountGfx7; ///< Hardware Isolated Group Count for DX12 for Gfx7 family

#endif // _GPA_INTERNAL_COUNTERS_DX12_GFX7_H_
