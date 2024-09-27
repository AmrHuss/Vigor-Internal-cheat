#pragma once
#include <windows.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
//#include "zerogui/ZeroGUI.h"
#include <map>
#include <TlHelp32.h>
//#include "SimpleIni.h"
#include <bitset>

#define IsKeyPressed(key) GetAsyncKeyState(key) & 1 && GetAsyncKeyState(key) & 0x8000
#define IsKeyHeld(key) (GetAsyncKeyState(key) & 0x8000)
/*
*  Hooks
*/
static __int64 (*M1org)(void* ViewportClient, void* DebugCanvas) = NULL;
static __int64 YourHookProc(void* ViewportClient, void* DebugCanvas);
ULONG64* GetDrawTransitionVTableAddress(SDK::UGameViewportClient* vp);
DWORD WINAPI Init(HMODULE Module);

/*
*  Signatures
*/
const char* GNamesSig =		"\x4C\x8D\x35\x00\x00\x00\x00\x0F\x95\x44\x24\x2C\x48\x2B\xCB";
const char* GNamesMask =	"xxx????xxxxxxx";
const char* GObjectsSig =	"\x4C\x8B\x0D\x00\x00\x00\x00\x8B\xD0";
const char* GObjectsMask =	"xxx????xx";
const char* NoSpreadSig =	"\xF3\x0F\x5C\x00\xF3\x0F\x5F\xF2\xF3\x0F\x5D\xF7\x0F\x28\xC6";
const char* NoSpreadMask =	"xxx?xxxxxxxxxxx";
uint8_t NoSpreadOriginal = 0;
uint8_t NoSpreadCheat = 0;
uint8_t* NoSpreadAddress = 0;

struct sigmod {
	uintptr_t dwBase, dwSize;
};
bool MemoryCompare(const BYTE* bData, const BYTE* bSig, const char* szMask);
uintptr_t FindSignature(int procID, sigmod mod, const char* sig, const char* mask);

/*
*  Data
*/
bool CheckPointers();
SDK::UWorld* GWorld;
SDK::UEngine* GEngine;
SDK::ULocalPlayer* LocalPlayer;
SDK::AM1PlayerController* PlayerController;
bool inGame = false;
SDK::AM1PlayerControllerInGame* PlayerIngameController;
SDK::AM1Player* LocalCharacter;
SDK::UGameViewportClient* LocalView;
SDK::UM1ActorManagerSubsystem* Actors;
bool isGUIInit = false;
void LoadCFG();
void SaveCFG();
//CSimpleIniA ini;

/*
*  Overlay
*/
void DrawMenu();
SDK::FVector2D cfg_WindowPos = { 100, 100 };
bool cfg_DrawMenu = false;


/*
*  ESP
*/
void DrawESP();
bool WorldToScreen(const SDK::FVector& worldLoc, SDK::FVector2D* screenPos);
bool cfg_DrawESP = false;
bool cfg_DrawPlayerNames = false;
bool cfg_DrawPlayerBoxes = false;
bool cfg_DrawPlayerLines = false;
bool cfg_DrawEnemyNames = false;
bool cfg_DrawEnemyBoxes = false;
bool cfg_DrawEnemyLines = false;
bool cfg_DrawItemBoxes = false;
bool cfg_DrawItemNames = false;
bool cfg_DrawItemLines = false;

float cfg_DistanceScale = 2324.0f;
SDK::FVector2D cfg_ESPBox = { 20, 40 };


/*
*  Aimbot
*/
void Aimbot();
SDK::AActor* GetClosestEnemy(int& ID);
bool cfg_EnableAimbot = false;
float cfg_AimbotFOV = 14.0f;
float cfg_AimbotSmoothing = 16.0f;
int cfg_AimbotKey = 0x59;
SDK::AActor* Aimbot_Target;
int Aimbot_BoneIndex = -1;
bool cfg_AimbotNoSpread = false;
bool ToggleNoSpread = false;


/*
*  Extras
*/
bool cfg_NoReload = false;
bool cfg_LootVacuum = false;
//float cfg_LootVacuumRange = 1000.0f;
int cfg_LootVacuumKey = 0x54;
bool cfg_CacheEnemyNames = false;
bool cfg_CacheEnemyBones = false;
//bool cfg_EnableKillAura = false;
//float cfg_KillAuraRange = 500.0f;
void InstantReload();
bool cfg_HotSwapOverlay = false;
int HotSwapIndex = 0;
std::vector<int> HotSwapCharacters = { 0, 0, 0, 0 };
int cfg_HotSwapKey = VK_TAB;
float cfg_TimeScale = 1.0f;
int cfg_TimeScaleKey = VK_F2;

