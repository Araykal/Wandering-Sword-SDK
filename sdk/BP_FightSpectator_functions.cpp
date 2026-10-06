#pragma once



// Package: BP_FightSpectator

#include "Basic.hpp"

#include "BP_FightSpectator_classes.hpp"
#include "BP_FightSpectator_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_FightSpectator.BP_FightSpectator_C.ExecuteUbergraph_BP_FightSpectator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FightSpectator_C::ExecuteUbergraph_BP_FightSpectator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "ExecuteUbergraph_BP_FightSpectator");

	Params::BP_FightSpectator_C_ExecuteUbergraph_BP_FightSpectator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightSpectator.BP_FightSpectator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FightSpectator_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "ReceiveTick");

	Params::BP_FightSpectator_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightSpectator.BP_FightSpectator_C.HandleRotatorChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FRotator&                  Rotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FightSpectator_C::HandleRotatorChanged(const struct FRotator& Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "HandleRotatorChanged");

	Params::BP_FightSpectator_C_HandleRotatorChanged Parms{};

	Parms.Rotator = std::move(Rotator);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightSpectator.BP_FightSpectator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FightSpectator_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FightSpectator.BP_FightSpectator_C.ChangeArmArgs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FRotator&                  Rotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   ArmLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   TargetOffset_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseLag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FightSpectator_C::ChangeArmArgs(const struct FRotator& Rotator, float ArmLength, const struct FVector& TargetOffset_0, float Speed, bool bUseLag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "ChangeArmArgs");

	Params::BP_FightSpectator_C_ChangeArmArgs Parms{};

	Parms.Rotator = std::move(Rotator);
	Parms.ArmLength = ArmLength;
	Parms.TargetOffset_0 = std::move(TargetOffset_0);
	Parms.Speed = Speed;
	Parms.bUseLag = bUseLag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightSpectator.BP_FightSpectator_C.ResetArmArgs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseLag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FightSpectator_C::ResetArmArgs(bool UseLag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "ResetArmArgs");

	Params::BP_FightSpectator_C_ResetArmArgs Parms{};

	Parms.UseLag = UseLag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightSpectator.BP_FightSpectator_C.ChangeArmRotator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FRotator&                  NewRotator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FightSpectator_C::ChangeArmRotator(const struct FRotator& NewRotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "ChangeArmRotator");

	Params::BP_FightSpectator_C_ChangeArmRotator Parms{};

	Parms.NewRotator = std::move(NewRotator);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightSpectator.BP_FightSpectator_C.ResetArmRotator
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FightSpectator_C::ResetArmRotator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "ResetArmRotator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FightSpectator.BP_FightSpectator_C.ChangeActorLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FightSpectator_C::ChangeActorLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "ChangeActorLocation");

	Params::BP_FightSpectator_C_ChangeActorLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightSpectator.BP_FightSpectator_C.ResetArmTargetLength
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FightSpectator_C::ResetArmTargetLength()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "ResetArmTargetLength");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FightSpectator.BP_FightSpectator_C.ChangeArmTargetLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewArmTargetLength                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FightSpectator_C::ChangeArmTargetLength(float NewArmTargetLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "ChangeArmTargetLength");

	Params::BP_FightSpectator_C_ChangeArmTargetLength Parms{};

	Parms.NewArmTargetLength = NewArmTargetLength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightSpectator.BP_FightSpectator_C.SetCameraLag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseCameraLag                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FightSpectator_C::SetCameraLag(bool UseCameraLag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "SetCameraLag");

	Params::BP_FightSpectator_C_SetCameraLag Parms{};

	Parms.UseCameraLag = UseCameraLag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FightSpectator.BP_FightSpectator_C.ResetCameraLag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FightSpectator_C::ResetCameraLag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FightSpectator_C", "ResetCameraLag");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
