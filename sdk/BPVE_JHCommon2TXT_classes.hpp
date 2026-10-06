#pragma once



// Package: BPVE_JHCommon2TXT

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHCommon2TXT.BPVE_JHCommon2TXT_C
// 0x0000 (0x03C8 - 0x03C8)
class UBPVE_JHCommon2TXT_C final : public UNeoUI2TxtComp
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHCommon2TXT_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHCommon2TXT_C")
	}
	static class UBPVE_JHCommon2TXT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHCommon2TXT_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHCommon2TXT_C;

SDK_NAMESPACE_END
