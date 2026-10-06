#pragma once



// Package: BPVE_MeridianNodeLine

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BPVE_MeridianNodeLine.BPVE_MeridianNodeLine_C
// 0x0000 (0x0228 - 0x0228)
class UBPVE_MeridianNodeLine_C final : public UJHMeridianNodeLine
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_MeridianNodeLine_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_MeridianNodeLine_C")
	}
	static class UBPVE_MeridianNodeLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_MeridianNodeLine_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_MeridianNodeLine_C;

SDK_NAMESPACE_END
