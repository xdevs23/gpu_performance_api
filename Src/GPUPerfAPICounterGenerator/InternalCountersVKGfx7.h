//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  VK internal counter definitions for GFX7
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project

#ifndef _GPA_INTERNAL_COUNTERS_VK_GFX7_H_
#define _GPA_INTERNAL_COUNTERS_VK_GFX7_H_

#include <vulkan/vulkan.h>
#include <vk_amd_gpa_interface.h>

#include <set>

struct GPA_HardwareCounterDesc;
struct GPA_CounterGroupDesc;
struct GPA_SQCounterGroupDesc;

extern GPA_HardwareCounterDesc* VKCounterGroupArrayGfx7[]; ///< Array of hardware counter groups for VK for Gfx7 family
extern GPA_CounterGroupDesc HWVKGroupsGfx7[]; ///< Array of counter groups for VK for Gfx7 family
extern GPA_SQCounterGroupDesc HWVKSQGroupsGfx7[]; ///< Array of SQ groups for VK for Gfx7 family
extern unsigned int HWVKSQIsolatedGroupsGfx7[]; ///< Array of counter groups isolated from SQ counter groups for VK for Gfx7 family
extern VkGpaPerfBlockAMD HWVKDriverEnumGfx7[]; ///< Array of driver enum values per group for VK for Gfx7 family
extern const unsigned int HWVKGputimeBottomToBottomDurationIndexGfx7; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for VK for Gfx7 family
extern const unsigned int HWVKGputimeBottomToBottomStartIndexGfx7; ///< Index of time of the previous command reaching bottom of pipe for VK for Gfx7 family
extern const unsigned int HWVKGputimeBottomToBottomEndIndexGfx7; ///< Index of time of the current command reaching bottom of pipe for VK for Gfx7 family
extern const unsigned int HWVKGputimeTopToBottomDurationIndexGfx7; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for VK for Gfx7 family
extern const unsigned int HWVKGputimeTopToBottomStartIndexGfx7; ///< Index of time that the current command reaches the top of pipe for VK for Gfx7 family
extern const unsigned int HWVKGputimeTopToBottomEndIndexGfx7; ///< Index of time that the current command reaches the bottom of pipe for VK for Gfx7 family
extern const std::set<unsigned int> HWVKTimestampBlockIdsGfx7; ///< Timestamp block id's for VK for Gfx7 family
extern const std::set<unsigned int> HWVKTimeCounterIndicesGfx7; ///< Timestamp counter indices for VK for Gfx7 family
extern const unsigned int HWVKGroupCountGfx7; ///< Hardware Group Count for VK for Gfx7 family
extern const unsigned int HWVKSQGroupCountGfx7; ///< Hardware SQ Group Count for VK for Gfx7 family
extern const unsigned int HWVKSQIsolatedGroupCountGfx7; ///< Hardware Isolated Group Count for VK for Gfx7 family

#endif // _GPA_INTERNAL_COUNTERS_VK_GFX7_H_
