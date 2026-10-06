#pragma once



// Package: BPVE_HUD_BottomBtns

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_HUD_BottomBtns.BPVE_HUD_BottomBtns_C
// 0x0048 (0x0398 - 0x0350)
class UBPVE_HUD_BottomBtns_C final : public UJHNeoUIHUDBottomBtns
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Btns_Hide;                                         // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       BP_GAADisplay;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  CT_GamepadOpTip;                                   // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_HintBar2;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_LT;                                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_OpTip_Gamepad;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_RT;                                            // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowHotKey;                                        // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BPVE_HUD_BottomBtns(int32 EntryPoint);
	void BndEvt__BPVE_HUD_BottomBtns_Btn_DialogHistory_K2Node_ComponentBoundEvent_9_BtnClick__DelegateSignature();
	void BndEvt__BPVE_HUD_BottomBtns_Btn_GH_K2Node_ComponentBoundEvent_8_BtnClick__DelegateSignature();
	void BndEvt__BPVE_HUD_BottomBtns_Btn_Map_1_K2Node_ComponentBoundEvent_7_BtnClick__DelegateSignature();
	void EVT_SyncWithGlobalInputMode();
	void EVT_SwitchHotkey_Debug();
	void BndEvt__BPVE_HUD_BottomBtns_Btn_Map_K2Node_ComponentBoundEvent_6_BtnClick__DelegateSignature();
	void BndEvt__BPVE_HUD_BottomBtns_Btn_Sys_K2Node_ComponentBoundEvent_5_BtnClick__DelegateSignature();
	void BndEvt__BPVE_HUD_BottomBtns_Btn_Meridian_K2Node_ComponentBoundEvent_4_BtnClick__DelegateSignature();
	void BndEvt__BPVE_HUD_BottomBtns_Btn_Quest_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature();
	void BndEvt__BPVE_HUD_BottomBtns_Btn_MartialArt_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature();
	void BndEvt__BPVE_HUD_BottomBtns_NeoUIButtonBase_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPVE_HUD_BottomBtns_Btn_Prime_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature();
	void EVT_AnimHideBtns();
	void EVT_AnimShowBtns();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_HUD_BottomBtns_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_HUD_BottomBtns_C")
	}
	static class UBPVE_HUD_BottomBtns_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_HUD_BottomBtns_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_HUD_BottomBtns_C;

SDK_NAMESPACE_END
