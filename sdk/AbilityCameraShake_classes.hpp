#pragma once



// Package: AbilityCameraShake

#include "Basic.hpp"

#include "Engine_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass AbilityCameraShake.AbilityCameraShake_C
// 0x0000 (0x0180 - 0x0180)
class UAbilityCameraShake_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("AbilityCameraShake_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AbilityCameraShake_C")
	}
	static class UAbilityCameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbilityCameraShake_C>();
	}
};
DUMPER7_ASSERTS_UAbilityCameraShake_C;

SDK_NAMESPACE_END
