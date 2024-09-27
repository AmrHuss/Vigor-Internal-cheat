#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_WeaponSkinSpecificEffect

#include "Basic.hpp"

#include "S_TriggerConditionToParticleConfig_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_WeaponSkinSpecificEffect.S_WeaponSkinSpecificEffect
// 0x0060 (0x0060 - 0x0000)
struct FS_WeaponSkinSpecificEffect final
{
public:
	TArray<class UClass*>                         WeaponSkins_48_99C528FA465A02A1CED486B91A8759CE;   // 0x0000(0x0010)(Edit, BlueprintVisible)
	TMap<class FName, struct FS_TriggerConditionToParticleConfig> ParticleSocketNameToTriggerConditions_52_0A0A925F479004C8522047A874877DF0; // 0x0010(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
};
static_assert(alignof(FS_WeaponSkinSpecificEffect) == 0x000008, "Wrong alignment on FS_WeaponSkinSpecificEffect");
static_assert(sizeof(FS_WeaponSkinSpecificEffect) == 0x000060, "Wrong size on FS_WeaponSkinSpecificEffect");
static_assert(offsetof(FS_WeaponSkinSpecificEffect, WeaponSkins_48_99C528FA465A02A1CED486B91A8759CE) == 0x000000, "Member 'FS_WeaponSkinSpecificEffect::WeaponSkins_48_99C528FA465A02A1CED486B91A8759CE' has a wrong offset!");
static_assert(offsetof(FS_WeaponSkinSpecificEffect, ParticleSocketNameToTriggerConditions_52_0A0A925F479004C8522047A874877DF0) == 0x000010, "Member 'FS_WeaponSkinSpecificEffect::ParticleSocketNameToTriggerConditions_52_0A0A925F479004C8522047A874877DF0' has a wrong offset!");

}
