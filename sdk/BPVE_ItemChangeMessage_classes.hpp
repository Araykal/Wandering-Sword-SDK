#pragma once



// Package: BPVE_ItemChangeMessage

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_ItemChangeMessage.BPVE_ItemChangeMessage_C
// 0x0000 (0x02F8 - 0x02F8)
class UBPVE_ItemChangeMessage_C final : public UJHNeoUIItemChangeMessageVE
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_ItemChangeMessage_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_ItemChangeMessage_C")
	}
	static class UBPVE_ItemChangeMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_ItemChangeMessage_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_ItemChangeMessage_C;

SDK_NAMESPACE_END
