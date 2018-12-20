//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  VK internal counter definitions for GFX7
//==============================================================================

#include "GPAInternalCounter.h"
#include "GPAInternalCountersGfx7.h"
#include "InternalCountersVKGfx7.h"

// This file is autogenerated by the ConvertHWEnums project

GPA_HardwareCounterDesc* VKCounterGroupArrayGfx7[] =
{
    CPFcountersGfx7,
    IA0countersGfx7,
    IA1countersGfx7,
    VGT0countersGfx7,
    VGT1countersGfx7,
    VGT2countersGfx7,
    VGT3countersGfx7,
    PA_SU0countersGfx7,
    PA_SU1countersGfx7,
    PA_SU2countersGfx7,
    PA_SU3countersGfx7,
    PA_SC0countersGfx7,
    PA_SC1countersGfx7,
    PA_SC2countersGfx7,
    PA_SC3countersGfx7,
    SPI0countersGfx7,
    SPI1countersGfx7,
    SPI2countersGfx7,
    SPI3countersGfx7,
    SQ0countersGfx7,
    SQ1countersGfx7,
    SQ2countersGfx7,
    SQ3countersGfx7,
    SQ_ES0countersGfx7,
    SQ_ES1countersGfx7,
    SQ_ES2countersGfx7,
    SQ_ES3countersGfx7,
    SQ_GS0countersGfx7,
    SQ_GS1countersGfx7,
    SQ_GS2countersGfx7,
    SQ_GS3countersGfx7,
    SQ_VS0countersGfx7,
    SQ_VS1countersGfx7,
    SQ_VS2countersGfx7,
    SQ_VS3countersGfx7,
    SQ_PS0countersGfx7,
    SQ_PS1countersGfx7,
    SQ_PS2countersGfx7,
    SQ_PS3countersGfx7,
    SQ_LS0countersGfx7,
    SQ_LS1countersGfx7,
    SQ_LS2countersGfx7,
    SQ_LS3countersGfx7,
    SQ_HS0countersGfx7,
    SQ_HS1countersGfx7,
    SQ_HS2countersGfx7,
    SQ_HS3countersGfx7,
    SQ_CS0countersGfx7,
    SQ_CS1countersGfx7,
    SQ_CS2countersGfx7,
    SQ_CS3countersGfx7,
    SX0countersGfx7,
    SX1countersGfx7,
    SX2countersGfx7,
    SX3countersGfx7,
    TA0countersGfx7,
    TA1countersGfx7,
    TA2countersGfx7,
    TA3countersGfx7,
    TA4countersGfx7,
    TA5countersGfx7,
    TA6countersGfx7,
    TA7countersGfx7,
    TA8countersGfx7,
    TA9countersGfx7,
    TA10countersGfx7,
    TA11countersGfx7,
    TA12countersGfx7,
    TA13countersGfx7,
    TA14countersGfx7,
    TA15countersGfx7,
    TA16countersGfx7,
    TA17countersGfx7,
    TA18countersGfx7,
    TA19countersGfx7,
    TA20countersGfx7,
    TA21countersGfx7,
    TA22countersGfx7,
    TA23countersGfx7,
    TA24countersGfx7,
    TA25countersGfx7,
    TA26countersGfx7,
    TA27countersGfx7,
    TA28countersGfx7,
    TA29countersGfx7,
    TA30countersGfx7,
    TA31countersGfx7,
    TA32countersGfx7,
    TA33countersGfx7,
    TA34countersGfx7,
    TA35countersGfx7,
    TA36countersGfx7,
    TA37countersGfx7,
    TA38countersGfx7,
    TA39countersGfx7,
    TA40countersGfx7,
    TA41countersGfx7,
    TA42countersGfx7,
    TA43countersGfx7,
    TD0countersGfx7,
    TD1countersGfx7,
    TD2countersGfx7,
    TD3countersGfx7,
    TD4countersGfx7,
    TD5countersGfx7,
    TD6countersGfx7,
    TD7countersGfx7,
    TD8countersGfx7,
    TD9countersGfx7,
    TD10countersGfx7,
    TD11countersGfx7,
    TD12countersGfx7,
    TD13countersGfx7,
    TD14countersGfx7,
    TD15countersGfx7,
    TD16countersGfx7,
    TD17countersGfx7,
    TD18countersGfx7,
    TD19countersGfx7,
    TD20countersGfx7,
    TD21countersGfx7,
    TD22countersGfx7,
    TD23countersGfx7,
    TD24countersGfx7,
    TD25countersGfx7,
    TD26countersGfx7,
    TD27countersGfx7,
    TD28countersGfx7,
    TD29countersGfx7,
    TD30countersGfx7,
    TD31countersGfx7,
    TD32countersGfx7,
    TD33countersGfx7,
    TD34countersGfx7,
    TD35countersGfx7,
    TD36countersGfx7,
    TD37countersGfx7,
    TD38countersGfx7,
    TD39countersGfx7,
    TD40countersGfx7,
    TD41countersGfx7,
    TD42countersGfx7,
    TD43countersGfx7,
    TCP0countersGfx7,
    TCP1countersGfx7,
    TCP2countersGfx7,
    TCP3countersGfx7,
    TCP4countersGfx7,
    TCP5countersGfx7,
    TCP6countersGfx7,
    TCP7countersGfx7,
    TCP8countersGfx7,
    TCP9countersGfx7,
    TCP10countersGfx7,
    TCP11countersGfx7,
    TCP12countersGfx7,
    TCP13countersGfx7,
    TCP14countersGfx7,
    TCP15countersGfx7,
    TCP16countersGfx7,
    TCP17countersGfx7,
    TCP18countersGfx7,
    TCP19countersGfx7,
    TCP20countersGfx7,
    TCP21countersGfx7,
    TCP22countersGfx7,
    TCP23countersGfx7,
    TCP24countersGfx7,
    TCP25countersGfx7,
    TCP26countersGfx7,
    TCP27countersGfx7,
    TCP28countersGfx7,
    TCP29countersGfx7,
    TCP30countersGfx7,
    TCP31countersGfx7,
    TCP32countersGfx7,
    TCP33countersGfx7,
    TCP34countersGfx7,
    TCP35countersGfx7,
    TCP36countersGfx7,
    TCP37countersGfx7,
    TCP38countersGfx7,
    TCP39countersGfx7,
    TCP40countersGfx7,
    TCP41countersGfx7,
    TCP42countersGfx7,
    TCP43countersGfx7,
    TCC0countersGfx7,
    TCC1countersGfx7,
    TCC2countersGfx7,
    TCC3countersGfx7,
    TCC4countersGfx7,
    TCC5countersGfx7,
    TCC6countersGfx7,
    TCC7countersGfx7,
    TCC8countersGfx7,
    TCC9countersGfx7,
    TCC10countersGfx7,
    TCC11countersGfx7,
    TCC12countersGfx7,
    TCC13countersGfx7,
    TCC14countersGfx7,
    TCC15countersGfx7,
    TCA0countersGfx7,
    TCA1countersGfx7,
    DB0countersGfx7,
    DB1countersGfx7,
    DB2countersGfx7,
    DB3countersGfx7,
    DB4countersGfx7,
    DB5countersGfx7,
    DB6countersGfx7,
    DB7countersGfx7,
    DB8countersGfx7,
    DB9countersGfx7,
    DB10countersGfx7,
    DB11countersGfx7,
    DB12countersGfx7,
    DB13countersGfx7,
    DB14countersGfx7,
    DB15countersGfx7,
    CB0countersGfx7,
    CB1countersGfx7,
    CB2countersGfx7,
    CB3countersGfx7,
    CB4countersGfx7,
    CB5countersGfx7,
    CB6countersGfx7,
    CB7countersGfx7,
    CB8countersGfx7,
    CB9countersGfx7,
    CB10countersGfx7,
    CB11countersGfx7,
    CB12countersGfx7,
    CB13countersGfx7,
    CB14countersGfx7,
    CB15countersGfx7,
    GDScountersGfx7,
    SRBMcountersGfx7,
    GRBMcountersGfx7,
    GRBMSE0countersGfx7,
    GRBMSE1countersGfx7,
    GRBMSE2countersGfx7,
    GRBMSE3countersGfx7,
    RLCcountersGfx7,
    SDMA0countersGfx7,
    SDMA1countersGfx7,
    MC0countersGfx7,
    MC1countersGfx7,
    MC2countersGfx7,
    MC3countersGfx7,
    MC4countersGfx7,
    MC5countersGfx7,
    MC6countersGfx7,
    MC7countersGfx7,
    MC8countersGfx7,
    MC9countersGfx7,
    MC10countersGfx7,
    MC11countersGfx7,
    MC12countersGfx7,
    MC13countersGfx7,
    MC14countersGfx7,
    MC15countersGfx7,
    CPGcountersGfx7,
    CPCcountersGfx7,
    WDcountersGfx7,
    GPUTimecountersGfx7,
};

