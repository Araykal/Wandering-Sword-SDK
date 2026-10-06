#pragma once



// Package: GA_LS_N_XianTianGong

#include "Basic.hpp"

#include "GA_Point_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_LS_N_XianTianGong.GA_LS_N_XianTianGong_C
// 0x0000 (0x07F0 - 0x07F0)
class UGA_LS_N_XianTianGong_C final : public UGA_Point_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_LS_N_XianTianGong_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_LS_N_XianTianGong_C")
	}
	static class UGA_LS_N_XianTianGong_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_LS_N_XianTianGong_C>();
	}
};
DUMPER7_ASSERTS_UGA_LS_N_XianTianGong_C;

SDK_NAMESPACE_END
