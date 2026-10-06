#pragma once



// Package: BPMV_MicroPopupMsg

#include "Basic.hpp"

#include "BPMV_MicroPopupMsg_classes.hpp"
#include "BPMV_MicroPopupMsg_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_MicroPopupMsg.BPMV_MicroPopupMsg_C.ExecuteUbergraph_BPMV_MicroPopupMsg
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_MicroPopupMsg_C::ExecuteUbergraph_BPMV_MicroPopupMsg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_MicroPopupMsg_C", "ExecuteUbergraph_BPMV_MicroPopupMsg");

	Params::BPMV_MicroPopupMsg_C_ExecuteUbergraph_BPMV_MicroPopupMsg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_MicroPopupMsg.BPMV_MicroPopupMsg_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_MicroPopupMsg_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_MicroPopupMsg_C", "Tick");

	Params::BPMV_MicroPopupMsg_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
