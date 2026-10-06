#pragma once



// Package: BPVE_Tips_UniformLine

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_Tips_UniformLine.BPVE_Tips_UniformLine_C
// 0x0000 (0x02F8 - 0x02F8)
class UBPVE_Tips_UniformLine_C final : public UJHNeoUITipsEffectUniformLine
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_Tips_UniformLine_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_Tips_UniformLine_C")
	}
	static class UBPVE_Tips_UniformLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_Tips_UniformLine_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_Tips_UniformLine_C;

SDK_NAMESPACE_END
