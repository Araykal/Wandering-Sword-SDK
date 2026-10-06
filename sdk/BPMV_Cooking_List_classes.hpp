#pragma once



// Package: BPMV_Cooking_List

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_Cooking_List.BPMV_Cooking_List_C
// 0x0010 (0x0380 - 0x0370)
class UBPMV_Cooking_List_C final : public UJHNeoUI_Cooking_ListView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHCommon_BlockContainer_C*             JHCommon_BlockContainer;                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_Cooking_List(int32 EntryPoint);
	void BndEvt__BPMV_Cooking_List_LIST_K2Node_ComponentBoundEvent_1_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void EVT_SetupHierarchy();
	void BndEvt__BPMV_Cooking_List_LIST_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	class UWidget* Goto_Recipe(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_Cooking_List_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_Cooking_List_C")
	}
	static class UBPMV_Cooking_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_Cooking_List_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_Cooking_List_C;

SDK_NAMESPACE_END
