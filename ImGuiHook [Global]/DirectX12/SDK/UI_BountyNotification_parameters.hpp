#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BountyNotification

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_BountyNotification.UI_BountyNotification_C.ExecuteUbergraph_UI_BountyNotification
// 0x0008 (0x0008 - 0x0000)
struct UI_BountyNotification_C_ExecuteUbergraph_UI_BountyNotification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BountyNotification_C_ExecuteUbergraph_UI_BountyNotification) == 0x000004, "Wrong alignment on UI_BountyNotification_C_ExecuteUbergraph_UI_BountyNotification");
static_assert(sizeof(UI_BountyNotification_C_ExecuteUbergraph_UI_BountyNotification) == 0x000008, "Wrong size on UI_BountyNotification_C_ExecuteUbergraph_UI_BountyNotification");
static_assert(offsetof(UI_BountyNotification_C_ExecuteUbergraph_UI_BountyNotification, EntryPoint) == 0x000000, "Member 'UI_BountyNotification_C_ExecuteUbergraph_UI_BountyNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_BountyNotification_C_ExecuteUbergraph_UI_BountyNotification, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_BountyNotification_C_ExecuteUbergraph_UI_BountyNotification::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_BountyNotification.UI_BountyNotification_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_BountyNotification_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BountyNotification_C_PreConstruct) == 0x000001, "Wrong alignment on UI_BountyNotification_C_PreConstruct");
static_assert(sizeof(UI_BountyNotification_C_PreConstruct) == 0x000001, "Wrong size on UI_BountyNotification_C_PreConstruct");
static_assert(offsetof(UI_BountyNotification_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_BountyNotification_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_BountyNotification.UI_BountyNotification_C.UpdateContent
// 0x0028 (0x0028 - 0x0000)
struct UI_BountyNotification_C_UpdateContent final
{
public:
	struct FLinearColor                           IconColor;                                         // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x0010(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(UI_BountyNotification_C_UpdateContent) == 0x000008, "Wrong alignment on UI_BountyNotification_C_UpdateContent");
static_assert(sizeof(UI_BountyNotification_C_UpdateContent) == 0x000028, "Wrong size on UI_BountyNotification_C_UpdateContent");
static_assert(offsetof(UI_BountyNotification_C_UpdateContent, IconColor) == 0x000000, "Member 'UI_BountyNotification_C_UpdateContent::IconColor' has a wrong offset!");
static_assert(offsetof(UI_BountyNotification_C_UpdateContent, Message) == 0x000010, "Member 'UI_BountyNotification_C_UpdateContent::Message' has a wrong offset!");

}
