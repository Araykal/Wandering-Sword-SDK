#pragma once



// Package: BP_ItemGridWDT

#include "Basic.hpp"

#include "BP_ItemGridWDT_classes.hpp"
#include "BP_ItemGridWDT_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_ItemGridWDT.BP_ItemGridWDT_C.ExecuteUbergraph_BP_ItemGridWDT
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemGridWDT_C::ExecuteUbergraph_BP_ItemGridWDT(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemGridWDT_C", "ExecuteUbergraph_BP_ItemGridWDT");

	Params::BP_ItemGridWDT_C_ExecuteUbergraph_BP_ItemGridWDT Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemGridWDT.BP_ItemGridWDT_C.EVT_InitOnce
// (Event, Public, BlueprintEvent)

void UBP_ItemGridWDT_C::EVT_InitOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemGridWDT_C", "EVT_InitOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemGridWDT.BP_ItemGridWDT_C.BP_OnEntryInitialized_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemGridWDT_C::BP_OnEntryInitialized_Event_0(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemGridWDT_C", "BP_OnEntryInitialized_Event_0");

	Params::BP_ItemGridWDT_C_BP_OnEntryInitialized_Event_0 Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
