#pragma once



// Package: GA_Point_Base

#include "Basic.hpp"

#include "GA_Point_Base_classes.hpp"
#include "GA_Point_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_Point_Base.GA_Point_Base_C.ExecuteUbergraph_GA_Point_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Point_Base_C::ExecuteUbergraph_GA_Point_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Point_Base_C", "ExecuteUbergraph_GA_Point_Base");

	Params::GA_Point_Base_C_ExecuteUbergraph_GA_Point_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Point_Base.GA_Point_Base_C.受击慢放后
// (BlueprintCallable, BlueprintEvent)

void UGA_Point_Base_C::受击慢放后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Point_Base_C", "受击慢放后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Point_Base.GA_Point_Base_C.大招定屏后
// (BlueprintCallable, BlueprintEvent)

void UGA_Point_Base_C::大招定屏后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Point_Base_C", "大招定屏后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Point_Base.GA_Point_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Point_Base_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Point_Base_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Point_Base.GA_Point_Base_C.Get Damage Multiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                                  Multiplier                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Point_Base_C::Get_Damage_Multiplier(float InPercent, float* Multiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Point_Base_C", "Get Damage Multiplier");

	Params::GA_Point_Base_C_Get_Damage_Multiplier Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;
}


SDK_NAMESPACE_END
