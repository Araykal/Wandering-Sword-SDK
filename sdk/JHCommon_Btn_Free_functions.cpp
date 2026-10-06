#pragma once



// Package: JHCommon_Btn_Free

#include "Basic.hpp"

#include "JHCommon_Btn_Free_classes.hpp"
#include "JHCommon_Btn_Free_parameters.hpp"


SDK_NAMESPACE_START

// Function JHCommon_Btn_Free.JHCommon_Btn_Free_C.ExecuteUbergraph_JHCommon_Btn_Free
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHCommon_Btn_Free_C::ExecuteUbergraph_JHCommon_Btn_Free(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Free_C", "ExecuteUbergraph_JHCommon_Btn_Free");

	Params::JHCommon_Btn_Free_C_ExecuteUbergraph_JHCommon_Btn_Free Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHCommon_Btn_Free.JHCommon_Btn_Free_C.BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHCommon_Btn_Free_C::BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Free_C", "BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::JHCommon_Btn_Free_C_BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn_0 = Btn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHCommon_Btn_Free.JHCommon_Btn_Free_C.BndEvt__JHCommon_Btn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UJHCommon_Btn_Free_C::BndEvt__JHCommon_Btn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Free_C", "BndEvt__JHCommon_Btn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JHCommon_Btn_Free.JHCommon_Btn_Free_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJHCommon_Btn_Free_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Free_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JHCommon_Btn_Free.JHCommon_Btn_Free_C.ChangeIFAData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Str                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UJHCommon_Btn_Free_C::ChangeIFAData(const class FString& Str)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Free_C", "ChangeIFAData");

	Params::JHCommon_Btn_Free_C_ChangeIFAData Parms{};

	Parms.Str = std::move(Str);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
