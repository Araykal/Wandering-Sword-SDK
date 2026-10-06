#pragma once



// Package: BPMV_Buyback

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_Buyback.BPMV_Buyback_C
// 0x0030 (0x0398 - 0x0368)
class UBPMV_Buyback_C final : public UJHNeoUIBuybackView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIOverlayBase*                      CT_SortBtn;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_134;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       NeoUIButtonBase_26;                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BackpackFilterLine_C*               VE_Filters;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_JHBackpackMoney_C*                  VE_Money;                                          // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_Buyback(int32 EntryPoint);
	void BndEvt__BPMV_JHBackpack_Basic_NeoUIButtonBase_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EVT_SetupHierarchy();
	void EVT_RenderView();
	class UWidget* Navi_GotoBackpack(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_Buyback_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_Buyback_C")
	}
	static class UBPMV_Buyback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_Buyback_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_Buyback_C;

SDK_NAMESPACE_END
