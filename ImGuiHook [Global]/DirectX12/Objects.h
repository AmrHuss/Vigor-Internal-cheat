#pragma once

#include "SDK.hpp"

namespace Objects
{
    SDK::UWorld* gWorld = nullptr;
    SDK::UEngine* gEngine = nullptr;
    SDK::ULocalPlayer* LocalPlayer = nullptr;
    SDK::APlayerController* PlayerController = nullptr;
    SDK::AHumanCharacter* LocalCharacter = nullptr;

    SDK::UWorld* ActorsWorld = nullptr;  // Use UWorld to manage actors
    SDK::AHUD* PlayerHUD = nullptr;
    SDK::UGameInstance* GameInstance = nullptr;
    SDK::APlayerCameraManager* PlayerCameraManager = nullptr;
    SDK::AHumanPlayerController* PlayerIngameController = nullptr;  
     
}

namespace objectsINIT
{
    
   

   
    void SetgWorld()
    {
        SDK::UWorld* gWorld = SDK::UWorld::GetWorld();
        if (gWorld)
            Objects::gWorld = gWorld;
    }

    void SetGEngine()
    {
        SDK::UEngine* gEngine = SDK::UEngine::GetEngine();
        if (gEngine)
            Objects::gEngine = gEngine;
    }

    void SetLocalPlayer()
    {
        if (Objects::gWorld && Objects::gWorld->OwningGameInstance && Objects::gWorld->OwningGameInstance->LocalPlayers)
        {
            SDK::ULocalPlayer* localPlayer = Objects::gWorld->OwningGameInstance->LocalPlayers[0];
            if (localPlayer)
                Objects::LocalPlayer = localPlayer;
        }
    }

    void SetPlayerController()
    {
        if (Objects::LocalPlayer && Objects::LocalPlayer->PlayerController)
        {
            Objects::PlayerController = Objects::LocalPlayer->PlayerController;
        }
    }

    void SetPlayerCharacter()
    {
        if (Objects::PlayerController && Objects::PlayerController->Character)
        {
            Objects::LocalCharacter = static_cast<SDK::AHumanPlayerCharacter*>(Objects::PlayerController->Character);
        }
    }

    void SetHUD()
    {
        if (Objects::PlayerController && Objects::PlayerController->MyHUD)
        {
            Objects::PlayerHUD = Objects::PlayerController->MyHUD;
        }
    }

    void SetGameInstance()
    {
        if (Objects::gWorld && Objects::gWorld->OwningGameInstance)
        {
            Objects::GameInstance = Objects::gWorld->OwningGameInstance;
        }
    }

    void SetPlayerCameraManager()
    {
        if (Objects::PlayerController && Objects::PlayerController->PlayerCameraManager)
        {
            Objects::PlayerCameraManager = Objects::PlayerController->PlayerCameraManager;
        }
    }

    void InitializeAll()
    {
        SetgWorld();
        SetGEngine();
        SetLocalPlayer();
        SetPlayerController();
        SetPlayerCharacter();
        SetHUD();
        SetGameInstance();
        SetPlayerCameraManager();
    }

    bool CheckAllPointers()
    {
        InitializeAll();

        return Objects::gWorld && Objects::gEngine && Objects::LocalPlayer && Objects::PlayerController &&
            Objects::LocalCharacter && Objects::PlayerHUD && Objects::GameInstance && Objects::PlayerCameraManager;
    }

    // Get the list of active actors in the world
    std::vector<SDK::AActor*> GetActiveActors()
    {
        std::vector<SDK::AActor*> activeActors;
        if (Objects::gWorld && Objects::gWorld->PersistentLevel)
        {
            for (int i = 0; i < Objects::gWorld->PersistentLevel->Actors.Num(); ++i)
            {
                SDK::AActor* actor = Objects::gWorld->PersistentLevel->Actors[i];
                if (actor)
                    activeActors.push_back(actor);
            }
        }
        return activeActors;
    }

    // Check if the player is in the game
    bool IsInGame()
    {
        if (Objects::PlayerController && Objects::PlayerController->IsA(SDK::AHumanPlayerController::StaticClass()))
        {
            Objects::PlayerIngameController = static_cast<SDK::AHumanPlayerController*>(Objects::PlayerController);
            return true;
        }
        return false;
    }

    // Get the player's current position
    SDK::FVector GetPlayerPosition()
    {
        if (Objects::LocalCharacter)
            return Objects::LocalCharacter->K2_GetActorLocation();
        return SDK::FVector{ 0, 0, 0 };
    }

    // Get the camera's current rotation
    SDK::FRotator GetCameraRotation()
    {
        if (Objects::PlayerCameraManager)
            return Objects::PlayerCameraManager->GetCameraRotation();
        return SDK::FRotator{ 0, 0, 0 };
    }

    // Get the camera's current location
    SDK::FVector GetCameraLocation()
    {
        if (Objects::PlayerCameraManager)
            return Objects::PlayerCameraManager->GetCameraLocation();
        return SDK::FVector{ 0, 0, 0 };
    }

    // Set the player's control rotation
    void SetControlRotation(const SDK::FRotator& rotation)
    {
        if (Objects::PlayerController)
        {
            Objects::PlayerController->SetControlRotation(rotation);
        }
    }

    // Get the player's current weapon



    // Get the distance to a specific actor
    float GetDistanceToActor(SDK::AActor* actor)
    {
        if (Objects::LocalCharacter && actor)
            return Objects::LocalCharacter->GetDistanceTo(actor);
        return 0.0f;
    }

    // Get the name of an actor
    std::string GetActorName(SDK::AActor* actor)
    {
        if (actor)
            return actor->GetName();
        return "Unknown";
    }
}
