#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeatherManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "WeatherManager_structs.hpp"


namespace SDK
{

// Class WeatherManager.RainOcclusionLightComponent
// 0x0000 (0x03F0 - 0x03F0)
class URainOcclusionLightComponent final : public UDirectionalLightComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RainOcclusionLightComponent">();
	}
	static class URainOcclusionLightComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URainOcclusionLightComponent>();
	}
};
static_assert(alignof(URainOcclusionLightComponent) == 0x000010, "Wrong alignment on URainOcclusionLightComponent");
static_assert(sizeof(URainOcclusionLightComponent) == 0x0003F0, "Wrong size on URainOcclusionLightComponent");

// Class WeatherManager.LevelWeather
// 0x0000 (0x0220 - 0x0220)
class ALevelWeather final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelWeather">();
	}
	static class ALevelWeather* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelWeather>();
	}
};
static_assert(alignof(ALevelWeather) == 0x000008, "Wrong alignment on ALevelWeather");
static_assert(sizeof(ALevelWeather) == 0x000220, "Wrong size on ALevelWeather");

// Class WeatherManager.SmokeDistributionComponent
// 0x0160 (0x0360 - 0x0200)
class USmokeDistributionComponent final : public USceneComponent
{
public:
	struct FLinearColor                           MapSizeDetails;                                    // 0x01F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SmokeDistributionDensity;                          // 0x0208(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SmokeSpawnRateMultiplier;                          // 0x020C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParticleOffsetInBuilding;                          // 0x0210(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SmokePostProccessExtendInBuilding;                 // 0x0214(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SmokePostProccessExtendHeightInBuilding;           // 0x0218(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParticleOffsetFromBuilding;                        // 0x021C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OffsetFromGround;                                  // 0x0220(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxTiltOffset;                                     // 0x0224(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_228[0x20];                                     // 0x0228(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          DebugLines;                                        // 0x0248(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_249[0x1];                                      // 0x0249(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          CircularShape;                                     // 0x024A(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Lighthouse;                                        // 0x024B(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24C[0x114];                                    // 0x024C(0x0114)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool AddCloud(const struct FTransform& InTransform, int32 InRadius, struct FVector2D* ReturnKey, class UParticleSystem* Particles, class UParticleSystem* ParticlesInBuilding, const struct FVector& InBuildingOffsetFromGround, float PPTranslationLerp, class UParticleSystemComponent** ReturnParticleSystem, struct FTransform* boxSize, bool* InBuilding, bool* bOutBuildingCollision, bool* VolumeLines);
	void InitSmokeDensity(int32 Density, const struct FLinearColor& MapDetails, bool MapDetailsValid, float InSpawnRate, float InBuildingOffset, float FromBuildingOffset, int32 LifeTime, float SpawnRateMultiplier, float InSmokePostProccessExtendHeightInBuilding, float InSmokePostProcessExtendInBuilding, bool InDebugLines, bool InCircularShape);
	void RemoveCloud(const struct FVector2D& InCloudKey);
	void SetVolumeBoxConsoleCommand();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmokeDistributionComponent">();
	}
	static class USmokeDistributionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmokeDistributionComponent>();
	}
};
static_assert(alignof(USmokeDistributionComponent) == 0x000010, "Wrong alignment on USmokeDistributionComponent");
static_assert(sizeof(USmokeDistributionComponent) == 0x000360, "Wrong size on USmokeDistributionComponent");
static_assert(offsetof(USmokeDistributionComponent, MapSizeDetails) == 0x0001F8, "Member 'USmokeDistributionComponent::MapSizeDetails' has a wrong offset!");
static_assert(offsetof(USmokeDistributionComponent, SmokeDistributionDensity) == 0x000208, "Member 'USmokeDistributionComponent::SmokeDistributionDensity' has a wrong offset!");
static_assert(offsetof(USmokeDistributionComponent, SmokeSpawnRateMultiplier) == 0x00020C, "Member 'USmokeDistributionComponent::SmokeSpawnRateMultiplier' has a wrong offset!");
static_assert(offsetof(USmokeDistributionComponent, ParticleOffsetInBuilding) == 0x000210, "Member 'USmokeDistributionComponent::ParticleOffsetInBuilding' has a wrong offset!");
static_assert(offsetof(USmokeDistributionComponent, SmokePostProccessExtendInBuilding) == 0x000214, "Member 'USmokeDistributionComponent::SmokePostProccessExtendInBuilding' has a wrong offset!");
static_assert(offsetof(USmokeDistributionComponent, SmokePostProccessExtendHeightInBuilding) == 0x000218, "Member 'USmokeDistributionComponent::SmokePostProccessExtendHeightInBuilding' has a wrong offset!");
static_assert(offsetof(USmokeDistributionComponent, ParticleOffsetFromBuilding) == 0x00021C, "Member 'USmokeDistributionComponent::ParticleOffsetFromBuilding' has a wrong offset!");
static_assert(offsetof(USmokeDistributionComponent, OffsetFromGround) == 0x000220, "Member 'USmokeDistributionComponent::OffsetFromGround' has a wrong offset!");
static_assert(offsetof(USmokeDistributionComponent, MaxTiltOffset) == 0x000224, "Member 'USmokeDistributionComponent::MaxTiltOffset' has a wrong offset!");
static_assert(offsetof(USmokeDistributionComponent, DebugLines) == 0x000248, "Member 'USmokeDistributionComponent::DebugLines' has a wrong offset!");
static_assert(offsetof(USmokeDistributionComponent, CircularShape) == 0x00024A, "Member 'USmokeDistributionComponent::CircularShape' has a wrong offset!");
static_assert(offsetof(USmokeDistributionComponent, Lighthouse) == 0x00024B, "Member 'USmokeDistributionComponent::Lighthouse' has a wrong offset!");

