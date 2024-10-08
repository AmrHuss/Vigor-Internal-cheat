#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Fade

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Fade.UI_Fade_C
// 0x0020 (0x02D8 - 0x02B8)
class UUI_Fade_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Black_Image;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Fade(int32 EntryPoint);
	void Faded_Out();
	void Faded_In();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Fade_C">();
	}
	static class UUI_Fade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Fade_C>();
	}
};
static_assert(alignof(UUI_Fade_C) == 0x000008, "Wrong alignment on UUI_Fade_C");
static_assert(sizeof(UUI_Fade_C) == 0x0002D8, "Wrong size on UUI_Fade_C");
static_assert(offsetof(UUI_Fade_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_Fade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Fade_C, FadeOut) == 0x0002C0, "Member 'UUI_Fade_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UUI_Fade_C, FadeIn) == 0x0002C8, "Member 'UUI_Fade_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_Fade_C, Black_Image) == 0x0002D0, "Member 'UUI_Fade_C::Black_Image' has a wrong offset!");

}

