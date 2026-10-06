#pragma once



// Package: BPCMP_NeoUISimpleBtn

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_NeoUISimpleBtn.BPCMP_NeoUISimpleBtn_C
// 0x0000 (0x02B0 - 0x02B0)
class UBPCMP_NeoUISimpleBtn_C final : public UNeoUICommonButton
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_NeoUISimpleBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_NeoUISimpleBtn_C")
	}
	static class UBPCMP_NeoUISimpleBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_NeoUISimpleBtn_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_NeoUISimpleBtn_C;

SDK_NAMESPACE_END
