#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_ADM_BarricadePiece_Settings

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_ADM_BarricadePiece_Settings.F_ADM_BarricadePiece_Settings
// 0x0028 (0x0028 - 0x0000)
struct FF_ADM_BarricadePiece_Settings final
{
public:
	class UStaticMeshComponent*                   Mesh_3_6AD3B6CE4ED5B8E76CE99081215F02D1;           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Impulse_5_7B92811B41516812320149BF81BC8101;        // 0x0008(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AngularImpulse_9_AAC99FC0482C8393E1BFD4A9C826EDFE; // 0x0014(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             RipOffSoundCue_12_ABC6C6A34718BDD13F4C43842C881D84; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_ADM_BarricadePiece_Settings) == 0x000008, "Wrong alignment on FF_ADM_BarricadePiece_Settings");
static_assert(sizeof(FF_ADM_BarricadePiece_Settings) == 0x000028, "Wrong size on FF_ADM_BarricadePiece_Settings");
static_assert(offsetof(FF_ADM_BarricadePiece_Settings, Mesh_3_6AD3B6CE4ED5B8E76CE99081215F02D1) == 0x000000, "Member 'FF_ADM_BarricadePiece_Settings::Mesh_3_6AD3B6CE4ED5B8E76CE99081215F02D1' has a wrong offset!");
static_assert(offsetof(FF_ADM_BarricadePiece_Settings, Impulse_5_7B92811B41516812320149BF81BC8101) == 0x000008, "Member 'FF_ADM_BarricadePiece_Settings::Impulse_5_7B92811B41516812320149BF81BC8101' has a wrong offset!");
static_assert(offsetof(FF_ADM_BarricadePiece_Settings, AngularImpulse_9_AAC99FC0482C8393E1BFD4A9C826EDFE) == 0x000014, "Member 'FF_ADM_BarricadePiece_Settings::AngularImpulse_9_AAC99FC0482C8393E1BFD4A9C826EDFE' has a wrong offset!");
static_assert(offsetof(FF_ADM_BarricadePiece_Settings, RipOffSoundCue_12_ABC6C6A34718BDD13F4C43842C881D84) == 0x000020, "Member 'FF_ADM_BarricadePiece_Settings::RipOffSoundCue_12_ABC6C6A34718BDD13F4C43842C881D84' has a wrong offset!");

}

