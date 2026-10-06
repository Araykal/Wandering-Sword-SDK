#pragma once



// Package: BPVE_QuestList

#include "Basic.hpp"

#include "BPVE_QuestList_classes.hpp"
#include "BPVE_QuestList_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_QuestList.BPVE_QuestList_C.ExecuteUbergraph_BPVE_QuestList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_QuestList_C::ExecuteUbergraph_BPVE_QuestList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestList_C", "ExecuteUbergraph_BPVE_QuestList");

	Params::BPVE_QuestList_C_ExecuteUbergraph_BPVE_QuestList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_QuestList.BPVE_QuestList_C.BndEvt__BPVE_QuestList_Btn_Unfinished_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_QuestList_C::BndEvt__BPVE_QuestList_Btn_Unfinished_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestList_C", "BndEvt__BPVE_QuestList_Btn_Unfinished_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_QuestList.BPVE_QuestList_C.EVT_StartFocusListDelay
// (Event, Public, BlueprintEvent)

void UBPVE_QuestList_C::EVT_StartFocusListDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestList_C", "EVT_StartFocusListDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_QuestList.BPVE_QuestList_C.BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_QuestList_C::BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestList_C", "BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature");

	Params::BPVE_QuestList_C_BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_QuestList.BPVE_QuestList_C.EVT_PlayShowAnim
// (Event, Public, BlueprintEvent)

void UBPVE_QuestList_C::EVT_PlayShowAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestList_C", "EVT_PlayShowAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_QuestList.BPVE_QuestList_C.BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_QuestList_C::BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestList_C", "BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");

	Params::BPVE_QuestList_C_BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_QuestList.BPVE_QuestList_C.EVT_PlayHideAnim
// (Event, Public, BlueprintEvent)

void UBPVE_QuestList_C::EVT_PlayHideAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestList_C", "EVT_PlayHideAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_QuestList.BPVE_QuestList_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_QuestList_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_QuestList_C", "OnFocusReceived");

	Params::BPVE_QuestList_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
