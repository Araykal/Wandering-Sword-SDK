#pragma once



// Package: GA_Passive_YinShe

#include "Basic.hpp"

#include "GA_Passive_FollowBullet_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_Passive_YinShe.GA_Passive_YinShe_C
// 0x0000 (0x0550 - 0x0550)
class UGA_Passive_YinShe_C final : public UGA_Passive_FollowBullet_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_Passive_YinShe_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_Passive_YinShe_C")
	}
	static class UGA_Passive_YinShe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Passive_YinShe_C>();
	}
};
DUMPER7_ASSERTS_UGA_Passive_YinShe_C;

SDK_NAMESPACE_END
