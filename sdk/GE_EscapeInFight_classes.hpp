#pragma once



// Package: GE_EscapeInFight

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_EscapeInFight.GE_EscapeInFight_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_EscapeInFight_C final : public UJHGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_EscapeInFight_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_EscapeInFight_C")
	}
	static class UGE_EscapeInFight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_EscapeInFight_C>();
	}
};
DUMPER7_ASSERTS_UGE_EscapeInFight_C;

SDK_NAMESPACE_END
