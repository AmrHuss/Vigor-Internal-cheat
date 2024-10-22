#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_Utils

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPFL_Utils.BPFL_Utils_C.GetCurrentCameraPosition
// 0x0050 (0x0050 - 0x0000)
struct BPFL_Utils_C_GetCurrentCameraPosition final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OutPosition;                                       // 0x0008(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutPositionValid;                                  // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ResultPositionValid;                               // 0x0015(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ResultPosition;                                    // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUserControllerId_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPFL_Utils_C_GetCurrentCameraPosition) == 0x000008, "Wrong alignment on BPFL_Utils_C_GetCurrentCameraPosition");
static_assert(sizeof(BPFL_Utils_C_GetCurrentCameraPosition) == 0x000050, "Wrong size on BPFL_Utils_C_GetCurrentCameraPosition");
static_assert(offsetof(BPFL_Utils_C_GetCurrentCameraPosition, __WorldContext) == 0x000000, "Member 'BPFL_Utils_C_GetCurrentCameraPosition::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetCurrentCameraPosition, OutPosition) == 0x000008, "Member 'BPFL_Utils_C_GetCurrentCameraPosition::OutPosition' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetCurrentCameraPosition, OutPositionValid) == 0x000014, "Member 'BPFL_Utils_C_GetCurrentCameraPosition::OutPositionValid' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetCurrentCameraPosition, ResultPositionValid) == 0x000015, "Member 'BPFL_Utils_C_GetCurrentCameraPosition::ResultPositionValid' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetCurrentCameraPosition, ResultPosition) == 0x000018, "Member 'BPFL_Utils_C_GetCurrentCameraPosition::ResultPosition' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetCurrentCameraPosition, CallFunc_GetUserControllerId_ReturnValue) == 0x000024, "Member 'BPFL_Utils_C_GetCurrentCameraPosition::CallFunc_GetUserControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetCurrentCameraPosition, CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue) == 0x000028, "Member 'BPFL_Utils_C_GetCurrentCameraPosition::CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetCurrentCameraPosition, CallFunc_GetViewTarget_ReturnValue) == 0x000030, "Member 'BPFL_Utils_C_GetCurrentCameraPosition::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetCurrentCameraPosition, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BPFL_Utils_C_GetCurrentCameraPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetCurrentCameraPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00003C, "Member 'BPFL_Utils_C_GetCurrentCameraPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetCurrentCameraPosition, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BPFL_Utils_C_GetCurrentCameraPosition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BPFL_Utils.BPFL_Utils_C.GetInverseOf
// 0x0020 (0x0020 - 0x0000)
struct BPFL_Utils_C_GetInverseOf final
{
public:
	float                                         Val;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultVal;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Result;                                            // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_Utils_C_GetInverseOf) == 0x000008, "Wrong alignment on BPFL_Utils_C_GetInverseOf");
static_assert(sizeof(BPFL_Utils_C_GetInverseOf) == 0x000020, "Wrong size on BPFL_Utils_C_GetInverseOf");
static_assert(offsetof(BPFL_Utils_C_GetInverseOf, Val) == 0x000000, "Member 'BPFL_Utils_C_GetInverseOf::Val' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetInverseOf, DefaultVal) == 0x000004, "Member 'BPFL_Utils_C_GetInverseOf::DefaultVal' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetInverseOf, __WorldContext) == 0x000008, "Member 'BPFL_Utils_C_GetInverseOf::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetInverseOf, Result) == 0x000010, "Member 'BPFL_Utils_C_GetInverseOf::Result' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetInverseOf, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000014, "Member 'BPFL_Utils_C_GetInverseOf::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_Utils_C_GetInverseOf, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000018, "Member 'BPFL_Utils_C_GetInverseOf::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

}

