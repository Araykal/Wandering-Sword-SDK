#pragma once



// Package: GA_ER_A_TianLuoDing

#include "Basic.hpp"

#include "GA_Point_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_ER_A_TianLuoDing.GA_ER_A_TianLuoDing_C
// 0x0000 (0x07F0 - 0x07F0)
class UGA_ER_A_TianLuoDing_C final : public UGA_Point_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_ER_A_TianLuoDing_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_ER_A_TianLuoDing_C")
	}
	static class UGA_ER_A_TianLuoDing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ER_A_TianLuoDing_C>();
	}
};
DUMPER7_ASSERTS_UGA_ER_A_TianLuoDing_C;

SDK_NAMESPACE_END
