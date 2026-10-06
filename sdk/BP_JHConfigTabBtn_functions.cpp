#pragma once



// Package: BP_JHConfigTabBtn

#include "Basic.hpp"

#include "BP_JHConfigTabBtn_classes.hpp"
#include "BP_JHConfigTabBtn_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_JHConfigTabBtn.BP_JHConfigTabBtn_C.ExecuteUbergraph_BP_JHConfigTabBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JHConfigTabBtn_C::ExecuteUbergraph_BP_JHConfigTabBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHConfigTabBtn_C", "ExecuteUbergraph_BP_JHConfigTabBtn");

	Params::BP_JHConfigTabBtn_C_ExecuteUbergraph_BP_JHConfigTabBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHConfigTabBtn.BP_JHConfigTabBtn_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBP_JHConfigTabBtn_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHConfigTabBtn_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_JHConfigTabBtn.BP_JHConfigTabBtn_C.BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_JHConfigTabBtn_C::BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHConfigTabBtn_C", "BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BP_JHConfigTabBtn_C_BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHConfigTabBtn.BP_JHConfigTabBtn_C.EVT_UpdateActiveStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_JHConfigTabBtn_C::EVT_UpdateActiveStatus(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHConfigTabBtn_C", "EVT_UpdateActiveStatus");

	Params::BP_JHConfigTabBtn_C_EVT_UpdateActiveStatus Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_JHConfigTabBtn.BP_JHConfigTabBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_JHConfigTabBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_JHConfigTabBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
