#pragma once



// Package: BPVE_QuestList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_QuestList.BPVE_QuestList_C.ExecuteUbergraph_BPVE_QuestList
// 0x0048 (0x0048 - 0x0000)
struct BPVE_QuestList_C_ExecuteUbergraph_BPVE_QuestList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item_1;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUIQuestVM*                        K2Node_DynamicCast_AsJHNeo_UIQuest_VM;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldExecuteFocusListDelay_ReturnValue;  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_QuestList_C_ExecuteUbergraph_BPVE_QuestList;

// Function BPVE_QuestList.BPVE_QuestList_C.BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BPVE_QuestList_C_BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_QuestList_C_BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature;

// Function BPVE_QuestList.BPVE_QuestList_C.BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_QuestList_C_BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_QuestList_C_BndEvt__BPVE_QuestList_LIST_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature;

// Function BPVE_QuestList.BPVE_QuestList_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct BPVE_QuestList_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
DUMPER7_ASSERTS_BPVE_QuestList_C_OnFocusReceived;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
