#pragma once



// Package: VE_FusionListItem

#include "Basic.hpp"

#include "VE_FusionListItem_classes.hpp"
#include "VE_FusionListItem_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_FusionListItem.VE_FusionListItem_C.ExecuteUbergraph_VE_FusionListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_FusionListItem_C::ExecuteUbergraph_VE_FusionListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_FusionListItem_C", "ExecuteUbergraph_VE_FusionListItem");

	Params::VE_FusionListItem_C_ExecuteUbergraph_VE_FusionListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_FusionListItem.VE_FusionListItem_C.BndEvt__VE_FusionListItem_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVE_FusionListItem_C::BndEvt__VE_FusionListItem_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_FusionListItem_C", "BndEvt__VE_FusionListItem_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::VE_FusionListItem_C_BndEvt__VE_FusionListItem_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VE_FusionListItem.VE_FusionListItem_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UVE_FusionListItem_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_FusionListItem_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VE_FusionListItem.VE_FusionListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVE_FusionListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_FusionListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
