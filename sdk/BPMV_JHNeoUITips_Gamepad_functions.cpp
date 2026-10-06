#pragma once



// Package: BPMV_JHNeoUITips_Gamepad

#include "Basic.hpp"

#include "BPMV_JHNeoUITips_Gamepad_classes.hpp"
#include "BPMV_JHNeoUITips_Gamepad_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHNeoUITips_Gamepad.BPMV_JHNeoUITips_Gamepad_C.ExecuteUbergraph_BPMV_JHNeoUITips_Gamepad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHNeoUITips_Gamepad_C::ExecuteUbergraph_BPMV_JHNeoUITips_Gamepad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUITips_Gamepad_C", "ExecuteUbergraph_BPMV_JHNeoUITips_Gamepad");

	Params::BPMV_JHNeoUITips_Gamepad_C_ExecuteUbergraph_BPMV_JHNeoUITips_Gamepad Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHNeoUITips_Gamepad.BPMV_JHNeoUITips_Gamepad_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_JHNeoUITips_Gamepad_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUITips_Gamepad_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
