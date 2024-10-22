#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimalFeeder_Food_02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Lootable_Base_classes.hpp"
#include "E_Lootable_State_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimalFeeder_Food_02.BP_AnimalFeeder_Food_02_C
// 0x0010 (0x03B8 - 0x03A8)
class ABP_AnimalFeeder_Food_02_C final : public ABP_Lootable_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AnimalFeeder_Food_02_C;          // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AnimalFeeder_Food_02(int32 EntryPoint);
	void Check_if_empty();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimalFeeder_Food_02_C">();
	}
	static class ABP_AnimalFeeder_Food_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AnimalFeeder_Food_02_C>();
	}
};
static_assert(alignof(ABP_AnimalFeeder_Food_02_C) == 0x000008, "Wrong alignment on ABP_AnimalFeeder_Food_02_C");
static_assert(sizeof(ABP_AnimalFeeder_Food_02_C) == 0x0003B8, "Wrong size on ABP_AnimalFeeder_Food_02_C");
static_assert(offsetof(ABP_AnimalFeeder_Food_02_C, UberGraphFrame_BP_AnimalFeeder_Food_02_C) == 0x0003A8, "Member 'ABP_AnimalFeeder_Food_02_C::UberGraphFrame_BP_AnimalFeeder_Food_02_C' has a wrong offset!");
static_assert(offsetof(ABP_AnimalFeeder_Food_02_C, Box) == 0x0003B0, "Member 'ABP_AnimalFeeder_Food_02_C::Box' has a wrong offset!");

}

