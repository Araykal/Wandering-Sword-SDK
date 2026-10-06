#pragma once



// Package: GA_SL_N_TuNaFa

#include "Basic.hpp"

#include "GA_Point_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_SL_N_TuNaFa.GA_SL_N_TuNaFa_C
// 0x0000 (0x07F0 - 0x07F0)
class UGA_SL_N_TuNaFa_C final : public UGA_Point_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_SL_N_TuNaFa_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_SL_N_TuNaFa_C")
	}
	static class UGA_SL_N_TuNaFa_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SL_N_TuNaFa_C>();
	}
};
DUMPER7_ASSERTS_UGA_SL_N_TuNaFa_C;

SDK_NAMESPACE_END
