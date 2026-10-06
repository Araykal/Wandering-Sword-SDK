#pragma once



// Package: BPVE_JHItem_Gift

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHItem_Gift.BPVE_JHItem_Gift_C
// 0x0000 (0x02F8 - 0x02F8)
class UBPVE_JHItem_Gift_C final : public UJHItemDisplayElement_Gift
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHItem_Gift_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHItem_Gift_C")
	}
	static class UBPVE_JHItem_Gift_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHItem_Gift_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHItem_Gift_C;

SDK_NAMESPACE_END
