#pragma once



// Package: BPVE_BattleInfoProficiency

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_BattleInfoProficiency.BPVE_BattleInfoProficiency_C.SetIconImg
// 0x0090 (0x0090 - 0x0000)
struct BPVE_BattleInfoProficiency_C_SetIconImg final
{
public:
	class UTexture2D*                             Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x0008(0x0088)()
};
DUMPER7_ASSERTS_BPVE_BattleInfoProficiency_C_SetIconImg;

// Function BPVE_BattleInfoProficiency.BPVE_BattleInfoProficiency_C.Get Tool Tip Widget 0
// 0x0020 (0x0020 - 0x0000)
struct BPVE_BattleInfoProficiency_C_Get_Tool_Tip_Widget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITipsModuleVM*                   CallFunc_Tips_ReturnValue;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHSimpleTip*                           CallFunc_ShowSimple_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_BattleInfoProficiency_C_Get_Tool_Tip_Widget_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
