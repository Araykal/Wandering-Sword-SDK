#pragma once



// Package: GA_JH_G_MiShanGun

#include "Basic.hpp"

#include "GA_Point_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_JH_G_MiShanGun.GA_JH_G_MiShanGun_C
// 0x0000 (0x07F0 - 0x07F0)
class UGA_JH_G_MiShanGun_C final : public UGA_Point_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_JH_G_MiShanGun_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_JH_G_MiShanGun_C")
	}
	static class UGA_JH_G_MiShanGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_JH_G_MiShanGun_C>();
	}
};
DUMPER7_ASSERTS_UGA_JH_G_MiShanGun_C;

SDK_NAMESPACE_END
