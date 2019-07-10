//==============================================================================
// Copyright (c) 2010-2019 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  GL counter definitions for GFX8
//==============================================================================

#include "GPACounter.h"
#include "GPAHWCounterGfx8.h"
#include "GPAHWExposedCountersGfx8.h"
#include "GPAHWCounterGLGfx8.h"

// This file is autogenerated by the ConvertHWEnums project

namespace CounterGfx8
{
    GPA_HardwareCounterDesc* GLCounterGroupArrayGfx8[] = {
        CB0countersGfx8,
        CB1countersGfx8,
        CB2countersGfx8,
        CB3countersGfx8,
        CPFcountersGfx8,
        DB0countersGfx8,
        DB1countersGfx8,
        DB2countersGfx8,
        DB3countersGfx8,
        GRBMcountersGfx8,
        GRBMSE0countersGfx8,
        PA_SU0countersGfx8,
        PA_SC0countersGfx8,
        SPI0countersGfx8,
        SQ0countersGfx8,
        SQ_ES0countersGfx8,
        SQ_GS0countersGfx8,
        SQ_VS0countersGfx8,
        SQ_PS0countersGfx8,
        SQ_LS0countersGfx8,
        SQ_HS0countersGfx8,
        SQ_CS0countersGfx8,
        SX0countersGfx8,
        TA0countersGfx8,
        TA1countersGfx8,
        TA2countersGfx8,
        TA3countersGfx8,
        TA4countersGfx8,
        TA5countersGfx8,
        TA6countersGfx8,
        TA7countersGfx8,
        TA8countersGfx8,
        TA9countersGfx8,
        TA10countersGfx8,
        TA11countersGfx8,
        TA12countersGfx8,
        TA13countersGfx8,
        TA14countersGfx8,
        TA15countersGfx8,
        TCA0countersGfx8,
        TCA1countersGfx8,
        TCC0countersGfx8,
        TCC1countersGfx8,
        TCC2countersGfx8,
        TCC3countersGfx8,
        TCC4countersGfx8,
        TCC5countersGfx8,
        TCC6countersGfx8,
        TCC7countersGfx8,
        TCC8countersGfx8,
        TCC9countersGfx8,
        TCC10countersGfx8,
        TCC11countersGfx8,
        TCC12countersGfx8,
        TCC13countersGfx8,
        TCC14countersGfx8,
        TCC15countersGfx8,
        TD0countersGfx8,
        TD1countersGfx8,
        TD2countersGfx8,
        TD3countersGfx8,
        TD4countersGfx8,
        TD5countersGfx8,
        TD6countersGfx8,
        TD7countersGfx8,
        TD8countersGfx8,
        TD9countersGfx8,
        TD10countersGfx8,
        TD11countersGfx8,
        TD12countersGfx8,
        TD13countersGfx8,
        TD14countersGfx8,
        TD15countersGfx8,
        TCP0countersGfx8,
        TCP1countersGfx8,
        TCP2countersGfx8,
        TCP3countersGfx8,
        TCP4countersGfx8,
        TCP5countersGfx8,
        TCP6countersGfx8,
        TCP7countersGfx8,
        TCP8countersGfx8,
        TCP9countersGfx8,
        TCP10countersGfx8,
        TCP11countersGfx8,
        TCP12countersGfx8,
        TCP13countersGfx8,
        TCP14countersGfx8,
        TCP15countersGfx8,
        GDScountersGfx8,
        VGT0countersGfx8,
        IA0countersGfx8,
        MC0countersGfx8,
        SRBMcountersGfx8,
        WDcountersGfx8,
        CPGcountersGfx8,
        CPCcountersGfx8,
        GPINcountersGfx8,
        GPUTimecountersGfx8,
    };

