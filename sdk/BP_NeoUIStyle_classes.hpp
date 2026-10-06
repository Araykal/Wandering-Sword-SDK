#pragma once



// Package: BP_NeoUIStyle

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_NeoUIStyle.BP_NeoUIStyle_C
// 0x0000 (0x0800 - 0x0800)
class UBP_NeoUIStyle_C final : public UNeoUIInternalStyleConfig
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_NeoUIStyle_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_NeoUIStyle_C")
	}
	static class UBP_NeoUIStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NeoUIStyle_C>();
	}
};
DUMPER7_ASSERTS_UBP_NeoUIStyle_C;

SDK_NAMESPACE_END
