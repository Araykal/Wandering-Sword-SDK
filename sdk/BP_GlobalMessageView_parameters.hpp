#pragma once



// Package: BP_GlobalMessageView

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_GlobalMessageView.BP_GlobalMessageView_C.ExecuteUbergraph_BP_GlobalMessageView
// 0x0040 (0x0040 - 0x0000)
struct BP_GlobalMessageView_C_ExecuteUbergraph_BP_GlobalMessageView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GlobalMessageView_C_ExecuteUbergraph_BP_GlobalMessageView;

// Function BP_GlobalMessageView.BP_GlobalMessageView_C.Tick
// 0x003C (0x003C - 0x0000)
struct BP_GlobalMessageView_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_GlobalMessageView_C_Tick;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
