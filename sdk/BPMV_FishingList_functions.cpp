#pragma once



// Package: BPMV_FishingList

#include "Basic.hpp"

#include "BPMV_FishingList_classes.hpp"
#include "BPMV_FishingList_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_FishingList.BPMV_FishingList_C.ExecuteUbergraph_BPMV_FishingList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_FishingList_C::ExecuteUbergraph_BPMV_FishingList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FishingList_C", "ExecuteUbergraph_BPMV_FishingList");

	Params::BPMV_FishingList_C_ExecuteUbergraph_BPMV_FishingList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_FishingList.BPMV_FishingList_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_FishingList_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FishingList_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FishingList.BPMV_FishingList_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_FishingList_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FishingList_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FishingList.BPMV_FishingList_C.EVT_FocusFirst
// (Event, Public, BlueprintEvent)

void UBPMV_FishingList_C::EVT_FocusFirst()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FishingList_C", "EVT_FocusFirst");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FishingList.BPMV_FishingList_C.BndEvt__BPMV_FishingList_Btn2_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_FishingList_C::BndEvt__BPMV_FishingList_Btn2_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FishingList_C", "BndEvt__BPMV_FishingList_Btn2_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FishingList.BPMV_FishingList_C.BndEvt__BPMV_FishingList_Btn1_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_FishingList_C::BndEvt__BPMV_FishingList_Btn1_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FishingList_C", "BndEvt__BPMV_FishingList_Btn1_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_FishingList.BPMV_FishingList_C.BndEvt__BPMV_FishingList_Btn0_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPMV_FishingList_C::BndEvt__BPMV_FishingList_Btn0_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_FishingList_C", "BndEvt__BPMV_FishingList_Btn0_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