// Class WeatherManager.MaterialExpressionRainOcclusion
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionRainOcclusion final : public UMaterialExpression
{
public:
	struct FExpressionInput                       Coordinates;                                       // 0x0040(0x0014)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionRainOcclusion">();
	}
	static class UMaterialExpressionRainOcclusion* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionRainOcclusion>();
	}
};
static_assert(alignof(UMaterialExpressionRainOcclusion) == 0x000008, "Wrong alignment on UMaterialExpressionRainOcclusion");
static_assert(sizeof(UMaterialExpressionRainOcclusion) == 0x000058, "Wrong size on UMaterialExpressionRainOcclusion");
static_assert(offsetof(UMaterialExpressionRainOcclusion, Coordinates) == 0x000040, "Member 'UMaterialExpressionRainOcclusion::Coordinates' has a wrong offset!");

// Class WeatherManager.WeatherManager
// 0x0020 (0x0240 - 0x0220)
class AWeatherManager : public AActor
{
public:
	class USceneComponent*                        WeatherRootComponent;                              // 0x0220(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URainOcclusionLightComponent*           OcclusionLightComponent;                           // 0x0228(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWeatherManagerComponent*               WeatherManagerComponent;                           // 0x0230(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USmokeDistributionComponent*            SmokeDistributionComponent;                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static void InitWeatherForecastSetup(struct FWeatherForecastSetup& ForecastSetup, float CurrentAmount);
	static float UpdateWeatherForecastSetup(struct FWeatherForecastSetup& ForecastSetup, float CurrentTime);

