#pragma once



// Package: BPVE_JHTips_ItemComparison

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHTips_ItemComparison.BPVE_JHTips_ItemComparison_C
// 0x0000 (0x02F8 - 0x02F8)
class UBPVE_JHTips_ItemComparison_C final : public UJHNeoUITipsItemComparison
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHTips_ItemComparison_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHTips_ItemComparison_C")
	}
	static class UBPVE_JHTips_ItemComparison_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHTips_ItemComparison_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHTips_ItemComparison_C;

SDK_NAMESPACE_END
