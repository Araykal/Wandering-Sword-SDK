#pragma once



// Package: BPVE_Desc_Line_Combined

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_Desc_Line_Combined.BPVE_Desc_Line_Combined_C
// 0x0000 (0x03C8 - 0x03C8)
class UBPVE_Desc_Line_Combined_C final : public UNeoUI2TxtComp
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_Desc_Line_Combined_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_Desc_Line_Combined_C")
	}
	static class UBPVE_Desc_Line_Combined_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_Desc_Line_Combined_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_Desc_Line_Combined_C;

SDK_NAMESPACE_END