	void GetPostProcessComponent(class UPostProcessComponent** OutPostProcessComponent);
	bool IsRainOcclusionEnabled();
	bool IsRainPostprocessEnabled();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeatherManager">();
	}
	static class AWeatherManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWeatherManager>();
	}
};
static_assert(alignof(AWeatherManager) == 0x000008, "Wrong alignment on AWeatherManager");
static_assert(sizeof(AWeatherManager) == 0x000240, "Wrong size on AWeatherManager");
static_assert(offsetof(AWeatherManager, WeatherRootComponent) == 0x000220, "Member 'AWeatherManager::WeatherRootComponent' has a wrong offset!");
static_assert(offsetof(AWeatherManager, OcclusionLightComponent) == 0x000228, "Member 'AWeatherManager::OcclusionLightComponent' has a wrong offset!");
static_assert(offsetof(AWeatherManager, WeatherManagerComponent) == 0x000230, "Member 'AWeatherManager::WeatherManagerComponent' has a wrong offset!");
static_assert(offsetof(AWeatherManager, SmokeDistributionComponent) == 0x000238, "Member 'AWeatherManager::SmokeDistributionComponent' has a wrong offset!");

// Class WeatherManager.MaterialExpressionRainParamsTex
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionRainParamsTex final : public UMaterialExpression
{
public:
	struct FExpressionInput                       Coordinates;                                       // 0x0040(0x0014)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionRainParamsTex">();
	}
	static class UMaterialExpressionRainParamsTex* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionRainParamsTex>();
	}
};
static_assert(alignof(UMaterialExpressionRainParamsTex) == 0x000008, "Wrong alignment on UMaterialExpressionRainParamsTex");
static_assert(sizeof(UMaterialExpressionRainParamsTex) == 0x000058, "Wrong size on UMaterialExpressionRainParamsTex");
static_assert(offsetof(UMaterialExpressionRainParamsTex, Coordinates) == 0x000040, "Member 'UMaterialExpressionRainParamsTex::Coordinates' has a wrong offset!");

// Class WeatherManager.MaterialExpressionRainSplashPos
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionRainSplashPos final : public UMaterialExpression
{
public:
	struct FExpressionInput                       AbsWorldPos;                                       // 0x0040(0x0014)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionRainSplashPos">();
	}
	static class UMaterialExpressionRainSplashPos* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionRainSplashPos>();
	}
};
static_assert(alignof(UMaterialExpressionRainSplashPos) == 0x000008, "Wrong alignment on UMaterialExpressionRainSplashPos");
static_assert(sizeof(UMaterialExpressionRainSplashPos) == 0x000058, "Wrong size on UMaterialExpressionRainSplashPos");
static_assert(offsetof(UMaterialExpressionRainSplashPos, AbsWorldPos) == 0x000040, "Member 'UMaterialExpressionRainSplashPos::AbsWorldPos' has a wrong offset!");

// Class WeatherManager.SmokeCloudParent
// 0x0010 (0x0230 - 0x0220)
class ASmokeCloudParent : public AActor
{
public:
	class UBoxComponent*                          BoxVolume;                                         // 0x0220(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                 Kokot;                                             // 0x0228(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmokeCloudParent">();
	}
	static class ASmokeCloudParent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmokeCloudParent>();
	}
};
static_assert(alignof(ASmokeCloudParent) == 0x000008, "Wrong alignment on ASmokeCloudParent");
static_assert(sizeof(ASmokeCloudParent) == 0x000230, "Wrong size on ASmokeCloudParent");
static_assert(offsetof(ASmokeCloudParent, BoxVolume) == 0x000220, "Member 'ASmokeCloudParent::BoxVolume' has a wrong offset!");
static_assert(offsetof(ASmokeCloudParent, Kokot) == 0x000228, "Member 'ASmokeCloudParent::Kokot' has a wrong offset!");

