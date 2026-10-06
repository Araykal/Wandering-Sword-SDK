#pragma once



// Package: JHGHC_PropRegionElement

#include "Basic.hpp"

#include "JHGHC_PropRegionElement_classes.hpp"
#include "JHGHC_PropRegionElement_parameters.hpp"


SDK_NAMESPACE_START

// Function JHGHC_PropRegionElement.JHGHC_PropRegionElement_C.ExecuteUbergraph_JHGHC_PropRegionElement
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHGHC_PropRegionElement_C::ExecuteUbergraph_JHGHC_PropRegionElement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_PropRegionElement_C", "ExecuteUbergraph_JHGHC_PropRegionElement");

	Params::JHGHC_PropRegionElement_C_ExecuteUbergraph_JHGHC_PropRegionElement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGHC_PropRegionElement.JHGHC_PropRegionElement_C.EVT_GamepadHideTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UJHGHC_PropRegionElement_C::EVT_GamepadHideTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_PropRegionElement_C", "EVT_GamepadHideTips");

	Params::JHGHC_PropRegionElement_C_EVT_GamepadHideTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGHC_PropRegionElement.JHGHC_PropRegionElement_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UJHGHC_PropRegionElement_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_PropRegionElement_C", "EVT_GamepadShowTips");

	Params::JHGHC_PropRegionElement_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGHC_PropRegionElement.JHGHC_PropRegionElement_C.BndEvt__JHGHC_PropRegionElement_BTN_GHC_Prop_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHGHC_PropRegionElement_C::BndEvt__JHGHC_PropRegionElement_BTN_GHC_Prop_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_PropRegionElement_C", "BndEvt__JHGHC_PropRegionElement_BTN_GHC_Prop_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature");

	Params::JHGHC_PropRegionElement_C_BndEvt__JHGHC_PropRegionElement_BTN_GHC_Prop_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGHC_PropRegionElement.JHGHC_PropRegionElement_C.BndEvt__JHGHC_PropRegionElement_BTN_GHC_Prop_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHGHC_PropRegionElement_C::BndEvt__JHGHC_PropRegionElement_BTN_GHC_Prop_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_PropRegionElement_C", "BndEvt__JHGHC_PropRegionElement_BTN_GHC_Prop_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature");

	Params::JHGHC_PropRegionElement_C_BndEvt__JHGHC_PropRegionElement_BTN_GHC_Prop_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGHC_PropRegionElement.JHGHC_PropRegionElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJHGHC_PropRegionElement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_PropRegionElement_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