GPA_CounterGroupDesc HWVKGroupsGfx7[] =
{
    {0, "CPF", 0, 17, 2},
    {1, "IA0", 0, 22, 4},
    {2, "IA1", 1, 22, 4},
    {3, "VGT0", 0, 140, 4},
    {4, "VGT1", 1, 140, 4},
    {5, "VGT2", 2, 140, 4},
    {6, "VGT3", 3, 140, 4},
    {7, "PA_SU0", 0, 153, 4},
    {8, "PA_SU1", 1, 153, 4},
    {9, "PA_SU2", 2, 153, 4},
    {10, "PA_SU3", 3, 153, 4},
    {11, "PA_SC0", 0, 395, 8},
    {12, "PA_SC1", 1, 395, 8},
    {13, "PA_SC2", 2, 395, 8},
    {14, "PA_SC3", 3, 395, 8},
    {15, "SPI0", 0, 186, 6},
    {16, "SPI1", 1, 186, 6},
    {17, "SPI2", 2, 186, 6},
    {18, "SPI3", 3, 186, 6},
    {19, "SQ0", 0, 252, 16},
    {20, "SQ1", 1, 252, 16},
    {21, "SQ2", 2, 252, 16},
    {22, "SQ3", 3, 252, 16},
    {23, "SQ_ES0", 0, 252, 16},
    {24, "SQ_ES1", 1, 252, 16},
    {25, "SQ_ES2", 2, 252, 16},
    {26, "SQ_ES3", 3, 252, 16},
    {27, "SQ_GS0", 0, 252, 16},
    {28, "SQ_GS1", 1, 252, 16},
    {29, "SQ_GS2", 2, 252, 16},
    {30, "SQ_GS3", 3, 252, 16},
    {31, "SQ_VS0", 0, 252, 16},
    {32, "SQ_VS1", 1, 252, 16},
    {33, "SQ_VS2", 2, 252, 16},
    {34, "SQ_VS3", 3, 252, 16},
    {35, "SQ_PS0", 0, 252, 16},
    {36, "SQ_PS1", 1, 252, 16},
    {37, "SQ_PS2", 2, 252, 16},
    {38, "SQ_PS3", 3, 252, 16},
    {39, "SQ_LS0", 0, 252, 16},
    {40, "SQ_LS1", 1, 252, 16},
    {41, "SQ_LS2", 2, 252, 16},
    {42, "SQ_LS3", 3, 252, 16},
    {43, "SQ_HS0", 0, 252, 16},
    {44, "SQ_HS1", 1, 252, 16},
    {45, "SQ_HS2", 2, 252, 16},
    {46, "SQ_HS3", 3, 252, 16},
    {47, "SQ_CS0", 0, 252, 16},
    {48, "SQ_CS1", 1, 252, 16},
    {49, "SQ_CS2", 2, 252, 16},
    {50, "SQ_CS3", 3, 252, 16},
    {51, "SX0", 0, 32, 4},
    {52, "SX1", 1, 32, 4},
    {53, "SX2", 2, 32, 4},
    {54, "SX3", 3, 32, 4},
    {55, "TA0", 0, 111, 2},
    {56, "TA1", 1, 111, 2},
    {57, "TA2", 2, 111, 2},
    {58, "TA3", 3, 111, 2},
    {59, "TA4", 4, 111, 2},
    {60, "TA5", 5, 111, 2},
    {61, "TA6", 6, 111, 2},
    {62, "TA7", 7, 111, 2},
    {63, "TA8", 8, 111, 2},
    {64, "TA9", 9, 111, 2},
    {65, "TA10", 10, 111, 2},
    {66, "TA11", 11, 111, 2},
    {67, "TA12", 12, 111, 2},
    {68, "TA13", 13, 111, 2},
    {69, "TA14", 14, 111, 2},
    {70, "TA15", 15, 111, 2},
    {71, "TA16", 16, 111, 2},
    {72, "TA17", 17, 111, 2},
    {73, "TA18", 18, 111, 2},
    {74, "TA19", 19, 111, 2},
    {75, "TA20", 20, 111, 2},
    {76, "TA21", 21, 111, 2},
    {77, "TA22", 22, 111, 2},
    {78, "TA23", 23, 111, 2},
    {79, "TA24", 24, 111, 2},
    {80, "TA25", 25, 111, 2},
    {81, "TA26", 26, 111, 2},
    {82, "TA27", 27, 111, 2},
    {83, "TA28", 28, 111, 2},
    {84, "TA29", 29, 111, 2},
    {85, "TA30", 30, 111, 2},
    {86, "TA31", 31, 111, 2},
    {87, "TA32", 32, 111, 2},
    {88, "TA33", 33, 111, 2},
    {89, "TA34", 34, 111, 2},
    {90, "TA35", 35, 111, 2},
    {91, "TA36", 36, 111, 2},
    {92, "TA37", 37, 111, 2},
    {93, "TA38", 38, 111, 2},
    {94, "TA39", 39, 111, 2},
    {95, "TA40", 40, 111, 2},
    {96, "TA41", 41, 111, 2},
    {97, "TA42", 42, 111, 2},
    {98, "TA43", 43, 111, 2},
    {99, "TD0", 0, 49, 2},
    {100, "TD1", 1, 49, 2},
    {101, "TD2", 2, 49, 2},
    {102, "TD3", 3, 49, 2},
    {103, "TD4", 4, 49, 2},
    {104, "TD5", 5, 49, 2},
    {105, "TD6", 6, 49, 2},
    {106, "TD7", 7, 49, 2},
    {107, "TD8", 8, 49, 2},
    {108, "TD9", 9, 49, 2},
    {109, "TD10", 10, 49, 2},
    {110, "TD11", 11, 49, 2},
    {111, "TD12", 12, 49, 2},
    {112, "TD13", 13, 49, 2},
    {113, "TD14", 14, 49, 2},
    {114, "TD15", 15, 49, 2},
    {115, "TD16", 16, 49, 2},
    {116, "TD17", 17, 49, 2},
    {117, "TD18", 18, 49, 2},
    {118, "TD19", 19, 49, 2},
    {119, "TD20", 20, 49, 2},
    {120, "TD21", 21, 49, 2},
    {121, "TD22", 22, 49, 2},
    {122, "TD23", 23, 49, 2},
    {123, "TD24", 24, 49, 2},
    {124, "TD25", 25, 49, 2},
    {125, "TD26", 26, 49, 2},
    {126, "TD27", 27, 49, 2},
    {127, "TD28", 28, 49, 2},
    {128, "TD29", 29, 49, 2},
    {129, "TD30", 30, 49, 2},
    {130, "TD31", 31, 49, 2},
    {131, "TD32", 32, 49, 2},
    {132, "TD33", 33, 49, 2},
    {133, "TD34", 34, 49, 2},
    {134, "TD35", 35, 49, 2},
    {135, "TD36", 36, 49, 2},
    {136, "TD37", 37, 49, 2},
    {137, "TD38", 38, 49, 2},
    {138, "TD39", 39, 49, 2},
    {139, "TD40", 40, 49, 2},
    {140, "TD41", 41, 49, 2},
    {141, "TD42", 42, 49, 2},
    {142, "TD43", 43, 49, 2},
    {143, "TCP0", 0, 154, 4},
    {144, "TCP1", 1, 154, 4},
    {145, "TCP2", 2, 154, 4},
    {146, "TCP3", 3, 154, 4},
    {147, "TCP4", 4, 154, 4},
    {148, "TCP5", 5, 154, 4},
    {149, "TCP6", 6, 154, 4},
    {150, "TCP7", 7, 154, 4},
    {151, "TCP8", 8, 154, 4},
    {152, "TCP9", 9, 154, 4},
    {153, "TCP10", 10, 154, 4},
    {154, "TCP11", 11, 154, 4},
    {155, "TCP12", 12, 154, 4},
    {156, "TCP13", 13, 154, 4},
    {157, "TCP14", 14, 154, 4},
    {158, "TCP15", 15, 154, 4},
    {159, "TCP16", 16, 154, 4},
    {160, "TCP17", 17, 154, 4},
    {161, "TCP18", 18, 154, 4},
    {162, "TCP19", 19, 154, 4},
    {163, "TCP20", 20, 154, 4},
    {164, "TCP21", 21, 154, 4},
    {165, "TCP22", 22, 154, 4},
    {166, "TCP23", 23, 154, 4},
    {167, "TCP24", 24, 154, 4},
    {168, "TCP25", 25, 154, 4},
    {169, "TCP26", 26, 154, 4},
    {170, "TCP27", 27, 154, 4},
    {171, "TCP28", 28, 154, 4},
    {172, "TCP29", 29, 154, 4},
    {173, "TCP30", 30, 154, 4},
    {174, "TCP31", 31, 154, 4},
    {175, "TCP32", 32, 154, 4},
    {176, "TCP33", 33, 154, 4},
    {177, "TCP34", 34, 154, 4},
    {178, "TCP35", 35, 154, 4},
    {179, "TCP36", 36, 154, 4},
    {180, "TCP37", 37, 154, 4},
    {181, "TCP38", 38, 154, 4},
    {182, "TCP39", 39, 154, 4},
    {183, "TCP40", 40, 154, 4},
    {184, "TCP41", 41, 154, 4},
    {185, "TCP42", 42, 154, 4},
    {186, "TCP43", 43, 154, 4},
    {187, "TCC0", 0, 160, 4},
    {188, "TCC1", 1, 160, 4},
    {189, "TCC2", 2, 160, 4},
    {190, "TCC3", 3, 160, 4},
    {191, "TCC4", 4, 160, 4},
    {192, "TCC5", 5, 160, 4},
    {193, "TCC6", 6, 160, 4},
    {194, "TCC7", 7, 160, 4},
    {195, "TCC8", 8, 160, 4},
    {196, "TCC9", 9, 160, 4},
    {197, "TCC10", 10, 160, 4},
    {198, "TCC11", 11, 160, 4},
    {199, "TCC12", 12, 160, 4},
    {200, "TCC13", 13, 160, 4},
    {201, "TCC14", 14, 160, 4},
    {202, "TCC15", 15, 160, 4},
    {203, "TCA0", 0, 39, 4},
    {204, "TCA1", 1, 39, 4},
    {205, "DB0", 0, 257, 4},
    {206, "DB1", 1, 257, 4},
    {207, "DB2", 2, 257, 4},
    {208, "DB3", 3, 257, 4},
    {209, "DB4", 4, 257, 4},
    {210, "DB5", 5, 257, 4},
    {211, "DB6", 6, 257, 4},
    {212, "DB7", 7, 257, 4},
    {213, "DB8", 8, 257, 4},
    {214, "DB9", 9, 257, 4},
    {215, "DB10", 10, 257, 4},
    {216, "DB11", 11, 257, 4},
    {217, "DB12", 12, 257, 4},
    {218, "DB13", 13, 257, 4},
    {219, "DB14", 14, 257, 4},
    {220, "DB15", 15, 257, 4},
    {221, "CB0", 0, 226, 4},
    {222, "CB1", 1, 226, 4},
    {223, "CB2", 2, 226, 4},
    {224, "CB3", 3, 226, 4},
    {225, "CB4", 4, 226, 4},
    {226, "CB5", 5, 226, 4},
    {227, "CB6", 6, 226, 4},
    {228, "CB7", 7, 226, 4},
    {229, "CB8", 8, 226, 4},
    {230, "CB9", 9, 226, 4},
    {231, "CB10", 10, 226, 4},
    {232, "CB11", 11, 226, 4},
    {233, "CB12", 12, 226, 4},
    {234, "CB13", 13, 226, 4},
    {235, "CB14", 14, 226, 4},
    {236, "CB15", 15, 226, 4},
    {237, "GDS", 0, 121, 4},
    {238, "SRBM", 0, 19, 2},
    {239, "GRBM", 0, 34, 2},
    {240, "GRBMSE0", 0, 15, 4},
    {241, "GRBMSE1", 1, 15, 4},
    {242, "GRBMSE2", 2, 15, 4},
    {243, "GRBMSE3", 3, 15, 4},
    {244, "RLC", 0, 7, 2},
    {245, "SDMA0", 0, 60, 2},
    {246, "SDMA1", 1, 60, 2},
    {247, "MC0", 0, 22, 4},
    {248, "MC1", 1, 22, 4},
    {249, "MC2", 2, 22, 4},
    {250, "MC3", 3, 22, 4},
    {251, "MC4", 4, 22, 4},
    {252, "MC5", 5, 22, 4},
    {253, "MC6", 6, 22, 4},
    {254, "MC7", 7, 22, 4},
    {255, "MC8", 8, 22, 4},
    {256, "MC9", 9, 22, 4},
    {257, "MC10", 10, 22, 4},
    {258, "MC11", 11, 22, 4},
    {259, "MC12", 12, 22, 4},
    {260, "MC13", 13, 22, 4},
    {261, "MC14", 14, 22, 4},
    {262, "MC15", 15, 22, 4},
    {263, "CPG", 0, 46, 2},
    {264, "CPC", 0, 22, 2},
    {265, "WD", 0, 10, 4},
    {266, "GPUTime", 0, 6, 2},
};

