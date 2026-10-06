#pragma once



// Package: GA_SY_A_XueYingHui

#include "Basic.hpp"

#include "GA_FollowBullet_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_SY_A_XueYingHui.GA_SY_A_XueYingHui_C
// 0x0000 (0x0780 - 0x0780)
class UGA_SY_A_XueYingHui_C final : public UGA_FollowBullet_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_SY_A_XueYingHui_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_SY_A_XueYingHui_C")
	}
	static class UGA_SY_A_XueYingHui_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SY_A_XueYingHui_C>();
	}
};
DUMPER7_ASSERTS_UGA_SY_A_XueYingHui_C;

SDK_NAMESPACE_END
