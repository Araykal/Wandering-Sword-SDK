#pragma once



// Package: BPMV_SimpleItemList

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_SimpleItemList.BPMV_SimpleItemList_C
// 0x0008 (0x0370 - 0x0368)
class UBPMV_SimpleItemList_C final : public UJHNeoUI_SimpleItemListView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPMV_SimpleItemList(int32 EntryPoint);
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_SimpleItemList_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_SimpleItemList_C")
	}
	static class UBPMV_SimpleItemList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_SimpleItemList_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_SimpleItemList_C;

SDK_NAMESPACE_END