    GPA_HardwareCounterDesc* GLExposedCountersGroupArrayGfx8[] = {
        CB0ExposedCountersGfx8,
        CB1ExposedCountersGfx8,
        CB2ExposedCountersGfx8,
        CB3ExposedCountersGfx8,
        DB0ExposedCountersGfx8,
        DB1ExposedCountersGfx8,
        DB2ExposedCountersGfx8,
        DB3ExposedCountersGfx8,
        GRBMExposedCountersGfx8,
        PA_SU0ExposedCountersGfx8,
        PA_SC0ExposedCountersGfx8,
        SPI0ExposedCountersGfx8,
        SQ0ExposedCountersGfx8,
        SQ_ES0ExposedCountersGfx8,
        SQ_GS0ExposedCountersGfx8,
        SQ_VS0ExposedCountersGfx8,
        SQ_PS0ExposedCountersGfx8,
        SQ_LS0ExposedCountersGfx8,
        SQ_HS0ExposedCountersGfx8,
        SQ_CS0ExposedCountersGfx8,
        SX0ExposedCountersGfx8,
        TA0ExposedCountersGfx8,
        TA1ExposedCountersGfx8,
        TA2ExposedCountersGfx8,
        TA3ExposedCountersGfx8,
        TA4ExposedCountersGfx8,
        TA5ExposedCountersGfx8,
        TA6ExposedCountersGfx8,
        TA7ExposedCountersGfx8,
        TA8ExposedCountersGfx8,
        TA9ExposedCountersGfx8,
        TA10ExposedCountersGfx8,
        TA11ExposedCountersGfx8,
        TA12ExposedCountersGfx8,
        TA13ExposedCountersGfx8,
        TA14ExposedCountersGfx8,
        TA15ExposedCountersGfx8,
        TCC0ExposedCountersGfx8,
        TCC1ExposedCountersGfx8,
        TCC2ExposedCountersGfx8,
        TCC3ExposedCountersGfx8,
        TCC4ExposedCountersGfx8,
        TCC5ExposedCountersGfx8,
        TCC6ExposedCountersGfx8,
        TCC7ExposedCountersGfx8,
        TCC8ExposedCountersGfx8,
        TCC9ExposedCountersGfx8,
        TCC10ExposedCountersGfx8,
        TCC11ExposedCountersGfx8,
        TCC12ExposedCountersGfx8,
        TCC13ExposedCountersGfx8,
        TCC14ExposedCountersGfx8,
        TCC15ExposedCountersGfx8,
        TCP0ExposedCountersGfx8,
        TCP1ExposedCountersGfx8,
        TCP2ExposedCountersGfx8,
        TCP3ExposedCountersGfx8,
        TCP4ExposedCountersGfx8,
        TCP5ExposedCountersGfx8,
        TCP6ExposedCountersGfx8,
        TCP7ExposedCountersGfx8,
        TCP8ExposedCountersGfx8,
        TCP9ExposedCountersGfx8,
        TCP10ExposedCountersGfx8,
        TCP11ExposedCountersGfx8,
        TCP12ExposedCountersGfx8,
        TCP13ExposedCountersGfx8,
        TCP14ExposedCountersGfx8,
        TCP15ExposedCountersGfx8,
        VGT0ExposedCountersGfx8,
        GPUTimeExposedCountersGfx8,
    };

