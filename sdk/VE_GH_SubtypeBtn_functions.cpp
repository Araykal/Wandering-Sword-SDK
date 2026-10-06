#pragma once



// Package: VE_GH_SubtypeBtn

#include "Basic.hpp"

#include "VE_GH_SubtypeBtn_classes.hpp"
#include "VE_GH_SubtypeBtn_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_GH_SubtypeBtn.VE_GH_SubtypeBtn_C.ExecuteUbergraph_VE_GH_SubtypeBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_GH_SubtypeBtn_C::ExecuteUbergraph_VE_GH_SubtypeBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_GH_SubtypeBtn_C", "ExecuteUbergraph_VE_GH_SubtypeBtn");

	Params::VE_GH_SubtypeBtn_C_ExecuteUbergraph_VE_GH_SubtypeBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_GH_SubtypeBtn.VE_GH_SubtypeBtn_C.BndEvt__VE_GH_SubtypeBtn_BTN_GH_Subtype_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_GH_SubtypeBtn_C::BndEvt__VE_GH_SubtypeBtn_BTN_GH_Subtype_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_GH_SubtypeBtn_C", "BndEvt__VE_GH_SubtypeBtn_BTN_GH_Subtype_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::VE_GH_SubtypeBtn_C_BndEvt__VE_GH_SubtypeBtn_BTN_GH_Subtype_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
