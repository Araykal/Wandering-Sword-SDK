#pragma once



// Package: BPVE_CookingMaterial

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_CookingMaterial.BPVE_CookingMaterial_C.ExecuteUbergraph_BPVE_CookingMaterial
// 0x00B0 (0x00B0 - 0x0000)
struct BPVE_CookingMaterial_C_ExecuteUbergraph_BPVE_CookingMaterial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_intFlag;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_strFlag;                              // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue_1;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUITipsModuleVM_Gamepad*           CallFunc_Tips_Gamepad_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue_2;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUITipsModuleVM_Gamepad*           CallFunc_Tips_Gamepad_ReturnValue_1;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITipsVEBase*                     CallFunc_ShowShopItem_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0060(0x0018)()
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUICookingDetailVM*                K2Node_DynamicCast_AsJHNeo_UICooking_Detail_VM;    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetAggregationDescTxtById_ReturnValue;    // 0x0090(0x0018)()
	class UCommonTipVE*                           CallFunc_ShowCommonTip_ReturnValue;                // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_CookingMaterial_C_ExecuteUbergraph_BPVE_CookingMaterial;

// Function BPVE_CookingMaterial.BPVE_CookingMaterial_C.EVT_GamepadShowTips
// 0x0018 (0x0018 - 0x0000)
struct BPVE_CookingMaterial_C_EVT_GamepadShowTips final
{
public:
	int32                                         intflag;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 strFlag;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_CookingMaterial_C_EVT_GamepadShowTips;

// Function BPVE_CookingMaterial.BPVE_CookingMaterial_C.Get_HotArea_ToolTip_ToolTipWidget_0
// 0x0098 (0x0098 - 0x0000)
struct BPVE_CookingMaterial_C_Get_HotArea_ToolTip_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x0018(0x0018)()
	class UJHNeoUICookingDetailVM*                K2Node_DynamicCast_AsJHNeo_UICooking_Detail_VM;    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetAggregationDescTxtById_ReturnValue;    // 0x0048(0x0018)()
	class UJHNeoUITipsModuleVM*                   CallFunc_Tips_ReturnValue;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue_1;         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue_2;         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUITipsVEBase*                     CallFunc_ShowShopItem_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITipsModuleVM*                   CallFunc_Tips_ReturnValue_1;                       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTipVE*                           CallFunc_ShowCommonTip_ReturnValue;                // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_CookingMaterial_C_Get_HotArea_ToolTip_ToolTipWidget_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
