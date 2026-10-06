#pragma once



// Package: BPMV_JHCertView_mobile

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_JHCertView_mobile.BPMV_JHCertView_mobile_C.ExecuteUbergraph_BPMV_JHCertView_mobile
// 0x0050 (0x0050 - 0x0000)
struct BPMV_JHCertView_mobile_C_ExecuteUbergraph_BPMV_JHCertView_mobile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0018)()
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUICertificationVM_mobile*         K2Node_DynamicCast_AsJHNeo_UICertification_VM_Mobile; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0038(0x0018)()
};
DUMPER7_ASSERTS_BPMV_JHCertView_mobile_C_ExecuteUbergraph_BPMV_JHCertView_mobile;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
