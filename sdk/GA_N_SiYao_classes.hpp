#pragma once



// Package: GA_N_SiYao

#include "Basic.hpp"

#include "GA_Point_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_N_SiYao.GA_N_SiYao_C
// 0x0000 (0x07F0 - 0x07F0)
class UGA_N_SiYao_C final : public UGA_Point_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_N_SiYao_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_N_SiYao_C")
	}
	static class UGA_N_SiYao_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_N_SiYao_C>();
	}
};
DUMPER7_ASSERTS_UGA_N_SiYao_C;

SDK_NAMESPACE_END
