#pragma once



// Package: BPMV_EstateArenaDashboard

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_EstateArenaDashboard.BPMV_EstateArenaDashboard_C
// 0x0048 (0x0458 - 0x0410)
class UBPMV_EstateArenaDashboard_C final : public UJHNeoUIView_EstateArenaDashboard
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPCMP_EAD_Confirm_C*                   BPCMP_EAD_Confirm;                                 // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_Exit;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_117;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_200;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_449;                                         // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        ListSlot;                                          // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_80;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   ListSlotName;                                      // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_EstateArenaDashboard(int32 EntryPoint);
	void EVT_FocusConfirmButton();
	void BndEvt__BPMV_EstateArenaDashboard_BPCMP_EAD_Confirm_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature();
	void BndEvt__BPMV_EstateArenaDashboard_BTN_EXIT_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void EVT_SetupSubModuleSlots();
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_EstateArenaDashboard_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_EstateArenaDashboard_C")
	}
	static class UBPMV_EstateArenaDashboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_EstateArenaDashboard_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_EstateArenaDashboard_C;

SDK_NAMESPACE_END
