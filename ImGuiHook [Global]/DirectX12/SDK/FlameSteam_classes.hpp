#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FlameSteam

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class FlameSteam.FlameSteamBPFuncLib
// 0x0000 (0x0028 - 0x0028)
class UFlameSteamBPFuncLib final : public UBlueprintFunctionLibrary
{
public:
	static const bool IsRunningOnSteamDeck();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FlameSteamBPFuncLib">();
	}
	static class UFlameSteamBPFuncLib* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlameSteamBPFuncLib>();
	}
};
static_assert(alignof(UFlameSteamBPFuncLib) == 0x000008, "Wrong alignment on UFlameSteamBPFuncLib");
static_assert(sizeof(UFlameSteamBPFuncLib) == 0x000028, "Wrong size on UFlameSteamBPFuncLib");

}

