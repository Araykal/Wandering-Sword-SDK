#pragma once



// Package: BPVE_MeridianLevel

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_MeridianLevel.BPVE_MeridianLevel_C
// 0x0000 (0x03C8 - 0x03C8)
class UBPVE_MeridianLevel_C final : public UNeoUI2TxtComp
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_MeridianLevel_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_MeridianLevel_C")
	}
	static class UBPVE_MeridianLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_MeridianLevel_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_MeridianLevel_C;

SDK_NAMESPACE_END
