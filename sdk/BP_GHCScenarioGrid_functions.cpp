#pragma once



// Package: BP_GHCScenarioGrid

#include "Basic.hpp"

#include "BP_GHCScenarioGrid_classes.hpp"
#include "BP_GHCScenarioGrid_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_GHCScenarioGrid.BP_GHCScenarioGrid_C.ExecuteUbergraph_BP_GHCScenarioGrid
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GHCScenarioGrid_C::ExecuteUbergraph_BP_GHCScenarioGrid(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GHCScenarioGrid_C", "ExecuteUbergraph_BP_GHCScenarioGrid");

	Params::BP_GHCScenarioGrid_C_ExecuteUbergraph_BP_GHCScenarioGrid Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GHCScenarioGrid.BP_GHCScenarioGrid_C.BP_OnEntryInitialized_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GHCScenarioGrid_C::BP_OnEntryInitialized_Event_0(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GHCScenarioGrid_C", "BP_OnEntryInitialized_Event_0");

	Params::BP_GHCScenarioGrid_C_BP_OnEntryInitialized_Event_0 Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GHCScenarioGrid.BP_GHCScenarioGrid_C.HandleEntryGenerated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GHCScenarioGrid_C::HandleEntryGenerated(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GHCScenarioGrid_C", "HandleEntryGenerated");

	Params::BP_GHCScenarioGrid_C_HandleEntryGenerated Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GHCScenarioGrid.BP_GHCScenarioGrid_C.EVT_InitOnce
// (Event, Public, BlueprintEvent)

void UBP_GHCScenarioGrid_C::EVT_InitOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GHCScenarioGrid_C", "EVT_InitOnce");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