GPA_SQCounterGroupDesc HWVKSQGroupsGfx7[] =
{
    {19, 0, SQ_ALL},
    {20, 1, SQ_ALL},
    {21, 2, SQ_ALL},
    {22, 3, SQ_ALL},
    {23, 0, SQ_ES},
    {24, 1, SQ_ES},
    {25, 2, SQ_ES},
    {26, 3, SQ_ES},
    {27, 0, SQ_GS},
    {28, 1, SQ_GS},
    {29, 2, SQ_GS},
    {30, 3, SQ_GS},
    {31, 0, SQ_VS},
    {32, 1, SQ_VS},
    {33, 2, SQ_VS},
    {34, 3, SQ_VS},
    {35, 0, SQ_PS},
    {36, 1, SQ_PS},
    {37, 2, SQ_PS},
    {38, 3, SQ_PS},
    {39, 0, SQ_LS},
    {40, 1, SQ_LS},
    {41, 2, SQ_LS},
    {42, 3, SQ_LS},
    {43, 0, SQ_HS},
    {44, 1, SQ_HS},
    {45, 2, SQ_HS},
    {46, 3, SQ_HS},
    {47, 0, SQ_CS},
    {48, 1, SQ_CS},
    {49, 2, SQ_CS},
    {50, 3, SQ_CS},
};


