#pragma once



// Package: BPMV_CommonPopupMsg

#include "Basic.hpp"

#include "BPMV_CommonPopupMsg_classes.hpp"
#include "BPMV_CommonPopupMsg_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_CommonPopupMsg.BPMV_CommonPopupMsg_C.ExecuteUbergraph_BPMV_CommonPopupMsg
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_CommonPopupMsg_C::ExecuteUbergraph_BPMV_CommonPopupMsg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_CommonPopupMsg_C", "ExecuteUbergraph_BPMV_CommonPopupMsg");

	Params::BPMV_CommonPopupMsg_C_ExecuteUbergraph_BPMV_CommonPopupMsg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_CommonPopupMsg.BPMV_CommonPopupMsg_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_CommonPopupMsg_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_CommonPopupMsg_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
