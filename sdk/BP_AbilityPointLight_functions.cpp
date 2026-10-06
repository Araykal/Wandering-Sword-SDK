#pragma once



// Package: BP_AbilityPointLight

#include "Basic.hpp"

#include "BP_AbilityPointLight_classes.hpp"
#include "BP_AbilityPointLight_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_AbilityPointLight.BP_AbilityPointLight_C.ExecuteUbergraph_BP_AbilityPointLight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AbilityPointLight_C::ExecuteUbergraph_BP_AbilityPointLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "ExecuteUbergraph_BP_AbilityPointLight");

	Params::BP_AbilityPointLight_C_ExecuteUbergraph_BP_AbilityPointLight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.TimelineIntensityAndDestroy
// (BlueprintCallable, BlueprintEvent)

void ABP_AbilityPointLight_C::TimelineIntensityAndDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "TimelineIntensityAndDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.TimelineIntensity
// (BlueprintCallable, BlueprintEvent)

void ABP_AbilityPointLight_C::TimelineIntensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "TimelineIntensity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AbilityPointLight_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "ReceiveTick");

	Params::BP_AbilityPointLight_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AbilityPointLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_AbilityPointLight_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_AbilityPointLight_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_AbilityPointLight_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_AbilityPointLight_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.FInterpToIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Intensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TransitionTime_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DelayTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AbilityPointLight_C::FInterpToIntensity(float Intensity, float TransitionTime_0, float DelayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "FInterpToIntensity");

	Params::BP_AbilityPointLight_C_FInterpToIntensity Parms{};

	Parms.Intensity = Intensity;
	Parms.TransitionTime_0 = TransitionTime_0;
	Parms.DelayTime = DelayTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.ResetIntensity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AbilityPointLight_C::ResetIntensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "ResetIntensity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.SetLightColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AbilityPointLight_C::SetLightColor(const struct FLinearColor& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "SetLightColor");

	Params::BP_AbilityPointLight_C_SetLightColor Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AbilityPointLight.BP_AbilityPointLight_C.FinterpToIntensityAndDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AbilityPointLight_C::FinterpToIntensityAndDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilityPointLight_C", "FinterpToIntensityAndDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
