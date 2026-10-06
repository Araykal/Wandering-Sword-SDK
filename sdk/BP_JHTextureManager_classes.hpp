#pragma once



// Package: BP_JHTextureManager

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_JHTextureManager.BP_JHTextureManager_C
// 0x0000 (0x06D8 - 0x06D8)
class UBP_JHTextureManager_C final : public UJHNeoUIGlobalTextureManager
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHTextureManager_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHTextureManager_C")
	}
	static class UBP_JHTextureManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JHTextureManager_C>();
	}
};
DUMPER7_ASSERTS_UBP_JHTextureManager_C;

SDK_NAMESPACE_END
