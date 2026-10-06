#pragma once



// Package: BPVE_MACL_Status

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_MACL_Status.BPVE_MACL_Status_C
// 0x0000 (0x03E0 - 0x03E0)
class UBPVE_MACL_Status_C final : public UJHNeoUIConsultLineStatusVE
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_MACL_Status_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_MACL_Status_C")
	}
	static class UBPVE_MACL_Status_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_MACL_Status_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_MACL_Status_C;

SDK_NAMESPACE_END
