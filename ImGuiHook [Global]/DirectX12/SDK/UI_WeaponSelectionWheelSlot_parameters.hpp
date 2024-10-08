#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WeaponSelectionWheelSlot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Flame_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_WeaponSelectionWheelSlot.UI_WeaponSelectionWheelSlot_C.ExecuteUbergraph_UI_WeaponSelectionWheelSlot
// 0x0040 (0x0040 - 0x0000)
struct UI_WeaponSelectionWheelSlot_C_ExecuteUbergraph_UI_WeaponSelectionWheelSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_WeaponSelectionWheelSlot_C_ExecuteUbergraph_UI_WeaponSelectionWheelSlot) == 0x000004, "Wrong alignment on UI_WeaponSelectionWheelSlot_C_ExecuteUbergraph_UI_WeaponSelectionWheelSlot");
static_assert(sizeof(UI_WeaponSelectionWheelSlot_C_ExecuteUbergraph_UI_WeaponSelectionWheelSlot) == 0x000040, "Wrong size on UI_WeaponSelectionWheelSlot_C_ExecuteUbergraph_UI_WeaponSelectionWheelSlot");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_ExecuteUbergraph_UI_WeaponSelectionWheelSlot, EntryPoint) == 0x000000, "Member 'UI_WeaponSelectionWheelSlot_C_ExecuteUbergraph_UI_WeaponSelectionWheelSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_ExecuteUbergraph_UI_WeaponSelectionWheelSlot, K2Node_Event_MyGeometry) == 0x000004, "Member 'UI_WeaponSelectionWheelSlot_C_ExecuteUbergraph_UI_WeaponSelectionWheelSlot::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_ExecuteUbergraph_UI_WeaponSelectionWheelSlot, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'UI_WeaponSelectionWheelSlot_C_ExecuteUbergraph_UI_WeaponSelectionWheelSlot::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function UI_WeaponSelectionWheelSlot.UI_WeaponSelectionWheelSlot_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_WeaponSelectionWheelSlot_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_WeaponSelectionWheelSlot_C_Tick) == 0x000004, "Wrong alignment on UI_WeaponSelectionWheelSlot_C_Tick");
static_assert(sizeof(UI_WeaponSelectionWheelSlot_C_Tick) == 0x00003C, "Wrong size on UI_WeaponSelectionWheelSlot_C_Tick");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_Tick, MyGeometry) == 0x000000, "Member 'UI_WeaponSelectionWheelSlot_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_WeaponSelectionWheelSlot_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_WeaponSelectionWheelSlot.UI_WeaponSelectionWheelSlot_C.UpdateAmmoVisibility
// 0x0030 (0x0030 - 0x0000)
struct UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility final
{
public:
	ESlateVisibility                              AmmoVisibility;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem*                                  CallFunc_GetItemObsolete_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWeapon*                                K2Node_DynamicCast_AsWeapon;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMeleeWeapon*                           K2Node_DynamicCast_AsMelee_Weapon;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility) == 0x000008, "Wrong alignment on UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility");
static_assert(sizeof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility) == 0x000030, "Wrong size on UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility, AmmoVisibility) == 0x000000, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility::AmmoVisibility' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility, CallFunc_GetItemObsolete_ReturnValue) == 0x000008, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility::CallFunc_GetItemObsolete_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility, K2Node_DynamicCast_AsWeapon) == 0x000010, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility::K2Node_DynamicCast_AsWeapon' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility, K2Node_DynamicCast_AsMelee_Weapon) == 0x000020, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility::K2Node_DynamicCast_AsMelee_Weapon' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoVisibility::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function UI_WeaponSelectionWheelSlot.UI_WeaponSelectionWheelSlot_C.UpdateAmmoCount
// 0x0490 (0x0490 - 0x0000)
struct UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount final
{
public:
	class AProjectileWeapon*                      ProjectileWeapon;                                  // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFirearmWeaponConfiguration            CallFunc_GetWeaponData_ReturnValue;                // 0x0008(0x0418)(ConstParm)
	int32                                         CallFunc_GetCurrentChamberCount_ReturnValue;       // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentAmmoCount_ReturnValue;          // 0x0424(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItem*                                  CallFunc_GetItemObsolete_ReturnValue;              // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_434[0x4];                                      // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AProjectileWeapon*                      K2Node_DynamicCast_AsProjectile_Weapon;            // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_441[0x7];                                      // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0448(0x0018)()
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        K2Node_DynamicCast_AsHuman_Character;              // 0x0468(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_471[0x3];                                      // 0x0471(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CountOfResource_ReturnValue;              // 0x0474(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0478(0x0018)()
};
static_assert(alignof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount) == 0x000008, "Wrong alignment on UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount");
static_assert(sizeof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount) == 0x000490, "Wrong size on UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, ProjectileWeapon) == 0x000000, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::ProjectileWeapon' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, CallFunc_GetWeaponData_ReturnValue) == 0x000008, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::CallFunc_GetWeaponData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, CallFunc_GetCurrentChamberCount_ReturnValue) == 0x000420, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::CallFunc_GetCurrentChamberCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, CallFunc_GetCurrentAmmoCount_ReturnValue) == 0x000424, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::CallFunc_GetCurrentAmmoCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, CallFunc_GetItemObsolete_ReturnValue) == 0x000428, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::CallFunc_GetItemObsolete_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, CallFunc_Add_IntInt_ReturnValue) == 0x000430, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, K2Node_DynamicCast_AsProjectile_Weapon) == 0x000438, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::K2Node_DynamicCast_AsProjectile_Weapon' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, K2Node_DynamicCast_bSuccess) == 0x000440, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, CallFunc_Conv_IntToText_ReturnValue) == 0x000448, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000460, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, K2Node_DynamicCast_AsHuman_Character) == 0x000468, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::K2Node_DynamicCast_AsHuman_Character' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, K2Node_DynamicCast_bSuccess_1) == 0x000470, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, CallFunc_CountOfResource_ReturnValue) == 0x000474, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::CallFunc_CountOfResource_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000478, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoCount::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function UI_WeaponSelectionWheelSlot.UI_WeaponSelectionWheelSlot_C.UpdateAmmoIcon
// 0x0048 (0x0048 - 0x0000)
struct UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon final
{
public:
	class UClass*                                 CallFunc_GetAmmoClass_AmmoClass;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmmoItem*                              CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemRarity                            CallFunc_GetItemRarity_ReturnValue;                // 0x0018(0x0028)(ConstParm)
	class UTexture2D*                             CallFunc_GetAmmoIcon_Icon;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon) == 0x000008, "Wrong alignment on UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon");
