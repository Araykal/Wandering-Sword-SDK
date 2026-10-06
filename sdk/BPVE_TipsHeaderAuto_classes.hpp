#pragma once



// Package: BPVE_TipsHeaderAuto

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_TipsHeaderAuto.BPVE_TipsHeaderAuto_C
// 0x0000 (0x0288 - 0x0288)
class UBPVE_TipsHeaderAuto_C final : public UJHNeoUITipsCommonHeader
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_TipsHeaderAuto_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_TipsHeaderAuto_C")
	}
	static class UBPVE_TipsHeaderAuto_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_TipsHeaderAuto_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_TipsHeaderAuto_C;

SDK_NAMESPACE_END