unsigned int HWVKSQIsolatedGroupsGfx7[] =
{
    55, // Ta
    56, // Ta
    57, // Ta
    58, // Ta
    59, // Ta
    60, // Ta
    61, // Ta
    62, // Ta
    63, // Ta
    64, // Ta
    65, // Ta
    66, // Ta
    67, // Ta
    68, // Ta
    69, // Ta
    70, // Ta
    71, // Ta
    72, // Ta
    73, // Ta
    74, // Ta
    75, // Ta
    76, // Ta
    77, // Ta
    78, // Ta
    79, // Ta
    80, // Ta
    81, // Ta
    82, // Ta
    83, // Ta
    84, // Ta
    85, // Ta
    86, // Ta
    87, // Ta
    88, // Ta
    89, // Ta
    90, // Ta
    91, // Ta
    92, // Ta
    93, // Ta
    94, // Ta
    95, // Ta
    96, // Ta
    97, // Ta
    98, // Ta
    99, // Td
    100, // Td
    101, // Td
    102, // Td
    103, // Td
    104, // Td
    105, // Td
    106, // Td
    107, // Td
    108, // Td
    109, // Td
    110, // Td
    111, // Td
    112, // Td
    113, // Td
    114, // Td
    115, // Td
    116, // Td
    117, // Td
    118, // Td
    119, // Td
    120, // Td
    121, // Td
    122, // Td
    123, // Td
    124, // Td
    125, // Td
    126, // Td
    127, // Td
    128, // Td
    129, // Td
    130, // Td
    131, // Td
    132, // Td
    133, // Td
    134, // Td
    135, // Td
    136, // Td
    137, // Td
    138, // Td
    139, // Td
    140, // Td
    141, // Td
    142, // Td
    143, // Tcp
    144, // Tcp
    145, // Tcp
    146, // Tcp
    147, // Tcp
    148, // Tcp
    149, // Tcp
    150, // Tcp
    151, // Tcp
    152, // Tcp
    153, // Tcp
    154, // Tcp
    155, // Tcp
    156, // Tcp
    157, // Tcp
    158, // Tcp
    159, // Tcp
    160, // Tcp
    161, // Tcp
    162, // Tcp
    163, // Tcp
    164, // Tcp
    165, // Tcp
    166, // Tcp
    167, // Tcp
    168, // Tcp
    169, // Tcp
    170, // Tcp
    171, // Tcp
    172, // Tcp
    173, // Tcp
    174, // Tcp
    175, // Tcp
    176, // Tcp
    177, // Tcp
    178, // Tcp
    179, // Tcp
    180, // Tcp
    181, // Tcp
    182, // Tcp
    183, // Tcp
    184, // Tcp
    185, // Tcp
    186, // Tcp
    187, // Tcc
    188, // Tcc
    189, // Tcc
    190, // Tcc
    191, // Tcc
    192, // Tcc
    193, // Tcc
    194, // Tcc
    195, // Tcc
    196, // Tcc
    197, // Tcc
    198, // Tcc
    199, // Tcc
    200, // Tcc
    201, // Tcc
    202, // Tcc
    203, // Tca
    204, // Tca
};

