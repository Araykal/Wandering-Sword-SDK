#pragma once



// Package: JHCommon_Btn_Pure

#include "Basic.hpp"

#include "JHCommon_Btn_Pure_classes.hpp"
#include "JHCommon_Btn_Pure_parameters.hpp"


SDK_NAMESPACE_START

// Function JHCommon_Btn_Pure.JHCommon_Btn_Pure_C.ExecuteUbergraph_JHCommon_Btn_Pure
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHCommon_Btn_Pure_C::ExecuteUbergraph_JHCommon_Btn_Pure(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Pure_C", "ExecuteUbergraph_JHCommon_Btn_Pure");

	Params::JHCommon_Btn_Pure_C_ExecuteUbergraph_JHCommon_Btn_Pure Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHCommon_Btn_Pure.JHCommon_Btn_Pure_C.BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHCommon_Btn_Pure_C::BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Pure_C", "BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::JHCommon_Btn_Pure_C_BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHCommon_Btn_Pure.JHCommon_Btn_Pure_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJHCommon_Btn_Pure_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Pure_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JHCommon_Btn_Pure.JHCommon_Btn_Pure_C.ChangeIFAData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Str                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UJHCommon_Btn_Pure_C::ChangeIFAData(const class FString& Str)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHCommon_Btn_Pure_C", "ChangeIFAData");

	Params::JHCommon_Btn_Pure_C_ChangeIFAData Parms{};

	Parms.Str = std::move(Str);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
