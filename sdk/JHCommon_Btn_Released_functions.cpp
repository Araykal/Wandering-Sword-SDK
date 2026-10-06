#pragma once



// Package: JHCommon_Btn_Released

#include "Basic.hpp"

#include "JHCommon_Btn_Released_classes.hpp"
#include "JHCommon_Btn_Released_parameters.hpp"


SDK_NAMESPACE_START

// Function JHCommon_Btn_Released.JHCommon_Btn_Released_C.ExecuteUbergraph_JHCommon_Btn_Released
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHCommon_Btn_Released_C::ExecuteUbergraph_JHCommon_Btn_Released(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Released_C", "ExecuteUbergraph_JHCommon_Btn_Released");

	Params::JHCommon_Btn_Released_C_ExecuteUbergraph_JHCommon_Btn_Released Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHCommon_Btn_Released.JHCommon_Btn_Released_C.BndEvt__JHCommon_Btn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UJHCommon_Btn_Released_C::BndEvt__JHCommon_Btn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Released_C", "BndEvt__JHCommon_Btn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JHCommon_Btn_Released.JHCommon_Btn_Released_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJHCommon_Btn_Released_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Released_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