VkGpaPerfBlockAMD HWVKDriverEnumGfx7[] =
{
    VK_GPA_PERF_BLOCK_CPF_AMD,
    VK_GPA_PERF_BLOCK_IA_AMD,
    VK_GPA_PERF_BLOCK_IA_AMD,
    VK_GPA_PERF_BLOCK_VGT_AMD,
    VK_GPA_PERF_BLOCK_VGT_AMD,
    VK_GPA_PERF_BLOCK_VGT_AMD,
    VK_GPA_PERF_BLOCK_VGT_AMD,
    VK_GPA_PERF_BLOCK_PA_AMD,
    VK_GPA_PERF_BLOCK_PA_AMD,
    VK_GPA_PERF_BLOCK_PA_AMD,
    VK_GPA_PERF_BLOCK_PA_AMD,
    VK_GPA_PERF_BLOCK_SC_AMD,
    VK_GPA_PERF_BLOCK_SC_AMD,
    VK_GPA_PERF_BLOCK_SC_AMD,
    VK_GPA_PERF_BLOCK_SC_AMD,
    VK_GPA_PERF_BLOCK_SPI_AMD,
    VK_GPA_PERF_BLOCK_SPI_AMD,
    VK_GPA_PERF_BLOCK_SPI_AMD,
    VK_GPA_PERF_BLOCK_SPI_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SQ_AMD,
    VK_GPA_PERF_BLOCK_SX_AMD,
    VK_GPA_PERF_BLOCK_SX_AMD,
    VK_GPA_PERF_BLOCK_SX_AMD,
    VK_GPA_PERF_BLOCK_SX_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TA_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TD_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCP_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCC_AMD,
    VK_GPA_PERF_BLOCK_TCA_AMD,
    VK_GPA_PERF_BLOCK_TCA_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_DB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_CB_AMD,
    VK_GPA_PERF_BLOCK_GDS_AMD,
    VK_GPA_PERF_BLOCK_SRBM_AMD,
    VK_GPA_PERF_BLOCK_GRBM_AMD,
    VK_GPA_PERF_BLOCK_GRBM_SE_AMD,
    VK_GPA_PERF_BLOCK_GRBM_SE_AMD,
    VK_GPA_PERF_BLOCK_GRBM_SE_AMD,
    VK_GPA_PERF_BLOCK_GRBM_SE_AMD,
    VK_GPA_PERF_BLOCK_RLC_AMD,
    VK_GPA_PERF_BLOCK_DMA_AMD,
    VK_GPA_PERF_BLOCK_DMA_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_MC_AMD,
    VK_GPA_PERF_BLOCK_CPG_AMD,
    VK_GPA_PERF_BLOCK_CPC_AMD,
    VK_GPA_PERF_BLOCK_WD_AMD,
    VK_GPA_PERF_BLOCK_RANGE_SIZE_AMD,
};

