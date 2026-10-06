#pragma once



// Package: BPMV_ArenaDetailList_Left

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_ArenaDetailList_Left.BPMV_ArenaDetailList_Left_C
// 0x0008 (0x0370 - 0x0368)
class UBPMV_ArenaDetailList_Left_C final : public UJHNeoUIArenaDetail_NPCListViewBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPMV_ArenaDetailList_Left(int32 EntryPoint);
	void EVT_VisualShow();
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void BndEvt__BPMV_ArenaDetailList_Common_ItemList_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	class UWidget* Navi_GotoDetail(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_ArenaDetailList_Left_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_ArenaDetailList_Left_C")
	}
	static class UBPMV_ArenaDetailList_Left_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_ArenaDetailList_Left_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_ArenaDetailList_Left_C;

SDK_NAMESPACE_END
