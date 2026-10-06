#pragma once



// Package: BPMV_EAD_List

#include "Basic.hpp"

#include "JH_classes.hpp"
#include "NeoUI_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_EAD_List.BPMV_EAD_List_C
// 0x0000 (0x0388 - 0x0388)
class UBPMV_EAD_List_C final : public UJHNeoUI_EAD_ListView
{
public:
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_EAD_List_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_EAD_List_C")
	}
	static class UBPMV_EAD_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_EAD_List_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_EAD_List_C;

SDK_NAMESPACE_END
