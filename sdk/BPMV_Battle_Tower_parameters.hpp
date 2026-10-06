#pragma once



// Package: BPMV_Battle_Tower

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_Battle_Tower.BPMV_Battle_Tower_C.ExecuteUbergraph_BPMV_Battle_Tower
// 0x0038 (0x0038 - 0x0000)
struct BPMV_Battle_Tower_C_ExecuteUbergraph_BPMV_Battle_Tower final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0018(0x0018)()
	int32                                         K2Node_Event_aimIndex;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_successful;                           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_Battle_Tower_C_ExecuteUbergraph_BPMV_Battle_Tower;

// Function BPMV_Battle_Tower.BPMV_Battle_Tower_C.EVT_UpdateTowerAimStatus
// 0x0008 (0x0008 - 0x0000)
struct BPMV_Battle_Tower_C_EVT_UpdateTowerAimStatus final
{
public:
	int32                                         aimIndex;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          successful;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_Battle_Tower_C_EVT_UpdateTowerAimStatus;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
