#pragma once



// Package: MMC_XiangYaoJiuXian_Cost

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass MMC_XiangYaoJiuXian_Cost.MMC_XiangYaoJiuXian_Cost_C
// 0x0000 (0x0040 - 0x0040)
class UMMC_XiangYaoJiuXian_Cost_C final : public UMMC_Cost
{
public:
	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec) const;

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("MMC_XiangYaoJiuXian_Cost_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MMC_XiangYaoJiuXian_Cost_C")
	}
	static class UMMC_XiangYaoJiuXian_Cost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMMC_XiangYaoJiuXian_Cost_C>();
	}
};
DUMPER7_ASSERTS_UMMC_XiangYaoJiuXian_Cost_C;

SDK_NAMESPACE_END
