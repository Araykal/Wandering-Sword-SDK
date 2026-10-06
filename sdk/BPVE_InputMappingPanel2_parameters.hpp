#pragma once



// Package: BPVE_InputMappingPanel2

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_InputMappingPanel2.BPVE_InputMappingPanel2_C.ExecuteUbergraph_BPVE_InputMappingPanel2
// 0x0050 (0x0050 - 0x0000)
struct BPVE_InputMappingPanel2_C_ExecuteUbergraph_BPVE_InputMappingPanel2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetConfig_InputMappingCategoryTitle_ReturnValue; // 0x0008(0x0018)()
	class FText                                   CallFunc_GetConfig_InputMappingCategoryTitle_ReturnValue_1; // 0x0020(0x0018)()
	class FText                                   CallFunc_GetConfig_InputMappingCategoryTitle_ReturnValue_2; // 0x0038(0x0018)()
};
DUMPER7_ASSERTS_BPVE_InputMappingPanel2_C_ExecuteUbergraph_BPVE_InputMappingPanel2;

// Function BPVE_InputMappingPanel2.BPVE_InputMappingPanel2_C.OnMouseButtonDown_0
// 0x0220 (0x0220 - 0x0000)
struct BPVE_InputMappingPanel2_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0168(0x00B8)()
};
DUMPER7_ASSERTS_BPVE_InputMappingPanel2_C_OnMouseButtonDown_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
