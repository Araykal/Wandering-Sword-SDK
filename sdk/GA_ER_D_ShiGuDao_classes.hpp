#pragma once



// Package: GA_ER_D_ShiGuDao

#include "Basic.hpp"

#include "GA_Point_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_ER_D_ShiGuDao.GA_ER_D_ShiGuDao_C
// 0x0000 (0x07F0 - 0x07F0)
class UGA_ER_D_ShiGuDao_C final : public UGA_Point_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_ER_D_ShiGuDao_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_ER_D_ShiGuDao_C")
	}
	static class UGA_ER_D_ShiGuDao_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ER_D_ShiGuDao_C>();
	}
};
DUMPER7_ASSERTS_UGA_ER_D_ShiGuDao_C;

SDK_NAMESPACE_END
