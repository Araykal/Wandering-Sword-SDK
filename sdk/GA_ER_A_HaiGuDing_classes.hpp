#pragma once



// Package: GA_ER_A_HaiGuDing

#include "Basic.hpp"

#include "GA_FollowBullet_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_ER_A_HaiGuDing.GA_ER_A_HaiGuDing_C
// 0x0000 (0x0780 - 0x0780)
class UGA_ER_A_HaiGuDing_C final : public UGA_FollowBullet_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_ER_A_HaiGuDing_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_ER_A_HaiGuDing_C")
	}
	static class UGA_ER_A_HaiGuDing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ER_A_HaiGuDing_C>();
	}
};
DUMPER7_ASSERTS_UGA_ER_A_HaiGuDing_C;

SDK_NAMESPACE_END
