#pragma once



// Package: BPVE_BasicPropertyProg

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_BasicPropertyProg.BPVE_BasicPropertyProg_C
// 0x0000 (0x0450 - 0x0450)
class UBPVE_BasicPropertyProg_C final : public UBasicPropertyProgVE
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_BasicPropertyProg_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_BasicPropertyProg_C")
	}
	static class UBPVE_BasicPropertyProg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_BasicPropertyProg_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_BasicPropertyProg_C;

SDK_NAMESPACE_END
