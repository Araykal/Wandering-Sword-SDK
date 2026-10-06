#pragma once



// Package: BPMV_HUDLow

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPMV_HUDLow.BPMV_HUDLow_C.ExecuteUbergraph_BPMV_HUDLow
// 0x0108 (0x0108 - 0x0000)
struct BPMV_HUDLow_C_ExecuteUbergraph_BPMV_HUDLow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_QuestName_2;                          // 0x0008(0x0018)(ConstParm)
	class FText                                   K2Node_Event_QuestName_1;                          // 0x0020(0x0018)(ConstParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_MessageHeader;                        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeUniversalPointerBase*           K2Node_Event_MessageBody;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPVE_HUD_Portrait_C*                   K2Node_DynamicCast_AsBPVE_HUD_Portrait;            // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_3;        // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBPVE_HUD_Portrait_C*                   K2Node_DynamicCast_AsBPVE_HUD_Portrait_1;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class UNeoUINamedSlot*>     K2Node_MakeMap_Map;                                // 0x0070(0x0050)(ContainsInstancedReference)
	TArray<class UNeoUIContainerVisualBase*>      K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class FText                                   K2Node_Event_QuestName;                            // 0x00D0(0x0018)(ConstParm)
	class UNeoUISubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIModuleVMBase*                     CallFunc_ShowModuleSingular_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIEDBPanelVM*                     K2Node_DynamicCast_AsJHNeo_UIEDBPanel_VM;          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPMV_HUDLow_C_ExecuteUbergraph_BPMV_HUDLow;

// Function BPMV_HUDLow.BPMV_HUDLow_C.EVT_ShowQuestFailedBadge
// 0x0018 (0x0018 - 0x0000)
struct BPMV_HUDLow_C_EVT_ShowQuestFailedBadge final
{
public:
	class FText                                   QuestName;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BPMV_HUDLow_C_EVT_ShowQuestFailedBadge;

// Function BPMV_HUDLow.BPMV_HUDLow_C.ReceiveModuleMessage
// 0x0010 (0x0010 - 0x0000)
struct BPMV_HUDLow_C_ReceiveModuleMessage final
{
public:
	class FName                                   MessageHeader;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeUniversalPointerBase*           MessageBody;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPMV_HUDLow_C_ReceiveModuleMessage;

// Function BPMV_HUDLow.BPMV_HUDLow_C.EVT_ShowQuestStatusBadge
// 0x0018 (0x0018 - 0x0000)
struct BPMV_HUDLow_C_EVT_ShowQuestStatusBadge final
{
public:
	class FText                                   QuestName;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BPMV_HUDLow_C_EVT_ShowQuestStatusBadge;

// Function BPMV_HUDLow.BPMV_HUDLow_C.EVT_ShowQuestFinishBadge
// 0x0018 (0x0018 - 0x0000)
struct BPMV_HUDLow_C_EVT_ShowQuestFinishBadge final
{
public:
	class FText                                   QuestName;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
DUMPER7_ASSERTS_BPMV_HUDLow_C_EVT_ShowQuestFinishBadge;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
