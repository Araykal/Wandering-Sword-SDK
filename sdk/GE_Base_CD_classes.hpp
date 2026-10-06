#pragma once



// Package: GE_Base_CD

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Base_CD.GE_Base_CD_C
// 0x0000 (0x07E8 - 0x07E8)
class UGE_Base_CD_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_Base_CD_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Base_CD_C")
	}
	static class UGE_Base_CD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Base_CD_C>();
	}
};
DUMPER7_ASSERTS_UGE_Base_CD_C;

SDK_NAMESPACE_END
