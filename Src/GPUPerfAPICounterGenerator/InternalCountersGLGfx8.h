//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  GL internal counter definitions for GFX8
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project

#ifndef _GPA_INTERNAL_COUNTERS_GL_GFX8_H_
#define _GPA_INTERNAL_COUNTERS_GL_GFX8_H_

#include <set>

struct GPA_HardwareCounterDesc;
struct GPA_CounterGroupDesc;
struct GPA_SQCounterGroupDesc;

extern GPA_HardwareCounterDesc* GLCounterGroupArrayGfx8[]; ///< Array of hardware counter groups for GL for Gfx8 family
extern GPA_CounterGroupDesc HWGLGroupsGfx8[]; ///< Array of counter groups for GL for Gfx8 family
extern GPA_SQCounterGroupDesc HWGLSQGroupsGfx8[]; ///< Array of SQ groups for GL for Gfx8 family
extern unsigned int HWGLSQIsolatedGroupsGfx8[]; ///< Array of counter groups isolated from SQ counter groups for GL for Gfx8 family
extern const unsigned int HWGLGputimeBottomToBottomDurationIndexGfx8; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for GL for Gfx8 family
extern const unsigned int HWGLGputimeBottomToBottomStartIndexGfx8; ///< Index of time of the previous command reaching bottom of pipe for GL for Gfx8 family
extern const unsigned int HWGLGputimeBottomToBottomEndIndexGfx8; ///< Index of time of the current command reaching bottom of pipe for GL for Gfx8 family
extern const unsigned int HWGLGputimeTopToBottomDurationIndexGfx8; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for GL for Gfx8 family
extern const unsigned int HWGLGputimeTopToBottomStartIndexGfx8; ///< Index of time that the current command reaches the top of pipe for GL for Gfx8 family
extern const unsigned int HWGLGputimeTopToBottomEndIndexGfx8; ///< Index of time that the current command reaches the bottom of pipe for GL for Gfx8 family
extern const std::set<unsigned int> HWGLTimestampBlockIdsGfx8; ///< Timestamp block id's for GL for Gfx8 family
extern const std::set<unsigned int> HWGLTimeCounterIndicesGfx8; ///< Timestamp counter indices for GL for Gfx8 family
extern const unsigned int HWGLGroupCountGfx8; ///< Hardware Group Count for GL for Gfx8 family
extern const unsigned int HWGLSQGroupCountGfx8; ///< Hardware SQ Group Count for GL for Gfx8 family
extern const unsigned int HWGLSQIsolatedGroupCountGfx8; ///< Hardware Isolated Group Count for GL for Gfx8 family

#endif // _GPA_INTERNAL_COUNTERS_GL_GFX8_H_
