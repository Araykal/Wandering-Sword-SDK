#pragma once



// Package: GA_Line_Base

#include "Basic.hpp"

#include "GA_Line_Base_classes.hpp"
#include "GA_Line_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_Line_Base.GA_Line_Base_C.ExecuteUbergraph_GA_Line_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Line_Base_C::ExecuteUbergraph_GA_Line_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Line_Base_C", "ExecuteUbergraph_GA_Line_Base");

	Params::GA_Line_Base_C_ExecuteUbergraph_GA_Line_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Line_Base.GA_Line_Base_C.受击慢放后
// (BlueprintCallable, BlueprintEvent)

void UGA_Line_Base_C::受击慢放后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Line_Base_C", "受击慢放后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Line_Base.GA_Line_Base_C.大招定屏后
// (BlueprintCallable, BlueprintEvent)

void UGA_Line_Base_C::大招定屏后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Line_Base_C", "大招定屏后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Line_Base.GA_Line_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Line_Base_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Line_Base_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
