#pragma once



// Package: BP_NeoUICRC

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_NeoUICRC.BP_NeoUICRC_C
// 0x0000 (0x0030 - 0x0030)
class UBP_NeoUICRC_C final : public UNeoUIConfigableClassRegisterCenter
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_NeoUICRC_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_NeoUICRC_C")
	}
	static class UBP_NeoUICRC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NeoUICRC_C>();
	}
};
DUMPER7_ASSERTS_UBP_NeoUICRC_C;

SDK_NAMESPACE_END
