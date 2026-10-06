#pragma once



// Package: BPCMP_Alert_Btn

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_Alert_Btn.BPCMP_Alert_Btn_C
// 0x0000 (0x0578 - 0x0578)
class UBPCMP_Alert_Btn_C final : public UNeoUI1Btn1TxtComp
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_Alert_Btn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_Alert_Btn_C")
	}
	static class UBPCMP_Alert_Btn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_Alert_Btn_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_Alert_Btn_C;

SDK_NAMESPACE_END