    GPA_CounterGroupDesc HWGLGroupsGfx8[] = {
        {0, "CB0", 0, 396, 4, 4},
        {1, "CB1", 1, 396, 4, 4},
        {2, "CB2", 2, 396, 4, 4},
        {3, "CB3", 3, 396, 4, 4},
        {4, "CPF", 0, 19, 2, 4},
        {5, "DB0", 0, 257, 4, 6},
        {6, "DB1", 1, 257, 4, 6},
        {7, "DB2", 2, 257, 4, 6},
        {8, "DB3", 3, 257, 4, 6},
        {9, "GRBM", 0, 34, 2, 0},
        {10, "GRBMSE", 0, 15, 4, 0},
        {11, "PA_SU", 0, 153, 4, 6},
        {12, "PA_SC", 0, 397, 8, 4},
        {13, "SPI", 0, 197, 6, 16},
        {14, "SQ", 0, 299, 16, 16},
        {15, "SQ_ES", 0, 299, 16, 16},
        {16, "SQ_GS", 0, 299, 16, 16},
        {17, "SQ_VS", 0, 299, 16, 16},
        {18, "SQ_PS", 0, 299, 16, 16},
        {19, "SQ_LS", 0, 299, 16, 16},
        {20, "SQ_HS", 0, 299, 16, 16},
        {21, "SQ_CS", 0, 299, 16, 16},
        {22, "SX", 0, 34, 4, 8},
        {23, "TA0", 0, 119, 2, 4},
        {24, "TA1", 1, 119, 2, 4},
        {25, "TA2", 2, 119, 2, 4},
        {26, "TA3", 3, 119, 2, 4},
        {27, "TA4", 4, 119, 2, 4},
        {28, "TA5", 5, 119, 2, 4},
        {29, "TA6", 6, 119, 2, 4},
        {30, "TA7", 7, 119, 2, 4},
        {31, "TA8", 8, 119, 2, 4},
        {32, "TA9", 9, 119, 2, 4},
        {33, "TA10", 10, 119, 2, 4},
        {34, "TA11", 11, 119, 2, 4},
        {35, "TA12", 12, 119, 2, 4},
        {36, "TA13", 13, 119, 2, 4},
        {37, "TA14", 14, 119, 2, 4},
        {38, "TA15", 15, 119, 2, 4},
        {39, "TCA0", 0, 35, 4, 8},
        {40, "TCA1", 1, 35, 4, 8},
        {41, "TCC0", 0, 192, 4, 8},
        {42, "TCC1", 1, 192, 4, 8},
        {43, "TCC2", 2, 192, 4, 8},
        {44, "TCC3", 3, 192, 4, 8},
        {45, "TCC4", 4, 192, 4, 8},
        {46, "TCC5", 5, 192, 4, 8},
        {47, "TCC6", 6, 192, 4, 8},
        {48, "TCC7", 7, 192, 4, 8},
        {49, "TCC8", 8, 192, 4, 8},
        {50, "TCC9", 9, 192, 4, 8},
        {51, "TCC10", 10, 192, 4, 8},
        {52, "TCC11", 11, 192, 4, 8},
        {53, "TCC12", 12, 192, 4, 8},
        {54, "TCC13", 13, 192, 4, 8},
        {55, "TCC14", 14, 192, 4, 8},
        {56, "TCC15", 15, 192, 4, 8},
        {57, "TD0", 0, 55, 2, 4},
        {58, "TD1", 1, 55, 2, 4},
        {59, "TD2", 2, 55, 2, 4},
        {60, "TD3", 3, 55, 2, 4},
        {61, "TD4", 4, 55, 2, 4},
        {62, "TD5", 5, 55, 2, 4},
        {63, "TD6", 6, 55, 2, 4},
        {64, "TD7", 7, 55, 2, 4},
        {65, "TD8", 8, 55, 2, 4},
        {66, "TD9", 9, 55, 2, 4},
        {67, "TD10", 10, 55, 2, 4},
        {68, "TD11", 11, 55, 2, 4},
        {69, "TD12", 12, 55, 2, 4},
        {70, "TD13", 13, 55, 2, 4},
        {71, "TD14", 14, 55, 2, 4},
        {72, "TD15", 15, 55, 2, 4},
        {73, "TCP0", 0, 180, 4, 6},
        {74, "TCP1", 1, 180, 4, 6},
        {75, "TCP2", 2, 180, 4, 6},
        {76, "TCP3", 3, 180, 4, 6},
        {77, "TCP4", 4, 180, 4, 6},
        {78, "TCP5", 5, 180, 4, 6},
        {79, "TCP6", 6, 180, 4, 6},
        {80, "TCP7", 7, 180, 4, 6},
        {81, "TCP8", 8, 180, 4, 6},
        {82, "TCP9", 9, 180, 4, 6},
        {83, "TCP10", 10, 180, 4, 6},
        {84, "TCP11", 11, 180, 4, 6},
        {85, "TCP12", 12, 180, 4, 6},
        {86, "TCP13", 13, 180, 4, 6},
        {87, "TCP14", 14, 180, 4, 6},
        {88, "TCP15", 15, 180, 4, 6},
        {89, "GDS", 0, 121, 4, 4},
        {90, "VGT", 0, 147, 4, 6},
        {91, "IA", 0, 24, 4, 4},
        {92, "MC", 0, 33, 4, 0},
        {93, "SRBM", 0, 27, 2, 0},
        {94, "WD", 0, 37, 4, 0},
        {95, "CPG", 0, 48, 2, 4},
        {96, "CPC", 0, 24, 2, 4},
        {97, "GPIN", 0, 5, 5, 0},
        {98, "GPUTime", 0, 6, 2, 0},
    };

