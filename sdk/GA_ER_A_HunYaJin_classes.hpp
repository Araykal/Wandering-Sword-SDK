#pragma once



// Package: GA_ER_A_HunYaJin

#include "Basic.hpp"

#include "GA_WuDiZhan_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_ER_A_HunYaJin.GA_ER_A_HunYaJin_C
// 0x0000 (0x07D0 - 0x07D0)
class UGA_ER_A_HunYaJin_C final : public UGA_WuDiZhan_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_ER_A_HunYaJin_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_ER_A_HunYaJin_C")
	}
	static class UGA_ER_A_HunYaJin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ER_A_HunYaJin_C>();
	}
};
DUMPER7_ASSERTS_UGA_ER_A_HunYaJin_C;

SDK_NAMESPACE_END
