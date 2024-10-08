#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_HC_Poison

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_HC_Poison.S_HC_Poison
// 0x0018 (0x0018 - 0x0000)
struct FS_HC_Poison final
{
public:
	float                                         Strength_5_A9C89E7742267901AE128983072FF52B;       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration_6_C1ACB192478457333D9109A4A9375CB4;       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        InstigatingCharacter_11_474BB7FB45CCF8AC21AF3189B9FFF2C7; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 InstigatingItem_12_542C00FB4965BBFBE0726DA083FDE199; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_HC_Poison) == 0x000008, "Wrong alignment on FS_HC_Poison");
static_assert(sizeof(FS_HC_Poison) == 0x000018, "Wrong size on FS_HC_Poison");
static_assert(offsetof(FS_HC_Poison, Strength_5_A9C89E7742267901AE128983072FF52B) == 0x000000, "Member 'FS_HC_Poison::Strength_5_A9C89E7742267901AE128983072FF52B' has a wrong offset!");
static_assert(offsetof(FS_HC_Poison, Duration_6_C1ACB192478457333D9109A4A9375CB4) == 0x000004, "Member 'FS_HC_Poison::Duration_6_C1ACB192478457333D9109A4A9375CB4' has a wrong offset!");
static_assert(offsetof(FS_HC_Poison, InstigatingCharacter_11_474BB7FB45CCF8AC21AF3189B9FFF2C7) == 0x000008, "Member 'FS_HC_Poison::InstigatingCharacter_11_474BB7FB45CCF8AC21AF3189B9FFF2C7' has a wrong offset!");
static_assert(offsetof(FS_HC_Poison, InstigatingItem_12_542C00FB4965BBFBE0726DA083FDE199) == 0x000010, "Member 'FS_HC_Poison::InstigatingItem_12_542C00FB4965BBFBE0726DA083FDE199' has a wrong offset!");

}

