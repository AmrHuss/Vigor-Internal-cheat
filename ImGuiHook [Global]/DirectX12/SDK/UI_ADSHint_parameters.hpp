#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ADSHint

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_ADSHint.UI_ADSHint_C.ExecuteUbergraph_UI_ADSHint
// 0x0004 (0x0004 - 0x0000)
struct UI_ADSHint_C_ExecuteUbergraph_UI_ADSHint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ADSHint_C_ExecuteUbergraph_UI_ADSHint) == 0x000004, "Wrong alignment on UI_ADSHint_C_ExecuteUbergraph_UI_ADSHint");
static_assert(sizeof(UI_ADSHint_C_ExecuteUbergraph_UI_ADSHint) == 0x000004, "Wrong size on UI_ADSHint_C_ExecuteUbergraph_UI_ADSHint");
static_assert(offsetof(UI_ADSHint_C_ExecuteUbergraph_UI_ADSHint, EntryPoint) == 0x000000, "Member 'UI_ADSHint_C_ExecuteUbergraph_UI_ADSHint::EntryPoint' has a wrong offset!");

// Function UI_ADSHint.UI_ADSHint_C.OnCameraStateChanged
// 0x0058 (0x0058 - 0x0000)
struct UI_ADSHint_C_OnCameraStateChanged final
{
public:
	ECameraPositionState                          OldState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECameraPositionState                          NewState;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterSwayParameters               NewLocalVar_0;                                     // 0x0004(0x0018)(Edit, BlueprintVisible, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        K2Node_DynamicCast_AsHuman_Character;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaminaComponent*                      CallFunc_GetStaminaComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanStartHoldBreath_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AWeapon*                                K2Node_DynamicCast_AsWeapon;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ADSHint_C_OnCameraStateChanged) == 0x000008, "Wrong alignment on UI_ADSHint_C_OnCameraStateChanged");
static_assert(sizeof(UI_ADSHint_C_OnCameraStateChanged) == 0x000058, "Wrong size on UI_ADSHint_C_OnCameraStateChanged");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, OldState) == 0x000000, "Member 'UI_ADSHint_C_OnCameraStateChanged::OldState' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, NewState) == 0x000001, "Member 'UI_ADSHint_C_OnCameraStateChanged::NewState' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, NewLocalVar_0) == 0x000004, "Member 'UI_ADSHint_C_OnCameraStateChanged::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001C, "Member 'UI_ADSHint_C_OnCameraStateChanged::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000020, "Member 'UI_ADSHint_C_OnCameraStateChanged::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, K2Node_DynamicCast_AsHuman_Character) == 0x000028, "Member 'UI_ADSHint_C_OnCameraStateChanged::K2Node_DynamicCast_AsHuman_Character' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'UI_ADSHint_C_OnCameraStateChanged::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, CallFunc_GetStaminaComponent_ReturnValue) == 0x000038, "Member 'UI_ADSHint_C_OnCameraStateChanged::CallFunc_GetStaminaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, CallFunc_CanStartHoldBreath_ReturnValue) == 0x000040, "Member 'UI_ADSHint_C_OnCameraStateChanged::CallFunc_CanStartHoldBreath_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'UI_ADSHint_C_OnCameraStateChanged::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, K2Node_DynamicCast_AsWeapon) == 0x000048, "Member 'UI_ADSHint_C_OnCameraStateChanged::K2Node_DynamicCast_AsWeapon' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnCameraStateChanged, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'UI_ADSHint_C_OnCameraStateChanged::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function UI_ADSHint.UI_ADSHint_C.OnPerspectivePreSwap
// 0x0020 (0x0020 - 0x0000)
struct UI_ADSHint_C_OnPerspectivePreSwap final
{
public:
	class UCameraManagerComponent*                InCameraManagerComponent;                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool ShowHint)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ADSHint_C_OnPerspectivePreSwap) == 0x000008, "Wrong alignment on UI_ADSHint_C_OnPerspectivePreSwap");
static_assert(sizeof(UI_ADSHint_C_OnPerspectivePreSwap) == 0x000020, "Wrong size on UI_ADSHint_C_OnPerspectivePreSwap");
static_assert(offsetof(UI_ADSHint_C_OnPerspectivePreSwap, InCameraManagerComponent) == 0x000000, "Member 'UI_ADSHint_C_OnPerspectivePreSwap::InCameraManagerComponent' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnPerspectivePreSwap, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UI_ADSHint_C_OnPerspectivePreSwap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnPerspectivePreSwap, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'UI_ADSHint_C_OnPerspectivePreSwap::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UI_ADSHint.UI_ADSHint_C.OnPerspectivePostSwap
// 0x0020 (0x0020 - 0x0000)
struct UI_ADSHint_C_OnPerspectivePostSwap final
{
public:
	class UCameraManagerComponent*                InCameraManagerComponent;                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool ShowHint)>                K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(UI_ADSHint_C_OnPerspectivePostSwap) == 0x000008, "Wrong alignment on UI_ADSHint_C_OnPerspectivePostSwap");
