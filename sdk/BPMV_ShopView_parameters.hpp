#pragma once



// Package: BPMV_ShopView

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_ShopView.BPMV_ShopView_C.ExecuteUbergraph_BPMV_ShopView
// 0x0018 (0x0018 - 0x0000)
struct BPMV_ShopView_C_ExecuteUbergraph_BPMV_ShopView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
DUMPER7_ASSERTS_BPMV_ShopView_C_ExecuteUbergraph_BPMV_ShopView;

// Function BPMV_ShopView.BPMV_ShopView_C.On_BTN_Selling_MouseButtonDown_0
// 0x0230 (0x0230 - 0x0000)
struct BPMV_ShopView_C_On_BTN_Selling_MouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0168(0x00B8)()
	class UJHBackpackShopVM*                      K2Node_DynamicCast_AsJHBackpack_Shop_VM;           // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_ShopView_C_On_BTN_Selling_MouseButtonDown_0;

// Function BPMV_ShopView.BPMV_ShopView_C.DoCustomNavigation_0
// 0x0020 (0x0020 - 0x0000)
struct BPMV_ShopView_C_DoCustomNavigation_0 final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIUniversalModuleVMBase*            CallFunc_GetNeoUIVM_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_ChangeNaviFocus_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_ShopView_C_DoCustomNavigation_0;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
