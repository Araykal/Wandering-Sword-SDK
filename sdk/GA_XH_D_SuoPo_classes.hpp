#pragma once



// Package: GA_XH_D_SuoPo

#include "Basic.hpp"

#include "GA_Bullet_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_XH_D_SuoPo.GA_XH_D_SuoPo_C
// 0x0000 (0x0850 - 0x0850)
class UGA_XH_D_SuoPo_C final : public UGA_Bullet_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_XH_D_SuoPo_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_XH_D_SuoPo_C")
	}
	static class UGA_XH_D_SuoPo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_XH_D_SuoPo_C>();
	}
};
DUMPER7_ASSERTS_UGA_XH_D_SuoPo_C;

SDK_NAMESPACE_END
