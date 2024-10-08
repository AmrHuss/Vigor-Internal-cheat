#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeatherManagedInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WeatherManagedInterface.WeatherManagedInterface_C
// 0x0000 (0x0028 - 0x0028)
class IWeatherManagedInterface_C final : public IInterface
{
public:
	void AdjustRainIntensity(float CurrentRainAmount, float CurrentWetnessAmount);
	void AdjustWindIntensity(float CurrentWindIntensity);
	void AdjustWindDirection(const struct FVector& CurrentWindDirection);
	void AdjustWeather(float CurrentRainAmount, float CurrentWindIntensity, const struct FVector& CurrentWindDirection, float CurrentWetnessAmount);
	void SetHeavyRain(bool HeavyRain);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeatherManagedInterface_C">();
	}
	static class IWeatherManagedInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IWeatherManagedInterface_C>();
	}
};
static_assert(alignof(IWeatherManagedInterface_C) == 0x000008, "Wrong alignment on IWeatherManagedInterface_C");
static_assert(sizeof(IWeatherManagedInterface_C) == 0x000028, "Wrong size on IWeatherManagedInterface_C");

}