static_assert(sizeof(UI_ADSHint_C_OnPerspectivePostSwap) == 0x000020, "Wrong size on UI_ADSHint_C_OnPerspectivePostSwap");
static_assert(offsetof(UI_ADSHint_C_OnPerspectivePostSwap, InCameraManagerComponent) == 0x000000, "Member 'UI_ADSHint_C_OnPerspectivePostSwap::InCameraManagerComponent' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnPerspectivePostSwap, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'UI_ADSHint_C_OnPerspectivePostSwap::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_OnPerspectivePostSwap, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'UI_ADSHint_C_OnPerspectivePostSwap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function UI_ADSHint.UI_ADSHint_C.ShowADSHint
// 0x0020 (0x0020 - 0x0000)
struct UI_ADSHint_C_ShowADSHint final
{
public:
	bool                                          ShowHint;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ADSHint_C_ShowADSHint) == 0x000008, "Wrong alignment on UI_ADSHint_C_ShowADSHint");
static_assert(sizeof(UI_ADSHint_C_ShowADSHint) == 0x000020, "Wrong size on UI_ADSHint_C_ShowADSHint");
static_assert(offsetof(UI_ADSHint_C_ShowADSHint, ShowHint) == 0x000000, "Member 'UI_ADSHint_C_ShowADSHint::ShowHint' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_ShowADSHint, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_ADSHint_C_ShowADSHint::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_ShowADSHint, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x000014, "Member 'UI_ADSHint_C_ShowADSHint::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_ShowADSHint, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'UI_ADSHint_C_ShowADSHint::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function UI_ADSHint.UI_ADSHint_C.BindToCharacter
// 0x0078 (0x0078 - 0x0000)
struct UI_ADSHint_C_BindToCharacter final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCameraManagerComponent* InCameraManagerComponent)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UCameraManagerComponent* InCameraManagerComponent)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        K2Node_DynamicCast_AsHuman_Character;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraManagerComponent*                K2Node_DynamicCast_AsCamera_Manager_Component;     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ADSHint_C_BindToCharacter) == 0x000008, "Wrong alignment on UI_ADSHint_C_BindToCharacter");
static_assert(sizeof(UI_ADSHint_C_BindToCharacter) == 0x000078, "Wrong size on UI_ADSHint_C_BindToCharacter");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'UI_ADSHint_C_BindToCharacter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'UI_ADSHint_C_BindToCharacter::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000018, "Member 'UI_ADSHint_C_BindToCharacter::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, K2Node_DynamicCast_AsHuman_Player_Controller) == 0x000020, "Member 'UI_ADSHint_C_BindToCharacter::K2Node_DynamicCast_AsHuman_Player_Controller' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UI_ADSHint_C_BindToCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'UI_ADSHint_C_BindToCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'UI_ADSHint_C_BindToCharacter::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'UI_ADSHint_C_BindToCharacter::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, CallFunc_GetOwningPlayerPawn_ReturnValue_1) == 0x000050, "Member 'UI_ADSHint_C_BindToCharacter::CallFunc_GetOwningPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, K2Node_DynamicCast_AsHuman_Character) == 0x000058, "Member 'UI_ADSHint_C_BindToCharacter::K2Node_DynamicCast_AsHuman_Character' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'UI_ADSHint_C_BindToCharacter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, K2Node_DynamicCast_AsCamera_Manager_Component) == 0x000068, "Member 'UI_ADSHint_C_BindToCharacter::K2Node_DynamicCast_AsCamera_Manager_Component' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_BindToCharacter, K2Node_DynamicCast_bSuccess_2) == 0x000070, "Member 'UI_ADSHint_C_BindToCharacter::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function UI_ADSHint.UI_ADSHint_C.UnbindFromCharacter
// 0x0070 (0x0070 - 0x0000)
struct UI_ADSHint_C_UnbindFromCharacter final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCameraManagerComponent* InCameraManagerComponent)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UCameraManagerComponent* InCameraManagerComponent)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        K2Node_DynamicCast_AsHuman_Character;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraManagerComponent*                K2Node_DynamicCast_AsCamera_Manager_Component;     // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ADSHint_C_UnbindFromCharacter) == 0x000008, "Wrong alignment on UI_ADSHint_C_UnbindFromCharacter");
static_assert(sizeof(UI_ADSHint_C_UnbindFromCharacter) == 0x000070, "Wrong size on UI_ADSHint_C_UnbindFromCharacter");
static_assert(offsetof(UI_ADSHint_C_UnbindFromCharacter, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'UI_ADSHint_C_UnbindFromCharacter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_UnbindFromCharacter, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'UI_ADSHint_C_UnbindFromCharacter::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_UnbindFromCharacter, K2Node_DynamicCast_AsHuman_Player_Controller) == 0x000018, "Member 'UI_ADSHint_C_UnbindFromCharacter::K2Node_DynamicCast_AsHuman_Player_Controller' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_UnbindFromCharacter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UI_ADSHint_C_UnbindFromCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_UnbindFromCharacter, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'UI_ADSHint_C_UnbindFromCharacter::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_UnbindFromCharacter, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'UI_ADSHint_C_UnbindFromCharacter::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_UnbindFromCharacter, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000048, "Member 'UI_ADSHint_C_UnbindFromCharacter::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_UnbindFromCharacter, K2Node_DynamicCast_AsHuman_Character) == 0x000050, "Member 'UI_ADSHint_C_UnbindFromCharacter::K2Node_DynamicCast_AsHuman_Character' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_UnbindFromCharacter, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'UI_ADSHint_C_UnbindFromCharacter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_UnbindFromCharacter, K2Node_DynamicCast_AsCamera_Manager_Component) == 0x000060, "Member 'UI_ADSHint_C_UnbindFromCharacter::K2Node_DynamicCast_AsCamera_Manager_Component' has a wrong offset!");
static_assert(offsetof(UI_ADSHint_C_UnbindFromCharacter, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'UI_ADSHint_C_UnbindFromCharacter::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

}

