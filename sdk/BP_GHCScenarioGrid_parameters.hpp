#pragma once



// Package: BP_GHCScenarioGrid

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_GHCScenarioGrid.BP_GHCScenarioGrid_C.ExecuteUbergraph_BP_GHCScenarioGrid
// 0x0030 (0x0030 - 0x0000)
struct BP_GHCScenarioGrid_C_ExecuteUbergraph_BP_GHCScenarioGrid final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Item, class UUserWidget* Widget)> K2Node_CreateDelegate_OutputDelegate; // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_CustomEvent_Widget_1;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_CustomEvent_Widget;                         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GHCScenarioGrid_C_ExecuteUbergraph_BP_GHCScenarioGrid;

// Function BP_GHCScenarioGrid.BP_GHCScenarioGrid_C.BP_OnEntryInitialized_Event_0
// 0x0010 (0x0010 - 0x0000)
struct BP_GHCScenarioGrid_C_BP_OnEntryInitialized_Event_0 final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GHCScenarioGrid_C_BP_OnEntryInitialized_Event_0;

// Function BP_GHCScenarioGrid.BP_GHCScenarioGrid_C.HandleEntryGenerated
// 0x0008 (0x0008 - 0x0000)
struct BP_GHCScenarioGrid_C_HandleEntryGenerated final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GHCScenarioGrid_C_HandleEntryGenerated;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
