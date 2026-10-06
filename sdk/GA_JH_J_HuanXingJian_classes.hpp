#pragma once



// Package: GA_JH_J_HuanXingJian

#include "Basic.hpp"

#include "GA_FollowBullet_SS_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_JH_J_HuanXingJian.GA_JH_J_HuanXingJian_C
// 0x0000 (0x07B0 - 0x07B0)
class UGA_JH_J_HuanXingJian_C final : public UGA_FollowBullet_SS_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_JH_J_HuanXingJian_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_JH_J_HuanXingJian_C")
	}
	static class UGA_JH_J_HuanXingJian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_JH_J_HuanXingJian_C>();
	}
};
DUMPER7_ASSERTS_UGA_JH_J_HuanXingJian_C;

SDK_NAMESPACE_END
