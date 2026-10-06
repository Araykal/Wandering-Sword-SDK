#pragma once



// Package: GA_JH_A_WuYingFeiJian

#include "Basic.hpp"

#include "GA_FollowBullet_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_JH_A_WuYingFeiJian.GA_JH_A_WuYingFeiJian_C
// 0x0000 (0x0780 - 0x0780)
class UGA_JH_A_WuYingFeiJian_C final : public UGA_FollowBullet_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_JH_A_WuYingFeiJian_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_JH_A_WuYingFeiJian_C")
	}
	static class UGA_JH_A_WuYingFeiJian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_JH_A_WuYingFeiJian_C>();
	}
};
DUMPER7_ASSERTS_UGA_JH_A_WuYingFeiJian_C;

SDK_NAMESPACE_END