// Class WeatherManager.WeatherManagerComponent
// 0x0030 (0x0230 - 0x0200)
class UWeatherManagerComponent final : public USceneComponent
{
public:
	EWeatherType                                  WeatherType;                                       // 0x01F8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F9[0x3];                                      // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RainAmount;                                        // 0x01FC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WetnessAmount;                                     // 0x0200(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SnowCoverAmount;                                   // 0x0204(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SnowingAmount;                                     // 0x0208(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WindVector;                                        // 0x020C(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindParticleInitialVelocityCoef;                   // 0x0218(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindParticleAccelerationCoef;                      // 0x021C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     RainPostprocessMaterial;                           // 0x0220(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RainOcclusionTextureSize;                          // 0x0228(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRainOcclusionEnabled;                             // 0x022C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRainPostprocessEnabled;                           // 0x022D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22E[0x2];                                      // 0x022E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetRainAmount(float NewRainAmount);
	void SetRainOcclusionEnabled(bool Enabled);
	void SetRainOcclusionTextureSize(int32 NewSize);
	void SetRainPostprocessEnabled(bool Enabled);
	void SetRainPostprocessMaterial(class UMaterialInterface* NewMaterial);
	void SetSnowCoverAmount(float NewSnowCoverAmount);
	void SetSnowingAmount(float NewSnowingAmount);
	void SetWeatherType(EWeatherType NewWeatherType);
	void SetWetnessAmount(float NewWetnessAmount);
	void SetWindParticleAccelerationCoef(float NewWindParticleAccelerationCoef);
	void SetWindParticleInitialVelocityCoef(float NewWindParticleInitialVelocityCoef);
	void SetWindVector(const struct FVector& NewWindVector);

	class UMaterialInterface* GetRainPostprocessMaterial() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeatherManagerComponent">();
	}
	static class UWeatherManagerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeatherManagerComponent>();
	}
};
static_assert(alignof(UWeatherManagerComponent) == 0x000010, "Wrong alignment on UWeatherManagerComponent");
static_assert(sizeof(UWeatherManagerComponent) == 0x000230, "Wrong size on UWeatherManagerComponent");
static_assert(offsetof(UWeatherManagerComponent, WeatherType) == 0x0001F8, "Member 'UWeatherManagerComponent::WeatherType' has a wrong offset!");
static_assert(offsetof(UWeatherManagerComponent, RainAmount) == 0x0001FC, "Member 'UWeatherManagerComponent::RainAmount' has a wrong offset!");
static_assert(offsetof(UWeatherManagerComponent, WetnessAmount) == 0x000200, "Member 'UWeatherManagerComponent::WetnessAmount' has a wrong offset!");
static_assert(offsetof(UWeatherManagerComponent, SnowCoverAmount) == 0x000204, "Member 'UWeatherManagerComponent::SnowCoverAmount' has a wrong offset!");
static_assert(offsetof(UWeatherManagerComponent, SnowingAmount) == 0x000208, "Member 'UWeatherManagerComponent::SnowingAmount' has a wrong offset!");
static_assert(offsetof(UWeatherManagerComponent, WindVector) == 0x00020C, "Member 'UWeatherManagerComponent::WindVector' has a wrong offset!");
static_assert(offsetof(UWeatherManagerComponent, WindParticleInitialVelocityCoef) == 0x000218, "Member 'UWeatherManagerComponent::WindParticleInitialVelocityCoef' has a wrong offset!");
static_assert(offsetof(UWeatherManagerComponent, WindParticleAccelerationCoef) == 0x00021C, "Member 'UWeatherManagerComponent::WindParticleAccelerationCoef' has a wrong offset!");
static_assert(offsetof(UWeatherManagerComponent, RainPostprocessMaterial) == 0x000220, "Member 'UWeatherManagerComponent::RainPostprocessMaterial' has a wrong offset!");
static_assert(offsetof(UWeatherManagerComponent, RainOcclusionTextureSize) == 0x000228, "Member 'UWeatherManagerComponent::RainOcclusionTextureSize' has a wrong offset!");
static_assert(offsetof(UWeatherManagerComponent, bRainOcclusionEnabled) == 0x00022C, "Member 'UWeatherManagerComponent::bRainOcclusionEnabled' has a wrong offset!");
static_assert(offsetof(UWeatherManagerComponent, bRainPostprocessEnabled) == 0x00022D, "Member 'UWeatherManagerComponent::bRainPostprocessEnabled' has a wrong offset!");

}

