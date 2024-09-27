#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NS_HolsterSocketLock

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NS_HolsterSocketLock.NS_HolsterSocketLock_C
// 0x0008 (0x0038 - 0x0030)
class UNS_HolsterSocketLock_C final : public UAnimNotifyState
{
public:
	bool                                          RightSide_;                                        // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime) const;
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NS_HolsterSocketLock_C">();
	}
	static class UNS_HolsterSocketLock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNS_HolsterSocketLock_C>();
	}
};
static_assert(alignof(UNS_HolsterSocketLock_C) == 0x000008, "Wrong alignment on UNS_HolsterSocketLock_C");
static_assert(sizeof(UNS_HolsterSocketLock_C) == 0x000038, "Wrong size on UNS_HolsterSocketLock_C");
static_assert(offsetof(UNS_HolsterSocketLock_C, RightSide_) == 0x000030, "Member 'UNS_HolsterSocketLock_C::RightSide_' has a wrong offset!");

}
