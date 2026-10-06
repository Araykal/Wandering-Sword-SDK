#pragma once



// Package: BP_BackpackFilterBtn

#include "Basic.hpp"

#include "BP_BackpackFilterBtn_classes.hpp"
#include "BP_BackpackFilterBtn_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_BackpackFilterBtn.BP_BackpackFilterBtn_C.ExecuteUbergraph_BP_BackpackFilterBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BackpackFilterBtn_C::ExecuteUbergraph_BP_BackpackFilterBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackpackFilterBtn_C", "ExecuteUbergraph_BP_BackpackFilterBtn");

	Params::BP_BackpackFilterBtn_C_ExecuteUbergraph_BP_BackpackFilterBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BackpackFilterBtn.BP_BackpackFilterBtn_C.BndEvt__BP_BackpackFilterBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_BackpackFilterBtn_C::BndEvt__BP_BackpackFilterBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackpackFilterBtn_C", "BndEvt__BP_BackpackFilterBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BackpackFilterBtn.BP_BackpackFilterBtn_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBP_BackpackFilterBtn_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BackpackFilterBtn_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
