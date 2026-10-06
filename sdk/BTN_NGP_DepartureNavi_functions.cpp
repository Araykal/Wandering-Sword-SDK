#pragma once



// Package: BTN_NGP_DepartureNavi

#include "Basic.hpp"

#include "BTN_NGP_DepartureNavi_classes.hpp"
#include "BTN_NGP_DepartureNavi_parameters.hpp"


SDK_NAMESPACE_START

// Function BTN_NGP_DepartureNavi.BTN_NGP_DepartureNavi_C.ExecuteUbergraph_BTN_NGP_DepartureNavi
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTN_NGP_DepartureNavi_C::ExecuteUbergraph_BTN_NGP_DepartureNavi(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_DepartureNavi_C", "ExecuteUbergraph_BTN_NGP_DepartureNavi");

	Params::BTN_NGP_DepartureNavi_C_ExecuteUbergraph_BTN_NGP_DepartureNavi Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTN_NGP_DepartureNavi.BTN_NGP_DepartureNavi_C.EVT_UpdateActiveStatus_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTN_NGP_DepartureNavi_C::EVT_UpdateActiveStatus_1(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_DepartureNavi_C", "EVT_UpdateActiveStatus_1");

	Params::BTN_NGP_DepartureNavi_C_EVT_UpdateActiveStatus_1 Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTN_NGP_DepartureNavi.BTN_NGP_DepartureNavi_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBTN_NGP_DepartureNavi_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_DepartureNavi_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BTN_NGP_DepartureNavi.BTN_NGP_DepartureNavi_C.BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTN_NGP_DepartureNavi_C::BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_DepartureNavi_C", "BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BTN_NGP_DepartureNavi_C_BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTN_NGP_DepartureNavi.BTN_NGP_DepartureNavi_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBTN_NGP_DepartureNavi_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_DepartureNavi_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
