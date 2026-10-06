#pragma once



// Package: UWBP_Tip2

#include "Basic.hpp"

#include "UWBP_Tip2_classes.hpp"
#include "UWBP_Tip2_parameters.hpp"


SDK_NAMESPACE_START

// Function UWBP_Tip2.UWBP_Tip2_C.ExecuteUbergraph_UWBP_Tip2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_Tip2_C::ExecuteUbergraph_UWBP_Tip2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip2_C", "ExecuteUbergraph_UWBP_Tip2");

	Params::UWBP_Tip2_C_ExecuteUbergraph_UWBP_Tip2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_Tip2.UWBP_Tip2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUWBP_Tip2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_Tip2.UWBP_Tip2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUWBP_Tip2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip2_C", "PreConstruct");

	Params::UWBP_Tip2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_Tip2.UWBP_Tip2_C.RotationStart
// (BlueprintCallable, BlueprintEvent)

void UUWBP_Tip2_C::RotationStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip2_C", "RotationStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_Tip2.UWBP_Tip2_C.RotationEnd
// (BlueprintCallable, BlueprintEvent)

void UUWBP_Tip2_C::RotationEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip2_C", "RotationEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_Tip2.UWBP_Tip2_C.BndEvt__UWBP_Tip2_UWBP_Tip_3_K2Node_ComponentBoundEvent_3_TipItemClicked__DelegateSignature
// (BlueprintEvent)

void UUWBP_Tip2_C::BndEvt__UWBP_Tip2_UWBP_Tip_3_K2Node_ComponentBoundEvent_3_TipItemClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip2_C", "BndEvt__UWBP_Tip2_UWBP_Tip_3_K2Node_ComponentBoundEvent_3_TipItemClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_Tip2.UWBP_Tip2_C.BndEvt__UWBP_Tip2_UWBP_Tip_1_K2Node_ComponentBoundEvent_0_TipItemClicked__DelegateSignature
// (BlueprintEvent)

void UUWBP_Tip2_C::BndEvt__UWBP_Tip2_UWBP_Tip_1_K2Node_ComponentBoundEvent_0_TipItemClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip2_C", "BndEvt__UWBP_Tip2_UWBP_Tip_1_K2Node_ComponentBoundEvent_0_TipItemClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_Tip2.UWBP_Tip2_C.BndEvt__UWBP_Tip2_UWBP_Tip_K2Node_ComponentBoundEvent_1_TipItemClicked__DelegateSignature
// (BlueprintEvent)

void UUWBP_Tip2_C::BndEvt__UWBP_Tip2_UWBP_Tip_K2Node_ComponentBoundEvent_1_TipItemClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip2_C", "BndEvt__UWBP_Tip2_UWBP_Tip_K2Node_ComponentBoundEvent_1_TipItemClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_Tip2.UWBP_Tip2_C.BndEvt__UWBP_Tip2_UWBP_Tip_2_K2Node_ComponentBoundEvent_2_TipItemClicked__DelegateSignature
// (BlueprintEvent)

void UUWBP_Tip2_C::BndEvt__UWBP_Tip2_UWBP_Tip_2_K2Node_ComponentBoundEvent_2_TipItemClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_Tip2_C", "BndEvt__UWBP_Tip2_UWBP_Tip_2_K2Node_ComponentBoundEvent_2_TipItemClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
