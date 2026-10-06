#pragma once



// Package: GA_MJ_J_LongQiJian

#include "Basic.hpp"

#include "GA_Line_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_MJ_J_LongQiJian.GA_MJ_J_LongQiJian_C
// 0x0000 (0x0780 - 0x0780)
class UGA_MJ_J_LongQiJian_C final : public UGA_Line_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_MJ_J_LongQiJian_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_MJ_J_LongQiJian_C")
	}
	static class UGA_MJ_J_LongQiJian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MJ_J_LongQiJian_C>();
	}
};
DUMPER7_ASSERTS_UGA_MJ_J_LongQiJian_C;

SDK_NAMESPACE_END
