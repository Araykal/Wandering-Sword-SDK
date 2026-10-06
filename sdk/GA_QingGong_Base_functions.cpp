#pragma once



// Package: GA_QingGong_Base

#include "Basic.hpp"

#include "GA_QingGong_Base_classes.hpp"
#include "GA_QingGong_Base_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_QingGong_Base.GA_QingGong_Base_C.ExecuteUbergraph_GA_QingGong_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_QingGong_Base_C::ExecuteUbergraph_GA_QingGong_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "ExecuteUbergraph_GA_QingGong_Base");

	Params::GA_QingGong_Base_C_ExecuteUbergraph_GA_QingGong_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_QingGong_Base.GA_QingGong_Base_C.瞬移
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGong_Base_C::瞬移()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "瞬移");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGong_Base.GA_QingGong_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_QingGong_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "K2_OnEndAbility");

	Params::GA_QingGong_Base_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_QingGong_Base.GA_QingGong_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_QingGong_Base_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGong_Base.GA_QingGong_Base_C.OnCompleted_BDDF998747564C9785269DA8D708409C
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGong_Base_C::OnCompleted_BDDF998747564C9785269DA8D708409C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "OnCompleted_BDDF998747564C9785269DA8D708409C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGong_Base.GA_QingGong_Base_C.OnInterrupted_BDDF998747564C9785269DA8D708409C
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGong_Base_C::OnInterrupted_BDDF998747564C9785269DA8D708409C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "OnInterrupted_BDDF998747564C9785269DA8D708409C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGong_Base.GA_QingGong_Base_C.OnCancelled_BDDF998747564C9785269DA8D708409C
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGong_Base_C::OnCancelled_BDDF998747564C9785269DA8D708409C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "OnCancelled_BDDF998747564C9785269DA8D708409C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGong_Base.GA_QingGong_Base_C.OnCompleted_E7E301CC485BBF49940168AF4BBD3511
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGong_Base_C::OnCompleted_E7E301CC485BBF49940168AF4BBD3511()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "OnCompleted_E7E301CC485BBF49940168AF4BBD3511");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGong_Base.GA_QingGong_Base_C.OnInterrupted_E7E301CC485BBF49940168AF4BBD3511
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGong_Base_C::OnInterrupted_E7E301CC485BBF49940168AF4BBD3511()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "OnInterrupted_E7E301CC485BBF49940168AF4BBD3511");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGong_Base.GA_QingGong_Base_C.OnCancelled_E7E301CC485BBF49940168AF4BBD3511
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGong_Base_C::OnCancelled_E7E301CC485BBF49940168AF4BBD3511()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "OnCancelled_E7E301CC485BBF49940168AF4BBD3511");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGong_Base.GA_QingGong_Base_C.改变轻功状态
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_QingGong_Base_C::改变轻功状态(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "改变轻功状态");

	Params::GA_QingGong_Base_C_改变轻功状态 Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_QingGong_Base.GA_QingGong_Base_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayAbilityActorInfo& ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer*           RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_QingGong_Base_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGong_Base_C", "K2_CanActivateAbility");

	Params::GA_QingGong_Base_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
