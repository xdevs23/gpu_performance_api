//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  DX11 internal counter definitions for GFX9
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project

#ifndef _GPA_INTERNAL_COUNTERS_DX11_GFX9_H_
#define _GPA_INTERNAL_COUNTERS_DX11_GFX9_H_

#include <windows.h>
#include <AmdDxExtPerfProfile.h>

#include <set>

struct GPA_HardwareCounterDesc;
struct GPA_CounterGroupDesc;
struct GPA_SQCounterGroupDesc;

extern GPA_HardwareCounterDesc* DX11CounterGroupArrayGfx9[]; ///< Array of hardware counter groups for DX11 for Gfx9 family
extern GPA_CounterGroupDesc HWDX11GroupsGfx9[]; ///< Array of counter groups for DX11 for Gfx9 family
extern GPA_SQCounterGroupDesc HWDX11SQGroupsGfx9[]; ///< Array of SQ groups for DX11 for Gfx9 family
extern unsigned int HWDX11SQIsolatedGroupsGfx9[]; ///< Array of counter groups isolated from SQ counter groups for DX11 for Gfx9 family
extern PE_BLOCK_ID HWDX11DriverEnumGfx9[]; ///< Array of driver enum values per group for DX11 for Gfx9 family
extern const unsigned int HWDX11GputimeBottomToBottomDurationIndexGfx9; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for DX11 for Gfx9 family
extern const unsigned int HWDX11GputimeBottomToBottomStartIndexGfx9; ///< Index of time of the previous command reaching bottom of pipe for DX11 for Gfx9 family
extern const unsigned int HWDX11GputimeBottomToBottomEndIndexGfx9; ///< Index of time of the current command reaching bottom of pipe for DX11 for Gfx9 family
extern const unsigned int HWDX11GputimeTopToBottomDurationIndexGfx9; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for DX11 for Gfx9 family
extern const unsigned int HWDX11GputimeTopToBottomStartIndexGfx9; ///< Index of time that the current command reaches the top of pipe for DX11 for Gfx9 family
extern const unsigned int HWDX11GputimeTopToBottomEndIndexGfx9; ///< Index of time that the current command reaches the bottom of pipe for DX11 for Gfx9 family
extern const std::set<unsigned int> HWDX11TimestampBlockIdsGfx9; ///< Timestamp block id's for DX11 for Gfx9 family
extern const std::set<unsigned int> HWDX11TimeCounterIndicesGfx9; ///< Timestamp counter indices for DX11 for Gfx9 family
extern const unsigned int HWDX11GroupCountGfx9; ///< Hardware Group Count for DX11 for Gfx9 family
extern const unsigned int HWDX11SQGroupCountGfx9; ///< Hardware SQ Group Count for DX11 for Gfx9 family
extern const unsigned int HWDX11SQIsolatedGroupCountGfx9; ///< Hardware Isolated Group Count for DX11 for Gfx9 family

#endif // _GPA_INTERNAL_COUNTERS_DX11_GFX9_H_