void WriteEnemyNamesData();
std::unordered_map<int, std::string> ReadEnemyNamesData();
void WriteEnemyBonesData();
std::unordered_map<int, std::vector<int>> ReadEnemyBonesData();

std::unordered_map<int, std::vector<int>> IDBoneMap = { };
bool BonesChanged = false;

std::unordered_map<int, std::string> IDNameMap =
{
{ 510500032, "Cryo Soldier" },
{ 510200103, "Fortress Guard" },
{ 510100020, "Storm Warrior" },
{ 510500024, "Mass Soldier" },
{ 530100026, "Elite Tracker" },
{ 510500005, "Follower Assault Soldier" },
{ 510100019, "Farseer" },
{ 510500003, "Vulgus Follower" },
{ 510500002, "The Soulless" },
{ 510100023, "Destroyer" },
{ 510500031, "Bomber" },
{ 510100025, "Warden" },
{ 510500009, "Follower Panzer" },
{ 510500020, "Storm Warrior" },
{ 510100048, "Spiker" },
{ 510500004, "Fire Spitter" },
{ 510100031, "Bomber" },
{ 510500007, "Follower Grenadier" },
{ 510100005, "Follower Assault Soldier" },
{ 510100030, "Sentinel" },
{ 510100003, "Vulgus Follower" },
{ 510121001, "Interrupter Slaughterer" },
{ 510100002, "The Soulless" },
{ 510100001, "Vulgus War-Slave" },
{ 510100008, "Follower Shield Bearer" },
{ 510100007, "Follower Grenadier" },
{ 510100006, "Follower Sniper" },
{ 510100024, "Mass Soldier" },
{ 530100007, "Elite Vulgus Grenadier" },
{ 510100004, "Fire Spitter" },
{ 520130003, "Greg the Star-Crossed" },
{ 520120022, "Split Cell Dmigor" },
{ 510100034, "Slayer" },
{ 510121005, "Punisher" },
{ 510100026, "Tracker" },
{ 510100016, "Executor" },
{ 510100029, "Ripper" },
{ 510100043, "Wasp" },
{ 510100021, "Reaper" },
{ 530100018, "Elite Slaughterer" },
{ 510500043, "Wasp" },
{ 510100036, "Evangelist" },
{ 510500016, "Executor" },
{ 510100037, "Piercer" },
{ 510100039, "Fortress Guard" },
{ 510500033, "Creature" },
{ 510100017, "Third Eye" },
{ 510100041, "Vanguard" },
{ 510100018, "Slaughterer" },
{ 510100015, "Marauder" },
{ 510100022, "Trapball" },
{ 520130012, "Eterllick the Tracker" },
{ 510500012, "Gazer" },
{ 510100011, "Blazer" },
{ 510100042, "Bug Spreader" },
{ 510121004, "Cutlasser" },
{ 510100010, "Devotee" },
{ 510500040, "Raider" },
{ 510100028, "Acolyte" },
{ 530100027, "Elite Predator" },
{ 510500010, "Devotee" },
{ 510100027, "Predator" },
{ 510500011, "Blazer" },
{ 510100038, "Abomination" },
{ 510100012, "Gazer" },
{ 510100009, "Follower Panzer" },
{ 530100038, "Elite Abomination" },
{ 510100047, "Bulgebrute" },
{ 510100033, "Creature" },
{ 510100013, "Zealot" },
{ 510100014, "Annihilator" },
{ 530100025, "Elite Warden" },
{ 520130005, "Narzas the Consuming Flame" },
{ 510200064, "Warden" },
{ 510100032, "Cryo Soldier" },
{ 530100020, "Elite Storm Warrior" },
{ 510121003, "Ember Maw" },
{ 520120003, "Genetically Enhanced Greg Clone" },
{ 510500030, "Sentinel" },
{ 510100040, "Raider" },
{ 510121000, "Interrupter Storm Warrior" },
{ 520130013, "Seudo the Dreamer" },
{ 510110001, "Seudo's Assault Turret" },
{ 510110002, "Seudo's Medical Turret" },
{ 510500035, "Tintail" },
{ 510100050, "Machine Mother" },
{ 510110003, "Marauder" },
{ 510100035, "Tintail" },
{ 530100041, "Elite Vanguard" },
{ 510100051, "Miscreant" },
{ 530100034, "Elite Slayer" },
{ 510500015, "Marauder" },
{ 510500049, "Illusionist" },
{ 530100019, "Elite Farseer" },
{ 520130009, "Gruncah the Undying" },
{ 510000302, "KingFisher" }
};
bool NamesChanged = false;
