#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_TeamsGameState

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_TeamsGameState.BPI_TeamsGameState_C.GetTeamsGameStateReference
// 0x0008 (0x0008 - 0x0000)
struct BPI_TeamsGameState_C_GetTeamsGameStateReference final
{
public:
	class ABP_GameState_Teams_C*                  TeamsGS;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_TeamsGameState_C_GetTeamsGameStateReference) == 0x000008, "Wrong alignment on BPI_TeamsGameState_C_GetTeamsGameStateReference");
static_assert(sizeof(BPI_TeamsGameState_C_GetTeamsGameStateReference) == 0x000008, "Wrong size on BPI_TeamsGameState_C_GetTeamsGameStateReference");
static_assert(offsetof(BPI_TeamsGameState_C_GetTeamsGameStateReference, TeamsGS) == 0x000000, "Member 'BPI_TeamsGameState_C_GetTeamsGameStateReference::TeamsGS' has a wrong offset!");

}

