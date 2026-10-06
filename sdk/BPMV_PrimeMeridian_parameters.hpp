#pragma once



// Package: BPMV_PrimeMeridian

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "NeoUI_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_PrimeMeridian.BPMV_PrimeMeridian_C.ExecuteUbergraph_BPMV_PrimeMeridian
// 0x0210 (0x0210 - 0x0000)
struct BPMV_PrimeMeridian_C_ExecuteUbergraph_BPMV_PrimeMeridian final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUISubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIGlobalInputManager*               CallFunc_GetInputManager_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGamepadMode_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_GetValueSafe_Int32_ReturnValue;           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue;         // 0x0038(0x0018)()
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue_1;       // 0x0050(0x0018)()
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue_2;       // 0x0068(0x0018)()
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue_3;       // 0x0080(0x0018)()
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue_4;       // 0x0098(0x0018)()
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue_5;       // 0x00B0(0x0018)()
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue_6;       // 0x00C8(0x0018)()
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue_7;       // 0x00E0(0x0018)()
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue_8;       // 0x00F8(0x0018)()
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue_9;       // 0x0110(0x0018)()
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue_10;      // 0x0128(0x0018)()
	class FText                                   CallFunc_GetLineValueFormated_ReturnValue_11;      // 0x0140(0x0018)()
	TMap<class FName, class UNeoUINamedSlot*>     K2Node_MakeMap_Map;                                // 0x0158(0x0050)(ContainsInstancedReference)
	bool                                          CallFunc_ShouldShowAdditionalPropertyButtons_ReturnValue; // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldShowAdditionalPropertyButtons_ReturnValue_1; // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldShowAdditionalPropertyButtons_ReturnValue_2; // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldShowAdditionalPropertyButtons_ReturnValue_3; // 0x01AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue;            // 0x01B0(0x0018)()
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue_1;          // 0x01C8(0x0018)()
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue_2;          // 0x01E0(0x0018)()
	class FText                                   CallFunc_GetValueSafe_Text_ReturnValue_3;          // 0x01F8(0x0018)()
};
DUMPER7_ASSERTS_BPMV_PrimeMeridian_C_ExecuteUbergraph_BPMV_PrimeMeridian;

// Function BPMV_PrimeMeridian.BPMV_PrimeMeridian_C.FocusWidgetForScenario_Direct
// 0x0020 (0x0020 - 0x0000)
struct BPMV_PrimeMeridian_C_FocusWidgetForScenario_Direct final
{
public:
	ENeoUIFocusWidgetScenario                     scenario;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 Param;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_PrimeMeridian_C_FocusWidgetForScenario_Direct;

// Function BPMV_PrimeMeridian.BPMV_PrimeMeridian_C.GotoSideBar
// 0x0020 (0x0020 - 0x0000)
struct BPMV_PrimeMeridian_C_GotoSideBar final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIUniversalModuleVMBase*            CallFunc_GetNeoUIVM_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_ChangeNaviFocus_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_PrimeMeridian_C_GotoSideBar;

// Function BPMV_PrimeMeridian.BPMV_PrimeMeridian_C.Goto_Chong
// 0x0010 (0x0010 - 0x0000)
struct BPMV_PrimeMeridian_C_Goto_Chong final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_PrimeMeridian_C_Goto_Chong;

// Function BPMV_PrimeMeridian.BPMV_PrimeMeridian_C.Goto_Ren
// 0x0010 (0x0010 - 0x0000)
struct BPMV_PrimeMeridian_C_Goto_Ren final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_PrimeMeridian_C_Goto_Ren;

// Function BPMV_PrimeMeridian.BPMV_PrimeMeridian_C.Goto_Yin
// 0x0010 (0x0010 - 0x0000)
struct BPMV_PrimeMeridian_C_Goto_Yin final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_PrimeMeridian_C_Goto_Yin;

// Function BPMV_PrimeMeridian.BPMV_PrimeMeridian_C.GotoYang
// 0x0010 (0x0010 - 0x0000)
struct BPMV_PrimeMeridian_C_GotoYang final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_PrimeMeridian_C_GotoYang;

// Function BPMV_PrimeMeridian.BPMV_PrimeMeridian_C.Goto_Du
// 0x0010 (0x0010 - 0x0000)
struct BPMV_PrimeMeridian_C_Goto_Du final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_PrimeMeridian_C_Goto_Du;

// Function BPMV_PrimeMeridian.BPMV_PrimeMeridian_C.Goto_Dai
// 0x0010 (0x0010 - 0x0000)
struct BPMV_PrimeMeridian_C_Goto_Dai final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_PrimeMeridian_C_Goto_Dai;

// Function BPMV_PrimeMeridian.BPMV_PrimeMeridian_C.Goto_Detail_Lidao
// 0x0010 (0x0010 - 0x0000)
struct BPMV_PrimeMeridian_C_Goto_Detail_Lidao final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_PrimeMeridian_C_Goto_Detail_Lidao;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
