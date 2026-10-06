#pragma once



// Package: BPMV_Fishing

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_Fishing.BPMV_Fishing_C
// 0x0038 (0x0400 - 0x03C8)
class UBPMV_Fishing_C final : public UJHNeoUIFishingView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        IMG_GamepadTip;                                    // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_103;                                // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_PoolName;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_FishingList_C*                    VE_List1;                                          // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_FishingList_C*                    VE_List2;                                          // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_Fishing(int32 EntryPoint);
	void EVT_SyncWithGlobalInputMode();
	void EVT_VisualShow();
	void BndEvt__BPMV_Fishing_Btn_Close_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature();
	void BndEvt__BPMV_Fishing_Btn_ShuaiGan_K2Node_ComponentBoundEvent_5_BtnClick__DelegateSignature();
	void BndEvt__BPMV_Fishing_Btn_ShouGan_K2Node_ComponentBoundEvent_4_BtnClick__DelegateSignature();
	void EVT_RenderView();
	void EVT_SetupHierarchy();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	class UWidget* Goto_Left(EUINavigation Navigation_0);
	class UWidget* Goto_BtnClose(EUINavigation Navigation_0);
	class UWidget* Navi_TopList(EUINavigation Navigation_0);
	class UWidget* Navi_BottomList(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_Fishing_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_Fishing_C")
	}
	static class UBPMV_Fishing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_Fishing_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_Fishing_C;

SDK_NAMESPACE_END
