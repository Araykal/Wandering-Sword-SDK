#pragma once



// Package: GA_Passive_Point_Base

#include "Basic.hpp"

#include "GA_Passive_Point_Base_classes.hpp"
#include "GA_Passive_Point_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_Passive_Point_Base.GA_Passive_Point_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Passive_Point_Base_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Point_Base_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Point_Base.GA_Passive_Point_Base_C.ApplyDamage
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Point_Base_C::ApplyDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Point_Base_C", "ApplyDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Point_Base.GA_Passive_Point_Base_C.OnCasting
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Point_Base_C::OnCasting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Point_Base_C", "OnCasting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Point_Base.GA_Passive_Point_Base_C.GridPartical
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Point_Base_C::GridPartical()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Point_Base_C", "GridPartical");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Point_Base.GA_Passive_Point_Base_C.OnZone
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Point_Base_C::OnZone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Point_Base_C", "OnZone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Point_Base.GA_Passive_Point_Base_C.OnPlayFlipbook
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Point_Base_C::OnPlayFlipbook()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Point_Base_C", "OnPlayFlipbook");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Point_Base.GA_Passive_Point_Base_C.ExecuteUbergraph_GA_Passive_Point_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Passive_Point_Base_C::ExecuteUbergraph_GA_Passive_Point_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Point_Base_C", "ExecuteUbergraph_GA_Passive_Point_Base");

	Params::GA_Passive_Point_Base_C_ExecuteUbergraph_GA_Passive_Point_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
