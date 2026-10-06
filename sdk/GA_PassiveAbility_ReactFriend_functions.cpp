#pragma once



// Package: GA_PassiveAbility_ReactFriend

#include "Basic.hpp"

#include "GA_PassiveAbility_ReactFriend_classes.hpp"
#include "GA_PassiveAbility_ReactFriend_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_PassiveAbility_ReactFriend.GA_PassiveAbility_ReactFriend_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_PassiveAbility_ReactFriend_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_PassiveAbility_ReactFriend_C", "K2_OnEndAbility");

	Params::GA_PassiveAbility_ReactFriend_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_PassiveAbility_ReactFriend.GA_PassiveAbility_ReactFriend_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_PassiveAbility_ReactFriend_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_PassiveAbility_ReactFriend_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_PassiveAbility_ReactFriend.GA_PassiveAbility_ReactFriend_C.ExecuteUbergraph_GA_PassiveAbility_ReactFriend
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PassiveAbility_ReactFriend_C::ExecuteUbergraph_GA_PassiveAbility_ReactFriend(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_PassiveAbility_ReactFriend_C", "ExecuteUbergraph_GA_PassiveAbility_ReactFriend");

	Params::GA_PassiveAbility_ReactFriend_C_ExecuteUbergraph_GA_PassiveAbility_ReactFriend Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
