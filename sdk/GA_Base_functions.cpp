#pragma once



// Package: GA_Base

#include "Basic.hpp"

#include "GA_Base_classes.hpp"
#include "GA_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_Base.GA_Base_C.ExecuteUbergraph_GA_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Base_C::ExecuteUbergraph_GA_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "ExecuteUbergraph_GA_Base");

	Params::GA_Base_C_ExecuteUbergraph_GA_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Base.GA_Base_C.PreEndAbility
// (BlueprintCallable, BlueprintEvent)

void UGA_Base_C::PreEndAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "PreEndAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.受击慢放后
// (BlueprintCallable, BlueprintEvent)

void UGA_Base_C::受击慢放后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "受击慢放后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.受击慢放
// (BlueprintCallable, BlueprintEvent)

void UGA_Base_C::受击慢放()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "受击慢放");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.大招定屏后
// (BlueprintCallable, BlueprintEvent)

void UGA_Base_C::大招定屏后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "大招定屏后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.定屏
// (BlueprintCallable, BlueprintEvent)

void UGA_Base_C::定屏()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "定屏");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "K2_OnEndAbility");

	Params::GA_Base_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Base.GA_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Base_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.Success_AB3BB30F411801134BC00485EFD4CBA2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Base_C::Success_AB3BB30F411801134BC00485EFD4CBA2(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "Success_AB3BB30F411801134BC00485EFD4CBA2");

	Params::GA_Base_C_Success_AB3BB30F411801134BC00485EFD4CBA2 Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Base.GA_Base_C.DidNotSpawn_AB3BB30F411801134BC00485EFD4CBA2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Base_C::DidNotSpawn_AB3BB30F411801134BC00485EFD4CBA2(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "DidNotSpawn_AB3BB30F411801134BC00485EFD4CBA2");

	Params::GA_Base_C_DidNotSpawn_AB3BB30F411801134BC00485EFD4CBA2 Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Base.GA_Base_C.Success_A6F1E4A94C0B074CC17FDFA660A6DE7F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Base_C::Success_A6F1E4A94C0B074CC17FDFA660A6DE7F(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "Success_A6F1E4A94C0B074CC17FDFA660A6DE7F");

	Params::GA_Base_C_Success_A6F1E4A94C0B074CC17FDFA660A6DE7F Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Base.GA_Base_C.DidNotSpawn_A6F1E4A94C0B074CC17FDFA660A6DE7F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Base_C::DidNotSpawn_A6F1E4A94C0B074CC17FDFA660A6DE7F(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "DidNotSpawn_A6F1E4A94C0B074CC17FDFA660A6DE7F");

	Params::GA_Base_C_DidNotSpawn_A6F1E4A94C0B074CC17FDFA660A6DE7F Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Base.GA_Base_C.PlayDamageCA
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Base_C::PlayDamageCA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "PlayDamageCA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.OwnerIsHero
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   bIsHero                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Base_C::OwnerIsHero(bool* bIsHero)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "OwnerIsHero");

	Params::GA_Base_C_OwnerIsHero Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsHero != nullptr)
		*bIsHero = Parms.bIsHero;
}


// Function GA_Base.GA_Base_C.SetDirectionalLightIntensity
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Base_C::SetDirectionalLightIntensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "SetDirectionalLightIntensity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.PlayStartFlash
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Base_C::PlayStartFlash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "PlayStartFlash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.CameraFollowActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           BeDamageActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Base_C::CameraFollowActor(class AActor* BeDamageActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "CameraFollowActor");

	Params::GA_Base_C_CameraFollowActor Parms{};

	Parms.BeDamageActor = BeDamageActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Base.GA_Base_C.PlayFlashForActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           BeDamageActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Base_C::PlayFlashForActor(class AActor* BeDamageActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "PlayFlashForActor");

	Params::GA_Base_C_PlayFlashForActor Parms{};

	Parms.BeDamageActor = BeDamageActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Base.GA_Base_C.ChangeCameraArm
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Base_C::ChangeCameraArm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "ChangeCameraArm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.CameraFollowLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Base_C::CameraFollowLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "CameraFollowLocation");

	Params::GA_Base_C_CameraFollowLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Base.GA_Base_C.PlayFlashForLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Base_C::PlayFlashForLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "PlayFlashForLocation");

	Params::GA_Base_C_PlayFlashForLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Base.GA_Base_C.PlayAbilityName
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Base_C::PlayAbilityName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "PlayAbilityName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.ResetDirectionalLightIntensity
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Base_C::ResetDirectionalLightIntensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "ResetDirectionalLightIntensity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.检查是否可放大招
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   可以施放                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Base_C::检查是否可放大招(bool* 可以施放)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "检查是否可放大招");

	Params::GA_Base_C_检查是否可放大招 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (可以施放 != nullptr)
		*可以施放 = Parms.可以施放;
}


// Function GA_Base.GA_Base_C.应用自身效果
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Base_C::应用自身效果()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "应用自身效果");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.GetBulletFlyDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   GridNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHypotenuse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float*                                  Distance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Base_C::GetBulletFlyDistance(int32 GridNum, bool bHypotenuse, float* Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "GetBulletFlyDistance");

	Params::GA_Base_C_GetBulletFlyDistance Parms{};

	Parms.GridNum = GridNum;
	Parms.bHypotenuse = bHypotenuse;

	UObject::ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;
}


// Function GA_Base.GA_Base_C.GetCanChangeArmPitch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Base_C::GetCanChangeArmPitch(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "GetCanChangeArmPitch");

	Params::GA_Base_C_GetCanChangeArmPitch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function GA_Base.GA_Base_C.改战场炫光
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Base_C::改战场炫光()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "改战场炫光");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Base.GA_Base_C.ResetCA
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Base_C::ResetCA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Base_C", "ResetCA");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
