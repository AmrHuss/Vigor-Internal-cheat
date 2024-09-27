#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HealthBar

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HealthBar.UI_HealthBar_C
// 0x0078 (0x0330 - 0x02B8)
class UUI_HealthBar_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 HealthBackground;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           HealthBar;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_StaminaExhaust;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StaminaBar;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowPermanently;                                   // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               HealthBarDynMat;                                   // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DownedHealthBarDynMat;                             // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Sound_Effect;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sound_Effect_Is_Active;                            // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               StaminaBarDynMat;                                  // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowStaminaBar;                                    // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_C*                        Character;                                         // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 StaminaBarColourNormal;                            // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 StaminaBarColourAdrenalineBoost;                   // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 StaminaBarColourAdrenalineDeprivation;             // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_HealthBar(int32 EntryPoint);
	void OnGameSettingsChanged(const struct FGameSaveSettings& GameSettings);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void UpdateHealthBar(float DeltaTime);
	void ComputeExpectedHealthBarParameter(float ExpectedHealing, float CurrentHealth, float MaxHealth, float* ExpectedHealBar);
	void ComputeHealthBarParameters(float HealthIn, float DownedHealthIn, float ExpectedHealingIn, float MaxHealth, float TempHealthIn, float* HealthOut, float* ExpectedHealingOut, float* TempHealthOut);
	void UpdateShowPermanentlyBasedOnSavegame(const struct FGameSaveSettings& Game_Settings);
	void UpdateStaminaBar();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HealthBar_C">();
	}
	static class UUI_HealthBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HealthBar_C>();
	}
};
static_assert(alignof(UUI_HealthBar_C) == 0x000008, "Wrong alignment on UUI_HealthBar_C");
static_assert(sizeof(UUI_HealthBar_C) == 0x000330, "Wrong size on UUI_HealthBar_C");
static_assert(offsetof(UUI_HealthBar_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_HealthBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, HealthBackground) == 0x0002C0, "Member 'UUI_HealthBar_C::HealthBackground' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, HealthBar) == 0x0002C8, "Member 'UUI_HealthBar_C::HealthBar' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Image_StaminaExhaust) == 0x0002D0, "Member 'UUI_HealthBar_C::Image_StaminaExhaust' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, StaminaBar) == 0x0002D8, "Member 'UUI_HealthBar_C::StaminaBar' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, ShowPermanently) == 0x0002E0, "Member 'UUI_HealthBar_C::ShowPermanently' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, HealthBarDynMat) == 0x0002E8, "Member 'UUI_HealthBar_C::HealthBarDynMat' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, DownedHealthBarDynMat) == 0x0002F0, "Member 'UUI_HealthBar_C::DownedHealthBarDynMat' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Sound_Effect) == 0x0002F8, "Member 'UUI_HealthBar_C::Sound_Effect' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Sound_Effect_Is_Active) == 0x000300, "Member 'UUI_HealthBar_C::Sound_Effect_Is_Active' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, StaminaBarDynMat) == 0x000308, "Member 'UUI_HealthBar_C::StaminaBarDynMat' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, ShowStaminaBar) == 0x000310, "Member 'UUI_HealthBar_C::ShowStaminaBar' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, Character) == 0x000318, "Member 'UUI_HealthBar_C::Character' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, StaminaBarColourNormal) == 0x000320, "Member 'UUI_HealthBar_C::StaminaBarColourNormal' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, StaminaBarColourAdrenalineBoost) == 0x000324, "Member 'UUI_HealthBar_C::StaminaBarColourAdrenalineBoost' has a wrong offset!");
static_assert(offsetof(UUI_HealthBar_C, StaminaBarColourAdrenalineDeprivation) == 0x000328, "Member 'UUI_HealthBar_C::StaminaBarColourAdrenalineDeprivation' has a wrong offset!");

}
