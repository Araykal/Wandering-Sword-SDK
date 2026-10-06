#pragma once



// Package: BP_JHDirectionalLight

#include "Basic.hpp"

#include "BP_JHDirectionalLight_classes.hpp"
#include "BP_JHDirectionalLight_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_JHDirectionalLight.BP_JHDirectionalLight_C.ExecuteUbergraph_BP_JHDirectionalLight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JHDirectionalLight_C::ExecuteUbergraph_BP_JHDirectionalLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHDirectionalLight_C", "ExecuteUbergraph_BP_JHDirectionalLight");

	Params::BP_JHDirectionalLight_C_ExecuteUbergraph_BP_JHDirectionalLight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHDirectionalLight.BP_JHDirectionalLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_JHDirectionalLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHDirectionalLight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JHDirectionalLight.BP_JHDirectionalLight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JHDirectionalLight_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHDirectionalLight_C", "ReceiveTick");

	Params::BP_JHDirectionalLight_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHDirectionalLight.BP_JHDirectionalLight_C.FInterpToIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Intensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TransitionTime_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DelayTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AutoReset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_JHDirectionalLight_C::FInterpToIntensity(float Intensity, float TransitionTime_0, float DelayTime, bool AutoReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHDirectionalLight_C", "FInterpToIntensity");

	Params::BP_JHDirectionalLight_C_FInterpToIntensity Parms{};

	Parms.Intensity = Intensity;
	Parms.TransitionTime_0 = TransitionTime_0;
	Parms.DelayTime = DelayTime;
	Parms.AutoReset = AutoReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHDirectionalLight.BP_JHDirectionalLight_C.ResetIntensity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_JHDirectionalLight_C::ResetIntensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHDirectionalLight_C", "ResetIntensity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JHDirectionalLight.BP_JHDirectionalLight_C.FinterpToCloundPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Power                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TransitionTime_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JHDirectionalLight_C::FinterpToCloundPower(float Power, float TransitionTime_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHDirectionalLight_C", "FinterpToCloundPower");

	Params::BP_JHDirectionalLight_C_FinterpToCloundPower Parms{};

	Parms.Power = Power;
	Parms.TransitionTime_0 = TransitionTime_0;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
