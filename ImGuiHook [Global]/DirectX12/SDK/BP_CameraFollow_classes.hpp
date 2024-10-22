#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraFollow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraFollow.BP_CameraFollow_C
// 0x0030 (0x0250 - 0x0220)
class ABP_CameraFollow_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       Camera;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_Tutorial_C*               Character;                                         // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         TotalTimeToFollow;                                 // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CameraFollow(int32 EntryPoint);
	void ReturnToCharacter();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraFollow_C">();
	}
	static class ABP_CameraFollow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CameraFollow_C>();
	}
};
static_assert(alignof(ABP_CameraFollow_C) == 0x000008, "Wrong alignment on ABP_CameraFollow_C");
static_assert(sizeof(ABP_CameraFollow_C) == 0x000250, "Wrong size on ABP_CameraFollow_C");
static_assert(offsetof(ABP_CameraFollow_C, UberGraphFrame) == 0x000220, "Member 'ABP_CameraFollow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CameraFollow_C, Camera) == 0x000228, "Member 'ABP_CameraFollow_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_CameraFollow_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_CameraFollow_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CameraFollow_C, Character) == 0x000238, "Member 'ABP_CameraFollow_C::Character' has a wrong offset!");
static_assert(offsetof(ABP_CameraFollow_C, Target) == 0x000240, "Member 'ABP_CameraFollow_C::Target' has a wrong offset!");
static_assert(offsetof(ABP_CameraFollow_C, TotalTimeToFollow) == 0x000248, "Member 'ABP_CameraFollow_C::TotalTimeToFollow' has a wrong offset!");

}

