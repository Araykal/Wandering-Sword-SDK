#pragma once



// Package: GA_N_DuYao

#include "Basic.hpp"

#include "GA_FollowBullet_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_N_DuYao.GA_N_DuYao_C
// 0x0000 (0x0780 - 0x0780)
class UGA_N_DuYao_C final : public UGA_FollowBullet_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_N_DuYao_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_N_DuYao_C")
	}
	static class UGA_N_DuYao_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_N_DuYao_C>();
	}
};
DUMPER7_ASSERTS_UGA_N_DuYao_C;

SDK_NAMESPACE_END
