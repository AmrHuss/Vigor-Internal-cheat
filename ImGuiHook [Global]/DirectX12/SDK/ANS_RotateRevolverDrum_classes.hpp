#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANS_RotateRevolverDrum

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ANS_RotateRevolverDrum.ANS_RotateRevolverDrum_C
// 0x0000 (0x0038 - 0x0038)
class UANS_RotateRevolverDrum_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANS_RotateRevolverDrum_C">();
	}
	static class UANS_RotateRevolverDrum_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANS_RotateRevolverDrum_C>();
	}
};
static_assert(alignof(UANS_RotateRevolverDrum_C) == 0x000008, "Wrong alignment on UANS_RotateRevolverDrum_C");
static_assert(sizeof(UANS_RotateRevolverDrum_C) == 0x000038, "Wrong size on UANS_RotateRevolverDrum_C");

}

