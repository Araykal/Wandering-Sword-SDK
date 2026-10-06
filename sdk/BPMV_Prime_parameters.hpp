#pragma once



// Package: BPMV_Prime

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_Prime.BPMV_Prime_C.ExecuteUbergraph_BPMV_Prime
// 0x0078 (0x0078 - 0x0000)
struct BPMV_Prime_C_ExecuteUbergraph_BPMV_Prime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class UNeoUINamedSlot*>     K2Node_MakeMap_Map;                                // 0x0008(0x0050)(ContainsInstancedReference)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IJHNeoUIM_Prime>       K2Node_DynamicCast_AsJHNeo_UIM_Prime;              // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_Prime_C_ExecuteUbergraph_BPMV_Prime;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
