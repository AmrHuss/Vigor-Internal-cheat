#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_NetworkStats

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_NetworkStats.UI_NetworkStats_C.ExecuteUbergraph_UI_NetworkStats
// 0x0080 (0x0080 - 0x0000)
struct UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_LagText;                              // 0x0008(0x0018)(ConstParm)
	class FText                                   K2Node_Event_BandwidthInText;                      // 0x0020(0x0018)(ConstParm)
	class FText                                   K2Node_Event_BandwidthOutText;                     // 0x0038(0x0018)(ConstParm)
	class FText                                   K2Node_Event_LossInText;                           // 0x0050(0x0018)(ConstParm)
	class FText                                   K2Node_Event_LossOutText;                          // 0x0068(0x0018)(ConstParm)
};
static_assert(alignof(UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats) == 0x000008, "Wrong alignment on UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats");
static_assert(sizeof(UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats) == 0x000080, "Wrong size on UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats");
static_assert(offsetof(UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats, EntryPoint) == 0x000000, "Member 'UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats, K2Node_Event_LagText) == 0x000008, "Member 'UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats::K2Node_Event_LagText' has a wrong offset!");
static_assert(offsetof(UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats, K2Node_Event_BandwidthInText) == 0x000020, "Member 'UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats::K2Node_Event_BandwidthInText' has a wrong offset!");
static_assert(offsetof(UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats, K2Node_Event_BandwidthOutText) == 0x000038, "Member 'UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats::K2Node_Event_BandwidthOutText' has a wrong offset!");
static_assert(offsetof(UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats, K2Node_Event_LossInText) == 0x000050, "Member 'UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats::K2Node_Event_LossInText' has a wrong offset!");
static_assert(offsetof(UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats, K2Node_Event_LossOutText) == 0x000068, "Member 'UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats::K2Node_Event_LossOutText' has a wrong offset!");

// Function UI_NetworkStats.UI_NetworkStats_C.UpdateTexts
// 0x0078 (0x0078 - 0x0000)
struct UI_NetworkStats_C_UpdateTexts final
{
public:
	class FText                                   LagText;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   BandwidthInText;                                   // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   BandwidthOutText;                                  // 0x0030(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   LossInText;                                        // 0x0048(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   LossOutText;                                       // 0x0060(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UI_NetworkStats_C_UpdateTexts) == 0x000008, "Wrong alignment on UI_NetworkStats_C_UpdateTexts");
static_assert(sizeof(UI_NetworkStats_C_UpdateTexts) == 0x000078, "Wrong size on UI_NetworkStats_C_UpdateTexts");
static_assert(offsetof(UI_NetworkStats_C_UpdateTexts, LagText) == 0x000000, "Member 'UI_NetworkStats_C_UpdateTexts::LagText' has a wrong offset!");
static_assert(offsetof(UI_NetworkStats_C_UpdateTexts, BandwidthInText) == 0x000018, "Member 'UI_NetworkStats_C_UpdateTexts::BandwidthInText' has a wrong offset!");
static_assert(offsetof(UI_NetworkStats_C_UpdateTexts, BandwidthOutText) == 0x000030, "Member 'UI_NetworkStats_C_UpdateTexts::BandwidthOutText' has a wrong offset!");
static_assert(offsetof(UI_NetworkStats_C_UpdateTexts, LossInText) == 0x000048, "Member 'UI_NetworkStats_C_UpdateTexts::LossInText' has a wrong offset!");
static_assert(offsetof(UI_NetworkStats_C_UpdateTexts, LossOutText) == 0x000060, "Member 'UI_NetworkStats_C_UpdateTexts::LossOutText' has a wrong offset!");

}

