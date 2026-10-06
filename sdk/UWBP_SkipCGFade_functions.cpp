#pragma once



// Package: UWBP_SkipCGFade

#include "Basic.hpp"

#include "UWBP_SkipCGFade_classes.hpp"
#include "UWBP_SkipCGFade_parameters.hpp"


SDK_NAMESPACE_START

// Function UWBP_SkipCGFade.UWBP_SkipCGFade_C.ExecuteUbergraph_UWBP_SkipCGFade
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_SkipCGFade_C::ExecuteUbergraph_UWBP_SkipCGFade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCGFade_C", "ExecuteUbergraph_UWBP_SkipCGFade");

	Params::UWBP_SkipCGFade_C_ExecuteUbergraph_UWBP_SkipCGFade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_SkipCGFade.UWBP_SkipCGFade_C.PlayFadeAnimal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PlayRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_SkipCGFade_C::PlayFadeAnimal(float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCGFade_C", "PlayFadeAnimal");

	Params::UWBP_SkipCGFade_C_PlayFadeAnimal Parms{};

	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_SkipCGFade.UWBP_SkipCGFade_C.ResetState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUWBP_SkipCGFade_C::ResetState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCGFade_C", "ResetState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_SkipCGFade.UWBP_SkipCGFade_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UUWBP_SkipCGFade_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCGFade_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_SkipCGFade.UWBP_SkipCGFade_C.SequenceEvent__ENTRYPOINTUWBP_SkipCGFade_0
// (Public, BlueprintCallable, BlueprintEvent)

void UUWBP_SkipCGFade_C::SequenceEvent__ENTRYPOINTUWBP_SkipCGFade_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_SkipCGFade_C", "SequenceEvent__ENTRYPOINTUWBP_SkipCGFade_0");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
