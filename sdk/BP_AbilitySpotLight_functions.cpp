#pragma once



// Package: BP_AbilitySpotLight

#include "Basic.hpp"

#include "BP_AbilitySpotLight_classes.hpp"
#include "BP_AbilitySpotLight_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.ExecuteUbergraph_BP_AbilitySpotLight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AbilitySpotLight_C::ExecuteUbergraph_BP_AbilitySpotLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "ExecuteUbergraph_BP_AbilitySpotLight");

	Params::BP_AbilitySpotLight_C_ExecuteUbergraph_BP_AbilitySpotLight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.TimelineIntensityAndDestroy
// (BlueprintCallable, BlueprintEvent)

void ABP_AbilitySpotLight_C::TimelineIntensityAndDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "TimelineIntensityAndDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.TimelineToIntensity
// (BlueprintCallable, BlueprintEvent)

void ABP_AbilitySpotLight_C::TimelineToIntensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "TimelineToIntensity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AbilitySpotLight_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "ReceiveTick");

	Params::BP_AbilitySpotLight_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AbilitySpotLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_AbilitySpotLight_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_AbilitySpotLight_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_AbilitySpotLight_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_AbilitySpotLight_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.FInterpToIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Intensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TransitionTime_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DelayTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AutoReset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AbilitySpotLight_C::FInterpToIntensity(float Intensity, float TransitionTime_0, float DelayTime, bool AutoReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "FInterpToIntensity");

	Params::BP_AbilitySpotLight_C_FInterpToIntensity Parms{};

	Parms.Intensity = Intensity;
	Parms.TransitionTime_0 = TransitionTime_0;
	Parms.DelayTime = DelayTime;
	Parms.AutoReset = AutoReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.ResetIntensity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AbilitySpotLight_C::ResetIntensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "ResetIntensity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.SetLightColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              LightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AbilitySpotLight_C::SetLightColor(const struct FLinearColor& LightColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "SetLightColor");

	Params::BP_AbilitySpotLight_C_SetLightColor Parms{};

	Parms.LightColor = std::move(LightColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AbilitySpotLight.BP_AbilitySpotLight_C.FinterpToIntensityAndDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AbilitySpotLight_C::FinterpToIntensityAndDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AbilitySpotLight_C", "FinterpToIntensityAndDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
