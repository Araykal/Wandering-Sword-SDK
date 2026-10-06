#pragma once



// Package: BPVE_DLCMark

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_DLCMark.BPVE_DLCMark_C
// 0x0000 (0x03F8 - 0x03F8)
class UBPVE_DLCMark_C final : public UNeoUI2ImgComp
{
public:
	void UpdateActiveStatus(bool IsActive);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_DLCMark_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_DLCMark_C")
	}
	static class UBPVE_DLCMark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_DLCMark_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_DLCMark_C;

SDK_NAMESPACE_END