const unsigned int HWVKGputimeBottomToBottomDurationIndexGfx7 = 36722; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for VK for Gfx7 family
const unsigned int HWVKGputimeBottomToBottomStartIndexGfx7 = 36723; ///< Index of time of the previous command reaching bottom of pipe for VK for Gfx7 family
const unsigned int HWVKGputimeBottomToBottomEndIndexGfx7 = 36724; ///< Index of time of the current command reaching bottom of pipe for VK for Gfx7 family
const unsigned int HWVKGputimeTopToBottomDurationIndexGfx7 = 36725; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for VK for Gfx7 family
const unsigned int HWVKGputimeTopToBottomStartIndexGfx7 = 36726; ///< Index of time that the current command reaches the top of pipe for VK for Gfx7 family
const unsigned int HWVKGputimeTopToBottomEndIndexGfx7 = 36727; ///< Index of time that the current command reaches the bottom of pipe for VK for Gfx7 family
const std::set<unsigned int> HWVKTimestampBlockIdsGfx7 = { 266 }; ///< Timestamp block id's for VK for Gfx7 family
const std::set<unsigned int> HWVKTimeCounterIndicesGfx7 = { 36722, 36723, 36724, 36725, 36726, 36727 }; ///< Timestamp counter indices for VK for Gfx7 family
const unsigned int HWVKGroupCountGfx7 = sizeof(HWVKGroupsGfx7) / sizeof(GPA_CounterGroupDesc);
const unsigned int HWVKSQGroupCountGfx7 = sizeof(HWVKSQGroupsGfx7) / sizeof(GPA_SQCounterGroupDesc);
const unsigned int HWVKSQIsolatedGroupCountGfx7 = sizeof(HWVKSQIsolatedGroupsGfx7) / sizeof(unsigned int);
