#pragma once



// Package: GA_WX_J_DuLongJian

#include "Basic.hpp"

#include "GA_Line_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_WX_J_DuLongJian.GA_WX_J_DuLongJian_C
// 0x0000 (0x0780 - 0x0780)
class UGA_WX_J_DuLongJian_C final : public UGA_Line_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_WX_J_DuLongJian_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_WX_J_DuLongJian_C")
	}
	static class UGA_WX_J_DuLongJian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_WX_J_DuLongJian_C>();
	}
};
DUMPER7_ASSERTS_UGA_WX_J_DuLongJian_C;

SDK_NAMESPACE_END
