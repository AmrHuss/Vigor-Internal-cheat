#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTransform_Render

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ItemTransform_Render.BP_ItemTransform_Render_C
// 0x0010 (0x00C0 - 0x00B0)
class UBP_ItemTransform_Render_C final : public UActorComponent
{
public:
	class UDataTable*                             Transforms_PerType;                                // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             Transforms_PerItem;                                // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetTransform(class UClass* ItemClass, struct FS_ItemTransformSetting* ItemTransform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemTransform_Render_C">();
	}
	static class UBP_ItemTransform_Render_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ItemTransform_Render_C>();
	}
};
static_assert(alignof(UBP_ItemTransform_Render_C) == 0x000008, "Wrong alignment on UBP_ItemTransform_Render_C");
static_assert(sizeof(UBP_ItemTransform_Render_C) == 0x0000C0, "Wrong size on UBP_ItemTransform_Render_C");
static_assert(offsetof(UBP_ItemTransform_Render_C, Transforms_PerType) == 0x0000B0, "Member 'UBP_ItemTransform_Render_C::Transforms_PerType' has a wrong offset!");
static_assert(offsetof(UBP_ItemTransform_Render_C, Transforms_PerItem) == 0x0000B8, "Member 'UBP_ItemTransform_Render_C::Transforms_PerItem' has a wrong offset!");

}

