#pragma once



// Package: BP_Environment

#include "Basic.hpp"

#include "BP_Environment_classes.hpp"
#include "BP_Environment_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_Environment.BP_Environment_C.ExecuteUbergraph_BP_Environment
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Environment_C::ExecuteUbergraph_BP_Environment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Environment_C", "ExecuteUbergraph_BP_Environment");

	Params::BP_Environment_C_ExecuteUbergraph_BP_Environment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Environment.BP_Environment_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Environment_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Environment_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Environment.BP_Environment_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Environment_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Environment_C", "ReceiveTick");

	Params::BP_Environment_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Environment.BP_Environment_C.CalcTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBP_EEnvironmentValueType               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEasingFunc                             EasingFunction                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Environment_C::CalcTransition(float DeltaSeconds, EBP_EEnvironmentValueType Type, EEasingFunc EasingFunction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Environment_C", "CalcTransition");

	Params::BP_Environment_C_CalcTransition Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.Type = Type;
	Parms.EasingFunction = EasingFunction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Environment.BP_Environment_C.SetTransitions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   目标值                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   过渡时间                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   停留时间                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    是否还原                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EBP_EEnvironmentValueType               数值类型                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Environment_C::SetTransitions(float 目标值, float 过渡时间, float 停留时间, bool 是否还原, EBP_EEnvironmentValueType 数值类型)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Environment_C", "SetTransitions");

	Params::BP_Environment_C_SetTransitions Parms{};

	Parms.目标值 = 目标值;
	Parms.过渡时间 = 过渡时间;
	Parms.停留时间 = 停留时间;
	Parms.是否还原 = 是否还原;
	Parms.数值类型 = 数值类型;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Environment.BP_Environment_C.ResetTransitions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBP_EEnvironmentValueType               数值类型                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Environment_C::ResetTransitions(EBP_EEnvironmentValueType 数值类型)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Environment_C", "ResetTransitions");

	Params::BP_Environment_C_ResetTransitions Parms{};

	Parms.数值类型 = 数值类型;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Environment.BP_Environment_C.GetFloatByValueType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBP_EEnvironmentValueType               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                                  Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Environment_C::GetFloatByValueType(EBP_EEnvironmentValueType Type, float* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Environment_C", "GetFloatByValueType");

	Params::BP_Environment_C_GetFloatByValueType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_Environment.BP_Environment_C.SetFloatByValueType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBP_EEnvironmentValueType               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Environment_C::SetFloatByValueType(EBP_EEnvironmentValueType Type, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Environment_C", "SetFloatByValueType");

	Params::BP_Environment_C_SetFloatByValueType Parms{};

	Parms.Type = Type;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
