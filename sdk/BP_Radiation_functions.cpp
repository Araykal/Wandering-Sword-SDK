#pragma once



// Package: BP_Radiation

#include "Basic.hpp"

#include "BP_Radiation_classes.hpp"
#include "BP_Radiation_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_Radiation.BP_Radiation_C.ExecuteUbergraph_BP_Radiation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Radiation_C::ExecuteUbergraph_BP_Radiation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Radiation_C", "ExecuteUbergraph_BP_Radiation");

	Params::BP_Radiation_C_ExecuteUbergraph_BP_Radiation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Radiation.BP_Radiation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Radiation_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Radiation_C", "ReceiveTick");

	Params::BP_Radiation_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Radiation.BP_Radiation_C.LoopRay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   NewParam2                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Radiation_C::LoopRay(const struct FVector& NewParam, const struct FVector& NewParam2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Radiation_C", "LoopRay");

	Params::BP_Radiation_C_LoopRay Parms{};

	Parms.NewParam = std::move(NewParam);
	Parms.NewParam2 = std::move(NewParam2);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Radiation.BP_Radiation_C.OpenRay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   InitialPoint                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Radiation_C::OpenRay(const struct FVector& InitialPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Radiation_C", "OpenRay");

	Params::BP_Radiation_C_OpenRay Parms{};

	Parms.InitialPoint = std::move(InitialPoint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Radiation.BP_Radiation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Radiation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Radiation_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Radiation.BP_Radiation_C.CastLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   CastOrigin                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   CastDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CastDistance_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Radiation_C::CastLight(const struct FVector& CastOrigin, const struct FVector& CastDirection, float CastDistance_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Radiation_C", "CastLight");

	Params::BP_Radiation_C_CastLight Parms{};

	Parms.CastOrigin = std::move(CastOrigin);
	Parms.CastDirection = std::move(CastDirection);
	Parms.CastDistance_0 = CastDistance_0;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
