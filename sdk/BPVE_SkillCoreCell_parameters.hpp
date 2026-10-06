#pragma once



// Package: BPVE_SkillCoreCell

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_SkillCoreCell.BPVE_SkillCoreCell_C.ExecuteUbergraph_BPVE_SkillCoreCell
// 0x0018 (0x0018 - 0x0000)
struct BPVE_SkillCoreCell_C_ExecuteUbergraph_BPVE_SkillCoreCell final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBPVE_SkillCoreCellDisplay_C*           K2Node_DynamicCast_AsBPVE_Skill_Core_Cell_Display; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_SkillCoreCell_C_ExecuteUbergraph_BPVE_SkillCoreCell;

// Function BPVE_SkillCoreCell.BPVE_SkillCoreCell_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct BPVE_SkillCoreCell_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
DUMPER7_ASSERTS_BPVE_SkillCoreCell_C_OnFocusReceived;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
