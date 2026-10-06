#pragma once



// Package: BTN_NGP_DepartureMain

#include "Basic.hpp"

#include "BTN_NGP_DepartureMain_classes.hpp"
#include "BTN_NGP_DepartureMain_parameters.hpp"


SDK_NAMESPACE_START

// Function BTN_NGP_DepartureMain.BTN_NGP_DepartureMain_C.ExecuteUbergraph_BTN_NGP_DepartureMain
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTN_NGP_DepartureMain_C::ExecuteUbergraph_BTN_NGP_DepartureMain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_DepartureMain_C", "ExecuteUbergraph_BTN_NGP_DepartureMain");

	Params::BTN_NGP_DepartureMain_C_ExecuteUbergraph_BTN_NGP_DepartureMain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTN_NGP_DepartureMain.BTN_NGP_DepartureMain_C.BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTN_NGP_DepartureMain_C::BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_DepartureMain_C", "BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BTN_NGP_DepartureMain_C_BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn_0 = Btn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTN_NGP_DepartureMain.BTN_NGP_DepartureMain_C.BndEvt__JHCommon_Btn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBTN_NGP_DepartureMain_C::BndEvt__JHCommon_Btn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_DepartureMain_C", "BndEvt__JHCommon_Btn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BTN_NGP_DepartureMain.BTN_NGP_DepartureMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBTN_NGP_DepartureMain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_DepartureMain_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BTN_NGP_DepartureMain.BTN_NGP_DepartureMain_C.ChangeIFAData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Str                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBTN_NGP_DepartureMain_C::ChangeIFAData(const class FString& Str)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_DepartureMain_C", "ChangeIFAData");

	Params::BTN_NGP_DepartureMain_C_ChangeIFAData Parms{};

	Parms.Str = std::move(Str);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
