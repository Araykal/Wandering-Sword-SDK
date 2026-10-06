#pragma once



// Package: BP_JHPostProcess

#include "Basic.hpp"

#include "BP_JHPostProcess_classes.hpp"
#include "BP_JHPostProcess_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_JHPostProcess.BP_JHPostProcess_C.ExecuteUbergraph_BP_JHPostProcess
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JHPostProcess_C::ExecuteUbergraph_BP_JHPostProcess(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHPostProcess_C", "ExecuteUbergraph_BP_JHPostProcess");

	Params::BP_JHPostProcess_C_ExecuteUbergraph_BP_JHPostProcess Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHPostProcess.BP_JHPostProcess_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_JHPostProcess_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHPostProcess_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JHPostProcess.BP_JHPostProcess_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JHPostProcess_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHPostProcess_C", "ReceiveTick");

	Params::BP_JHPostProcess_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHPostProcess.BP_JHPostProcess_C.ResetCAIntensity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_JHPostProcess_C::ResetCAIntensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHPostProcess_C", "ResetCAIntensity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JHPostProcess.BP_JHPostProcess_C.FInterpToCAIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Intensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ResetDelay                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JHPostProcess_C::FInterpToCAIntensity(float Intensity, float Speed, float ResetDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHPostProcess_C", "FInterpToCAIntensity");

	Params::BP_JHPostProcess_C_FInterpToCAIntensity Parms{};

	Parms.Intensity = Intensity;
	Parms.Speed = Speed;
	Parms.ResetDelay = ResetDelay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHPostProcess.BP_JHPostProcess_C.SetBokenFocalDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   FocalDistance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JHPostProcess_C::SetBokenFocalDistance(float FocalDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHPostProcess_C", "SetBokenFocalDistance");

	Params::BP_JHPostProcess_C_SetBokenFocalDistance Parms{};

	Parms.FocalDistance = FocalDistance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHPostProcess.BP_JHPostProcess_C.ResetBokenFocalDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_JHPostProcess_C::ResetBokenFocalDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHPostProcess_C", "ResetBokenFocalDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JHPostProcess.BP_JHPostProcess_C.SetCAToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_JHPostProcess_C::SetCAToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHPostProcess_C", "SetCAToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
