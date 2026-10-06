#pragma once



// Package: BPMV_SplashScreen

#include "Basic.hpp"

#include "BPMV_SplashScreen_classes.hpp"
#include "BPMV_SplashScreen_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_SplashScreen.BPMV_SplashScreen_C.ExecuteUbergraph_BPMV_SplashScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_SplashScreen_C::ExecuteUbergraph_BPMV_SplashScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SplashScreen_C", "ExecuteUbergraph_BPMV_SplashScreen");

	Params::BPMV_SplashScreen_C_ExecuteUbergraph_BPMV_SplashScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_SplashScreen.BPMV_SplashScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_SplashScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_SplashScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
