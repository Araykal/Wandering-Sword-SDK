#pragma once



// Package: BP_UIEffectManager

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_UIEffectManager.BP_UIEffectManager_C
// 0x0000 (0x0078 - 0x0078)
class UBP_UIEffectManager_C final : public UJHNeoUIGlobalUIEffectsManager
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_UIEffectManager_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_UIEffectManager_C")
	}
	static class UBP_UIEffectManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIEffectManager_C>();
	}
};
DUMPER7_ASSERTS_UBP_UIEffectManager_C;

SDK_NAMESPACE_END
