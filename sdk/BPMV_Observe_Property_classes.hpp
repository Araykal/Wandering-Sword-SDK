#pragma once



// Package: BPMV_Observe_Property

#include "Basic.hpp"

#include "BPMV_Team_Property_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_Observe_Property.BPMV_Observe_Property_C
// 0x0000 (0x03F0 - 0x03F0)
class UBPMV_Observe_Property_C final : public UBPMV_Team_Property_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_Observe_Property_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_Observe_Property_C")
	}
	static class UBPMV_Observe_Property_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_Observe_Property_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_Observe_Property_C;

SDK_NAMESPACE_END
