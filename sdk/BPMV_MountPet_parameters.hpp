#pragma once



// Package: BPMV_MountPet

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_MountPet.BPMV_MountPet_C.ExecuteUbergraph_BPMV_MountPet
// 0x0058 (0x0058 - 0x0000)
struct BPMV_MountPet_C_ExecuteUbergraph_BPMV_MountPet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class UNeoUINamedSlot*>     K2Node_MakeMap_Map;                                // 0x0008(0x0050)(ContainsInstancedReference)
};
DUMPER7_ASSERTS_BPMV_MountPet_C_ExecuteUbergraph_BPMV_MountPet;

// Function BPMV_MountPet.BPMV_MountPet_C.NaviLeft
// 0x0020 (0x0020 - 0x0000)
struct BPMV_MountPet_C_NaviLeft final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIUniversalModuleVMBase*            CallFunc_GetNeoUIVM_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_ChangeNaviFocus_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_MountPet_C_NaviLeft;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
