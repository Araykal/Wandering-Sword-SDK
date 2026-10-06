#pragma once



// Package: BPCMP_YuanWu_Element

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_YuanWu_Element.BPCMP_YuanWu_Element_C
// 0x0000 (0x03F8 - 0x03F8)
class UBPCMP_YuanWu_Element_C final : public UJHGameUI_YuanWu_Ele
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_YuanWu_Element_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_YuanWu_Element_C")
	}
	static class UBPCMP_YuanWu_Element_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_YuanWu_Element_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_YuanWu_Element_C;

SDK_NAMESPACE_END
