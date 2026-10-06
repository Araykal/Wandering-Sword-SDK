#pragma once



// Package: BPVE_BattleSpellBottomItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_BattleSpellBottomItem.BPVE_BattleSpellBottomItem_C
// 0x0050 (0x0358 - 0x0308)
class UBPVE_BattleSpellBottomItem_C final : public UBattleSpellDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_BattleSkillCell;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPCMP_NeoUISimpleBtn_C*                BTN_Main;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadIndicator_1;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_SolidBG;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_115;                          // 0x0330(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              CellClick;                                         // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              CellMouseEnter;                                    // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPVE_BattleSpellBottomItem(int32 EntryPoint);
	void EVT_UpdateIsCurrentStatus(bool is_current);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__BPVE_BattleSpellSingle_BTN_BattleSkillCell_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_1_NeoUICommonButtonMouseEnter__DelegateSignature(class UNeoUICommonButton* SrcWidget);
	void BndEvt__BPVE_BattleSpellSingle_BTN_Main_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature(class UNeoUICommonButton* SrcWidget);
	void Construct();
	class UWidget* GetToolTipWidget_1();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_BattleSpellBottomItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_BattleSpellBottomItem_C")
	}
	static class UBPVE_BattleSpellBottomItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_BattleSpellBottomItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_BattleSpellBottomItem_C;

SDK_NAMESPACE_END
