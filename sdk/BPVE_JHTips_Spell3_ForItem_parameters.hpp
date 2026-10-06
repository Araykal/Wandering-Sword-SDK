#pragma once



// Package: BPVE_JHTips_Spell3_ForItem

#include "Basic.hpp"

#include "Engine_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_JHTips_Spell3_ForItem.BPVE_JHTips_Spell3_ForItem_C.ExecuteUbergraph_BPVE_JHTips_Spell3_ForItem
// 0x0160 (0x0160 - 0x0000)
struct BPVE_JHTips_Spell3_ForItem_C_ExecuteUbergraph_BPVE_JHTips_Spell3_ForItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBPVE_JHTips_SpellBlock3_C*             K2Node_DynamicCast_AsBPVE_JHTips_Spell_Block_3;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue_1;          // 0x0040(0x0018)()
	class FString                                 CallFunc_GetValueSafe_String_ReturnValue;          // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue_1;         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_LocalizedNumber_ReturnValue;              // 0x0078(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0090(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0110(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0120(0x0018)()
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue_1;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13A[0x6];                                      // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue_2;          // 0x0140(0x0018)()
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue_2;          // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_JHTips_Spell3_ForItem_C_ExecuteUbergraph_BPVE_JHTips_Spell3_ForItem;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
