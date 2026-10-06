#pragma once



// Package: BP_TextConfig_Global

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_TextConfig_Global.BP_TextConfig_Global_C
// 0x0000 (0x0240 - 0x0240)
class UBP_TextConfig_Global_C final : public UJHNeoUITextConfig_Global
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_TextConfig_Global_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_TextConfig_Global_C")
	}
	static class UBP_TextConfig_Global_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TextConfig_Global_C>();
	}
};
DUMPER7_ASSERTS_UBP_TextConfig_Global_C;

SDK_NAMESPACE_END
