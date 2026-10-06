#pragma once



// Package: GA_GB_G_ZuiGun

#include "Basic.hpp"

#include "GA_Point_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_GB_G_ZuiGun.GA_GB_G_ZuiGun_C
// 0x0000 (0x07F0 - 0x07F0)
class UGA_GB_G_ZuiGun_C final : public UGA_Point_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_GB_G_ZuiGun_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_GB_G_ZuiGun_C")
	}
	static class UGA_GB_G_ZuiGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_GB_G_ZuiGun_C>();
	}
};
DUMPER7_ASSERTS_UGA_GB_G_ZuiGun_C;

SDK_NAMESPACE_END
