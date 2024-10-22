#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GameMode

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_GameMode.BPI_GameMode_C.GetShelterSaveFile
// 0x0010 (0x0010 - 0x0000)
struct BPI_GameMode_C_GetShelterSaveFile final
{
public:
	bool                                          Valid;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PersistentShelter_SaveGame_C*       SaveFile;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameMode_C_GetShelterSaveFile) == 0x000008, "Wrong alignment on BPI_GameMode_C_GetShelterSaveFile");
static_assert(sizeof(BPI_GameMode_C_GetShelterSaveFile) == 0x000010, "Wrong size on BPI_GameMode_C_GetShelterSaveFile");
static_assert(offsetof(BPI_GameMode_C_GetShelterSaveFile, Valid) == 0x000000, "Member 'BPI_GameMode_C_GetShelterSaveFile::Valid' has a wrong offset!");
static_assert(offsetof(BPI_GameMode_C_GetShelterSaveFile, SaveFile) == 0x000008, "Member 'BPI_GameMode_C_GetShelterSaveFile::SaveFile' has a wrong offset!");

}

