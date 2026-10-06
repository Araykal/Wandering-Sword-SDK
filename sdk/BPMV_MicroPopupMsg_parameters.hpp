#pragma once



// Package: BPMV_MicroPopupMsg

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_MicroPopupMsg.BPMV_MicroPopupMsg_C.ExecuteUbergraph_BPMV_MicroPopupMsg
// 0x0040 (0x0040 - 0x0000)
struct BPMV_MicroPopupMsg_C_ExecuteUbergraph_BPMV_MicroPopupMsg final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_MicroPopupMsg_C_ExecuteUbergraph_BPMV_MicroPopupMsg;

// Function BPMV_MicroPopupMsg.BPMV_MicroPopupMsg_C.Tick
// 0x003C (0x003C - 0x0000)
struct BPMV_MicroPopupMsg_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_MicroPopupMsg_C_Tick;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
