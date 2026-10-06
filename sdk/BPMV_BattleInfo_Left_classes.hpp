#pragma once



// Package: BPMV_BattleInfo_Left

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_BattleInfo_Left.BPMV_BattleInfo_Left_C
// 0x0038 (0x0440 - 0x0408)
class UBPMV_BattleInfo_Left_C final : public UJHNeoUIBattleModuleInfoView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_183;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  CT_BottomInfo;                                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       IMG_InfoHide;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       IMG_InfoShow;                                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Sprite;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_41;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_BattleInfo_Left(int32 EntryPoint);
	void BndEvt__BPMV_BattleInfo_Left_IMG_EDBHint_K2Node_ComponentBoundEvent_4_OnHintMouseLeftDown__DelegateSignature();
	void BndEvt__BPMV_BattleInfo_Left_Button_183_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPMV_BattleInfo_Left_IMG_InfoShow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPMV_BattleInfo_Left_IMG_D_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EVT_SetupHierarchy();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_BattleInfo_Left_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_BattleInfo_Left_C")
	}
	static class UBPMV_BattleInfo_Left_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_BattleInfo_Left_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_BattleInfo_Left_C;

SDK_NAMESPACE_END
