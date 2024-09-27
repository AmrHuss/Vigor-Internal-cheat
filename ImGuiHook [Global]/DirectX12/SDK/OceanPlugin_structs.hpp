#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OceanPlugin

#include "Basic.hpp"


namespace SDK
{

// Enum OceanPlugin.EFollowMethod
// NumValues: 0x0005
enum class EFollowMethod : uint8
{
	LookAtLocation                           = 0,
	FollowCamera                             = 1,
	FollowPawn                               = 2,
	Stationary                               = 3,
	EFollowMethod_MAX                        = 4,
};

// ScriptStruct OceanPlugin.ForceTriangle
// 0x006C (0x006C - 0x0000)
struct alignas(0x04) FForceTriangle final
{
public:
	uint8                                         Pad_0[0x6C];                                       // 0x0000(0x006C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FForceTriangle) == 0x000004, "Wrong alignment on FForceTriangle");
static_assert(sizeof(FForceTriangle) == 0x00006C, "Wrong size on FForceTriangle");

// ScriptStruct OceanPlugin.BuoyancyVertex
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x04) FBuoyancyVertex final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBuoyancyVertex) == 0x000004, "Wrong alignment on FBuoyancyVertex");
static_assert(sizeof(FBuoyancyVertex) == 0x000010, "Wrong size on FBuoyancyVertex");

// ScriptStruct OceanPlugin.StructBoneOverride
// 0x0010 (0x0010 - 0x0000)
struct FStructBoneOverride final
{
public:
	class FName                                   BoneName;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Density;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TestRadius;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FStructBoneOverride) == 0x000004, "Wrong alignment on FStructBoneOverride");
static_assert(sizeof(FStructBoneOverride) == 0x000010, "Wrong size on FStructBoneOverride");
static_assert(offsetof(FStructBoneOverride, BoneName) == 0x000000, "Member 'FStructBoneOverride::BoneName' has a wrong offset!");
static_assert(offsetof(FStructBoneOverride, Density) == 0x000008, "Member 'FStructBoneOverride::Density' has a wrong offset!");
static_assert(offsetof(FStructBoneOverride, TestRadius) == 0x00000C, "Member 'FStructBoneOverride::TestRadius' has a wrong offset!");

// ScriptStruct OceanPlugin.WaveParameter
// 0x0014 (0x0014 - 0x0000)
struct FWaveParameter final
{
public:
	float                                         Rotation;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Length;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Amplitude;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Steepness;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeScale;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWaveParameter) == 0x000004, "Wrong alignment on FWaveParameter");
static_assert(sizeof(FWaveParameter) == 0x000014, "Wrong size on FWaveParameter");
static_assert(offsetof(FWaveParameter, Rotation) == 0x000000, "Member 'FWaveParameter::Rotation' has a wrong offset!");
static_assert(offsetof(FWaveParameter, Length) == 0x000004, "Member 'FWaveParameter::Length' has a wrong offset!");
static_assert(offsetof(FWaveParameter, Amplitude) == 0x000008, "Member 'FWaveParameter::Amplitude' has a wrong offset!");
static_assert(offsetof(FWaveParameter, Steepness) == 0x00000C, "Member 'FWaveParameter::Steepness' has a wrong offset!");
static_assert(offsetof(FWaveParameter, TimeScale) == 0x000010, "Member 'FWaveParameter::TimeScale' has a wrong offset!");

// ScriptStruct OceanPlugin.WaveSetParameters
// 0x00A0 (0x00A0 - 0x0000)
struct FWaveSetParameters final
{
public:
	struct FWaveParameter                         Wave01;                                            // 0x0000(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                         Wave02;                                            // 0x0014(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                         Wave03;                                            // 0x0028(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                         Wave04;                                            // 0x003C(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                         Wave05;                                            // 0x0050(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                         Wave06;                                            // 0x0064(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                         Wave07;                                            // 0x0078(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                         Wave08;                                            // 0x008C(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWaveSetParameters) == 0x000004, "Wrong alignment on FWaveSetParameters");
static_assert(sizeof(FWaveSetParameters) == 0x0000A0, "Wrong size on FWaveSetParameters");
static_assert(offsetof(FWaveSetParameters, Wave01) == 0x000000, "Member 'FWaveSetParameters::Wave01' has a wrong offset!");
static_assert(offsetof(FWaveSetParameters, Wave02) == 0x000014, "Member 'FWaveSetParameters::Wave02' has a wrong offset!");
static_assert(offsetof(FWaveSetParameters, Wave03) == 0x000028, "Member 'FWaveSetParameters::Wave03' has a wrong offset!");
static_assert(offsetof(FWaveSetParameters, Wave04) == 0x00003C, "Member 'FWaveSetParameters::Wave04' has a wrong offset!");
static_assert(offsetof(FWaveSetParameters, Wave05) == 0x000050, "Member 'FWaveSetParameters::Wave05' has a wrong offset!");
static_assert(offsetof(FWaveSetParameters, Wave06) == 0x000064, "Member 'FWaveSetParameters::Wave06' has a wrong offset!");
static_assert(offsetof(FWaveSetParameters, Wave07) == 0x000078, "Member 'FWaveSetParameters::Wave07' has a wrong offset!");
static_assert(offsetof(FWaveSetParameters, Wave08) == 0x00008C, "Member 'FWaveSetParameters::Wave08' has a wrong offset!");

// ScriptStruct OceanPlugin.TimeDate
// 0x001C (0x001C - 0x0000)
struct FTimeDate final
{
public:
	int32                                         Millisecond;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Second;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Minute;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Hour;                                              // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Day;                                               // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Month;                                             // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Year;                                              // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTimeDate) == 0x000004, "Wrong alignment on FTimeDate");
static_assert(sizeof(FTimeDate) == 0x00001C, "Wrong size on FTimeDate");
static_assert(offsetof(FTimeDate, Millisecond) == 0x000000, "Member 'FTimeDate::Millisecond' has a wrong offset!");
static_assert(offsetof(FTimeDate, Second) == 0x000004, "Member 'FTimeDate::Second' has a wrong offset!");
static_assert(offsetof(FTimeDate, Minute) == 0x000008, "Member 'FTimeDate::Minute' has a wrong offset!");
static_assert(offsetof(FTimeDate, Hour) == 0x00000C, "Member 'FTimeDate::Hour' has a wrong offset!");
static_assert(offsetof(FTimeDate, Day) == 0x000010, "Member 'FTimeDate::Day' has a wrong offset!");
static_assert(offsetof(FTimeDate, Month) == 0x000014, "Member 'FTimeDate::Month' has a wrong offset!");
static_assert(offsetof(FTimeDate, Year) == 0x000018, "Member 'FTimeDate::Year' has a wrong offset!");

}