    GPA_CounterGroupExposedCounterDesc HWGLExposedCountersByGroupGfx8[] = {
        {0, 0, {7, 116, 117, 118, 118, 126, 127, 128, 162, 257, 259}},
        {1, 396, {7, 116, 117, 118, 118, 126, 127, 128, 162, 257, 259}},
        {2, 792, {7, 116, 117, 118, 118, 126, 127, 128, 162, 257, 259}},
        {3, 1188, {7, 116, 117, 118, 118, 126, 127, 128, 162, 257, 259}},
        {5, 1603, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {6, 1860, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {7, 2117, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {8, 2374, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {9, 2631, {0, 2}},
        {11, 2680, {8, 14, 21, 54, 55, 56, 57, 61, 62, 73, 74, 105, 109}},
        {12, 2833, {163, 164, 165, 166, 239, 240, 241, 242, 263}},
        {13, 3230, {1, 10, 17, 20, 26, 32, 38, 44, 48, 54, 58, 59, 62, 64, 65, 68, 70, 75}},
        {14, 3427, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 61, 81, 86, 89, 97}},
        {15, 3726, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 61, 81, 86, 89, 97}},
        {16, 4025, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 61, 81, 86, 89, 97}},
        {17, 4324, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 61, 81, 86, 89, 97}},
        {18, 4623, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 61, 81, 86, 89, 97}},
        {19, 4922, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 61, 81, 86, 89, 97}},
        {20, 5221, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 61, 81, 86, 89, 97}},
        {21, 5520, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 61, 81, 86, 89, 97}},
        {22, 5819, {12, 14, 17, 19, 22, 24, 27, 29}},
        {23, 5853, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {24, 5972, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {25, 6091, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {26, 6210, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {27, 6329, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {28, 6448, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {29, 6567, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {30, 6686, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {31, 6805, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {32, 6924, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {33, 7043, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {34, 7162, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {35, 7281, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {36, 7400, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {37, 7519, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {38, 7638, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {41, 7827, {18, 19, 26, 28, 35}},
        {42, 8019, {18, 19, 26, 28, 35}},
        {43, 8211, {18, 19, 26, 28, 35}},
        {44, 8403, {18, 19, 26, 28, 35}},
        {45, 8595, {18, 19, 26, 28, 35}},
        {46, 8787, {18, 19, 26, 28, 35}},
        {47, 8979, {18, 19, 26, 28, 35}},
        {48, 9171, {18, 19, 26, 28, 35}},
        {49, 9363, {18, 19, 26, 28, 35}},
        {50, 9555, {18, 19, 26, 28, 35}},
        {51, 9747, {18, 19, 26, 28, 35}},
        {52, 9939, {18, 19, 26, 28, 35}},
        {53, 10131, {18, 19, 26, 28, 35}},
        {54, 10323, {18, 19, 26, 28, 35}},
        {55, 10515, {18, 19, 26, 28, 35}},
        {56, 10707, {18, 19, 26, 28, 35}},
        {73, 11779, {3}},
        {74, 11959, {3}},
        {75, 12139, {3}},
        {76, 12319, {3}},
        {77, 12499, {3}},
        {78, 12679, {3}},
        {79, 12859, {3}},
        {80, 13039, {3}},
        {81, 13219, {3}},
        {82, 13399, {3}},
        {83, 13579, {3}},
        {84, 13759, {3}},
        {85, 13939, {3}},
        {86, 14119, {3}},
        {87, 14299, {3}},
        {88, 14479, {3}},
        {90, 14780, {1, 9, 20, 96, 105, 124}},
        {98, 15125, {0, 1, 2, 3, 4, 5}},
    };

    GPA_PaddedCounterDesc GLPaddedCounterByGroupGfx8[] = {
    {}
    };

    GPA_SQCounterGroupDesc HWGLSQGroupsGfx8[] = {
        {14, 0, SQ_ALL},
        {15, 0, SQ_ES},
        {16, 0, SQ_GS},
        {17, 0, SQ_VS},
        {18, 0, SQ_PS},
        {19, 0, SQ_LS},
        {20, 0, SQ_HS},
        {21, 0, SQ_CS},
    };


    unsigned int HWGLSQIsolatedGroupsGfx8[] = {
        23, // Ta
        24, // Ta
        25, // Ta
        26, // Ta
        27, // Ta
        28, // Ta
        29, // Ta
        30, // Ta
        31, // Ta
        32, // Ta
        33, // Ta
        34, // Ta
        35, // Ta
        36, // Ta
        37, // Ta
        38, // Ta
        39, // Tca
        40, // Tca
        41, // Tcc
        42, // Tcc
        43, // Tcc
        44, // Tcc
        45, // Tcc
        46, // Tcc
        47, // Tcc
        48, // Tcc
        49, // Tcc
        50, // Tcc
        51, // Tcc
        52, // Tcc
        53, // Tcc
        54, // Tcc
        55, // Tcc
        56, // Tcc
        57, // Td
        58, // Td
        59, // Td
        60, // Td
        61, // Td
        62, // Td
        63, // Td
        64, // Td
        65, // Td
        66, // Td
        67, // Td
        68, // Td
        69, // Td
        70, // Td
        71, // Td
        72, // Td
        73, // Tcp
        74, // Tcp
        75, // Tcp
        76, // Tcp
        77, // Tcp
        78, // Tcp
        79, // Tcp
        80, // Tcp
        81, // Tcp
        82, // Tcp
        83, // Tcp
        84, // Tcp
        85, // Tcp
        86, // Tcp
        87, // Tcp
        88, // Tcp
    };

    const unsigned int HWGLGputimeBottomToBottomDurationIndexGfx8 = 15125; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for GL for Gfx8 family
    const unsigned int HWGLGputimeBottomToBottomStartIndexGfx8 = static_cast<unsigned int>(-1); ///< Index of time of the previous command reaching bottom of pipe for GL for Gfx8 family
    const unsigned int HWGLGputimeBottomToBottomEndIndexGfx8 = static_cast<unsigned int>(-1); ///< Index of time of the current command reaching bottom of pipe for GL for Gfx8 family
    const unsigned int HWGLGputimeTopToBottomDurationIndexGfx8 = 15128; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for GL for Gfx8 family
    const unsigned int HWGLGputimeTopToBottomStartIndexGfx8 = static_cast<unsigned int>(-1); ///< Index of time that the current command reaches the top of pipe for GL for Gfx8 family
    const unsigned int HWGLGputimeTopToBottomEndIndexGfx8 = static_cast<unsigned int>(-1); ///< Index of time that the current command reaches the bottom of pipe for GL for Gfx8 family
    const std::set<unsigned int> HWGLTimestampBlockIdsGfx8 =       {98}; ///< Timestamp block id's for GL for Gfx8 family
    const std::set<unsigned int> HWGLTimeCounterIndicesGfx8 =      {15125, 15126, 15127, 15128, 15129, 15130}; ///< Timestamp counter indices for GL for Gfx8 family
    const unsigned int           HWGLGroupCountGfx8                = sizeof(HWGLGroupsGfx8) / sizeof(GPA_CounterGroupDesc);
    const unsigned int           HWGLExposedCountersGroupCountGfx8 = 71;
    const unsigned int           GLPaddedCounterGroupCountGfx8 = 0;
    const unsigned int           HWGLSQGroupCountGfx8              = sizeof(HWGLSQGroupsGfx8) / sizeof(GPA_SQCounterGroupDesc);
    const unsigned int           HWGLSQIsolatedGroupCountGfx8      = sizeof(HWGLSQIsolatedGroupsGfx8) / sizeof(unsigned int);
}; // namespace