static_assert(sizeof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon) == 0x000048, "Wrong size on UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon, CallFunc_GetAmmoClass_AmmoClass) == 0x000000, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon::CallFunc_GetAmmoClass_AmmoClass' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000008, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon, CallFunc_IsValidClass_ReturnValue) == 0x000010, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon, CallFunc_GetItemRarity_ReturnValue) == 0x000018, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon::CallFunc_GetItemRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon, CallFunc_GetAmmoIcon_Icon) == 0x000040, "Member 'UI_WeaponSelectionWheelSlot_C_UpdateAmmoIcon::CallFunc_GetAmmoIcon_Icon' has a wrong offset!");

// Function UI_WeaponSelectionWheelSlot.UI_WeaponSelectionWheelSlot_C.GetAmmoIcon
// 0x0030 (0x0030 - 0x0000)
struct UI_WeaponSelectionWheelSlot_C_GetAmmoIcon final
{
public:
	class UTexture2D*                             Icon;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetAmmoClass_AmmoClass;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmmoItem*                              CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetIcon_ReturnValue;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_WeaponSelectionWheelSlot_C_GetAmmoIcon) == 0x000008, "Wrong alignment on UI_WeaponSelectionWheelSlot_C_GetAmmoIcon");
static_assert(sizeof(UI_WeaponSelectionWheelSlot_C_GetAmmoIcon) == 0x000030, "Wrong size on UI_WeaponSelectionWheelSlot_C_GetAmmoIcon");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoIcon, Icon) == 0x000000, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoIcon::Icon' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoIcon, CallFunc_GetAmmoClass_AmmoClass) == 0x000008, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoIcon::CallFunc_GetAmmoClass_AmmoClass' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoIcon, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000010, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoIcon::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoIcon, CallFunc_IsValidClass_ReturnValue) == 0x000018, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoIcon::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoIcon, CallFunc_GetIcon_ReturnValue) == 0x000020, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoIcon::CallFunc_GetIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoIcon, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UI_WeaponSelectionWheelSlot.UI_WeaponSelectionWheelSlot_C.GetAmmoClass
// 0x0050 (0x0050 - 0x0000)
struct UI_WeaponSelectionWheelSlot_C_GetAmmoClass final
{
public:
	class UClass*                                 AmmoClass;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItem*                                  CallFunc_GetItemObsolete_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWeapon*                                K2Node_DynamicCast_AsWeapon;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSubclassOf<class AAmmoItem>>          CallFunc_GetCompatibleAmmoTypes_ReturnValue;       // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass) == 0x000008, "Wrong alignment on UI_WeaponSelectionWheelSlot_C_GetAmmoClass");
static_assert(sizeof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass) == 0x000050, "Wrong size on UI_WeaponSelectionWheelSlot_C_GetAmmoClass");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass, AmmoClass) == 0x000000, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoClass::AmmoClass' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass, CallFunc_GetItemObsolete_ReturnValue) == 0x000008, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoClass::CallFunc_GetItemObsolete_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass, K2Node_DynamicCast_AsWeapon) == 0x000010, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoClass::K2Node_DynamicCast_AsWeapon' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoClass::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass, CallFunc_GetObjectClass_ReturnValue) == 0x000020, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoClass::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass, CallFunc_GetCompatibleAmmoTypes_ReturnValue) == 0x000028, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoClass::CallFunc_GetCompatibleAmmoTypes_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoClass::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass, CallFunc_Array_Get_Item) == 0x000040, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoClass::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoClass::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoClass, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoClass::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function UI_WeaponSelectionWheelSlot.UI_WeaponSelectionWheelSlot_C.GetAmmoCountOffset
// 0x0020 (0x0020 - 0x0000)
struct UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset final
{
public:
	struct FVector2D                              AmmoCountOffset;                                   // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItem*                                  CallFunc_GetItemObsolete_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWeapon*                                K2Node_DynamicCast_AsWeapon;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPrimaryWeapon_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset) == 0x000008, "Wrong alignment on UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset");
static_assert(sizeof(UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset) == 0x000020, "Wrong size on UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset, AmmoCountOffset) == 0x000000, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset::AmmoCountOffset' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset, CallFunc_GetItemObsolete_ReturnValue) == 0x000008, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset::CallFunc_GetItemObsolete_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset, K2Node_DynamicCast_AsWeapon) == 0x000010, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset::K2Node_DynamicCast_AsWeapon' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset, CallFunc_IsPrimaryWeapon_ReturnValue) == 0x000019, "Member 'UI_WeaponSelectionWheelSlot_C_GetAmmoCountOffset::CallFunc_IsPrimaryWeapon_ReturnValue' has a wrong offset!");

}

