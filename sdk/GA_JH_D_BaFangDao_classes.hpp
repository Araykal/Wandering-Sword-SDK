#pragma once



// Package: GA_JH_D_BaFangDao

#include "Basic.hpp"

#include "GA_Line_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_JH_D_BaFangDao.GA_JH_D_BaFangDao_C
// 0x0000 (0x0780 - 0x0780)
class UGA_JH_D_BaFangDao_C final : public UGA_Line_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_JH_D_BaFangDao_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_JH_D_BaFangDao_C")
	}
	static class UGA_JH_D_BaFangDao_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_JH_D_BaFangDao_C>();
	}
};
DUMPER7_ASSERTS_UGA_JH_D_BaFangDao_C;

SDK_NAMESPACE_END
