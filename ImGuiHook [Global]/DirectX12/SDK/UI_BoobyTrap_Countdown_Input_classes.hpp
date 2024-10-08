#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BoobyTrap_Countdown_Input

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_InputActionWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BoobyTrap_Countdown_Input.UI_BoobyTrap_Countdown_Input_C
// 0x0008 (0x0448 - 0x0440)
class UUI_BoobyTrap_Countdown_Input_C final : public UUI_InputActionWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_BoobyTrap_Countdown_Input_C;     // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_UI_BoobyTrap_Countdown_Input(int32 EntryPoint);
	void PlayWrongInputAnim();
	void PlayWrongInputAnimationWithDelay(float Delay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BoobyTrap_Countdown_Input_C">();
	}
	static class UUI_BoobyTrap_Countdown_Input_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BoobyTrap_Countdown_Input_C>();
	}
};
static_assert(alignof(UUI_BoobyTrap_Countdown_Input_C) == 0x000008, "Wrong alignment on UUI_BoobyTrap_Countdown_Input_C");
static_assert(sizeof(UUI_BoobyTrap_Countdown_Input_C) == 0x000448, "Wrong size on UUI_BoobyTrap_Countdown_Input_C");
static_assert(offsetof(UUI_BoobyTrap_Countdown_Input_C, UberGraphFrame_UI_BoobyTrap_Countdown_Input_C) == 0x000440, "Member 'UUI_BoobyTrap_Countdown_Input_C::UberGraphFrame_UI_BoobyTrap_Countdown_Input_C' has a wrong offset!");

}

