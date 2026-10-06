#pragma once



// Package: NGP_Cont_Item

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function NGP_Cont_Item.NGP_Cont_Item_C.ExecuteUbergraph_NGP_Cont_Item
// 0x0004 (0x0004 - 0x0000)
struct NGP_Cont_Item_C_ExecuteUbergraph_NGP_Cont_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_NGP_Cont_Item_C_ExecuteUbergraph_NGP_Cont_Item;

// Function NGP_Cont_Item.NGP_Cont_Item_C.EVT_ProvideChildArea
// 0x0020 (0x0020 - 0x0000)
struct NGP_Cont_Item_C_EVT_ProvideChildArea final
{
public:
	TArray<class UNeoUIVisualElementBase*>        ChildArea;                                         // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UNeoUIVisualElementBase*>        K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
DUMPER7_ASSERTS_NGP_Cont_Item_C_EVT_ProvideChildArea;

// Function NGP_Cont_Item.NGP_Cont_Item_C.Navi_GotoDepartureBtn
// 0x0018 (0x0018 - 0x0000)
struct NGP_Cont_Item_C_Navi_GotoDepartureBtn final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetDepartureBtn_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_NGP_Cont_Item_C_Navi_GotoDepartureBtn;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
