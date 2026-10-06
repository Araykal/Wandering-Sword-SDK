#pragma once



// Package: BPVE_Battle_TowerAim

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_Battle_TowerAim.BPVE_Battle_TowerAim_C.ExecuteUbergraph_BPVE_Battle_TowerAim
// 0x0028 (0x0028 - 0x0000)
struct BPVE_Battle_TowerAim_C_ExecuteUbergraph_BPVE_Battle_TowerAim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0008(0x0018)()
	bool                                          CallFunc_GetValueSafe_Bool_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_Battle_TowerAim_C_ExecuteUbergraph_BPVE_Battle_TowerAim;

// Function BPVE_Battle_TowerAim.BPVE_Battle_TowerAim_C.UpdateFlagStatus
// 0x0002 (0x0002 - 0x0000)
struct BPVE_Battle_TowerAim_C_UpdateFlagStatus final
{
public:
	bool                                          successful;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_Battle_TowerAim_C_UpdateFlagStatus;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
