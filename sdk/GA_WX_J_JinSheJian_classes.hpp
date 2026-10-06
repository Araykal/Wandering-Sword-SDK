#pragma once



// Package: GA_WX_J_JinSheJian

#include "Basic.hpp"

#include "GA_PingPang_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_WX_J_JinSheJian.GA_WX_J_JinSheJian_C
// 0x0000 (0x0790 - 0x0790)
class UGA_WX_J_JinSheJian_C final : public UGA_PingPang_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_WX_J_JinSheJian_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_WX_J_JinSheJian_C")
	}
	static class UGA_WX_J_JinSheJian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_WX_J_JinSheJian_C>();
	}
};
DUMPER7_ASSERTS_UGA_WX_J_JinSheJian_C;

SDK_NAMESPACE_END
