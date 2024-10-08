#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SRChallenge_UnlockedWeaponRow

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SRChallenge_UnlockedWeaponRow.UI_SRChallenge_UnlockedWeaponRow_C
// 0x0030 (0x02E8 - 0x02B8)
class UUI_SRChallenge_UnlockedWeaponRow_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WeaponImage;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WeaponName;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WeaponRarity;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 Weapon;                                            // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow(int32 EntryPoint);
	void Construct();
	void Focus_Received();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SRChallenge_UnlockedWeaponRow_C">();
	}
	static class UUI_SRChallenge_UnlockedWeaponRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SRChallenge_UnlockedWeaponRow_C>();
	}
};
static_assert(alignof(UUI_SRChallenge_UnlockedWeaponRow_C) == 0x000008, "Wrong alignment on UUI_SRChallenge_UnlockedWeaponRow_C");
static_assert(sizeof(UUI_SRChallenge_UnlockedWeaponRow_C) == 0x0002E8, "Wrong size on UUI_SRChallenge_UnlockedWeaponRow_C");
static_assert(offsetof(UUI_SRChallenge_UnlockedWeaponRow_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_SRChallenge_UnlockedWeaponRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_UnlockedWeaponRow_C, Background) == 0x0002C0, "Member 'UUI_SRChallenge_UnlockedWeaponRow_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_UnlockedWeaponRow_C, WeaponImage) == 0x0002C8, "Member 'UUI_SRChallenge_UnlockedWeaponRow_C::WeaponImage' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_UnlockedWeaponRow_C, WeaponName) == 0x0002D0, "Member 'UUI_SRChallenge_UnlockedWeaponRow_C::WeaponName' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_UnlockedWeaponRow_C, WeaponRarity) == 0x0002D8, "Member 'UUI_SRChallenge_UnlockedWeaponRow_C::WeaponRarity' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_UnlockedWeaponRow_C, Weapon) == 0x0002E0, "Member 'UUI_SRChallenge_UnlockedWeaponRow_C::Weapon' has a wrong offset!");

}

