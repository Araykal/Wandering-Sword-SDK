#pragma once



// Package: WBP_AbilityName

#include "Basic.hpp"

#include "WBP_AbilityName_classes.hpp"
#include "WBP_AbilityName_parameters.hpp"


SDK_NAMESPACE_START

// Function WBP_AbilityName.WBP_AbilityName_C.ExecuteUbergraph_WBP_AbilityName
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AbilityName_C::ExecuteUbergraph_WBP_AbilityName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AbilityName_C", "ExecuteUbergraph_WBP_AbilityName");

	Params::WBP_AbilityName_C_ExecuteUbergraph_WBP_AbilityName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AbilityName.WBP_AbilityName_C.DestroySelf
// (BlueprintCallable, BlueprintEvent)

void UWBP_AbilityName_C::DestroySelf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AbilityName_C", "DestroySelf");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AbilityName.WBP_AbilityName_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_AbilityName_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AbilityName_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AbilityName.WBP_AbilityName_C.PlayShake
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AbilityName_C::PlayShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AbilityName_C", "PlayShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AbilityName.WBP_AbilityName_C.SetAbilityName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      NewName                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_AbilityName_C::SetAbilityName(const class FText& NewName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AbilityName_C", "SetAbilityName");

	Params::WBP_AbilityName_C_SetAbilityName Parms{};

	Parms.NewName = std::move(NewName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AbilityName.WBP_AbilityName_C.Play
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AbilityName_C::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AbilityName_C", "Play");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AbilityName.WBP_AbilityName_C.SequenceEvent__ENTRYPOINTWBP_AbilityName_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AbilityName_C::SequenceEvent__ENTRYPOINTWBP_AbilityName_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AbilityName_C", "SequenceEvent__ENTRYPOINTWBP_AbilityName_0");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
