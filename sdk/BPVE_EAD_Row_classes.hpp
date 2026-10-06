#pragma once



// Package: BPVE_EAD_Row

#include "Basic.hpp"

#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_EAD_Row.BPVE_EAD_Row_C
// 0x0000 (0x03A0 - 0x03A0)
class UBPVE_EAD_Row_C final : public UJHNeoUI_EAD_RewardRow
{
public:
	class UWidget* DoCustomNavigation_0(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_EAD_Row_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_EAD_Row_C")
	}
	static class UBPVE_EAD_Row_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_EAD_Row_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_EAD_Row_C;

SDK_NAMESPACE_END
