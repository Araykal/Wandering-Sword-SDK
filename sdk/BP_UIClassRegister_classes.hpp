#pragma once



// Package: BP_UIClassRegister

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_UIClassRegister.BP_UIClassRegister_C
// 0x0000 (0x00A8 - 0x00A8)
class UBP_UIClassRegister_C final : public UJHNeoUIClassRegisters
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_UIClassRegister_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_UIClassRegister_C")
	}
	static class UBP_UIClassRegister_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIClassRegister_C>();
	}
};
DUMPER7_ASSERTS_UBP_UIClassRegister_C;

SDK_NAMESPACE_END
