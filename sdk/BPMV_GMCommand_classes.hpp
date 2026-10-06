#pragma once



// Package: BPMV_GMCommand

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"
#include "GridRuntime_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_GMCommand.BPMV_GMCommand_C
// 0x0058 (0x0410 - 0x03B8)
class UBPMV_GMCommand_C final : public UJHNeoUIGMCommandView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIButtonBase*                       BTN_Exit;                                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   In_Text;                                           // 0x03C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         GM_Text;                                           // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Help;                                              // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F1[0x7];                                      // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         GMHelp_Text;                                       // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Hide;                                              // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BPMV_GMCommand(int32 EntryPoint);
	void BndEvt__BPMV_GMCommand_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void EVT_VisualShow();
	void BndEvt__Text_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void OnSuccess_BDBA5095439BB6872F7DD2A2D4D1A0D8();
	void OnSuccess_54B378F542C0B7DDA9541D8879593A88();
	void OnSuccess_5A855CEE488055762FED2583DD74410E();
	void AddNPCSkill();
	void AddSkill();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_GMCommand_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_GMCommand_C")
	}
	static class UBPMV_GMCommand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_GMCommand_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_GMCommand_C;

SDK_NAMESPACE_END
