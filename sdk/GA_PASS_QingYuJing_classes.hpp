#pragma once



// Package: GA_PASS_QingYuJing

#include "Basic.hpp"

#include "GA_Passive_Point_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_PASS_QingYuJing.GA_PASS_QingYuJing_C
// 0x0000 (0x05F0 - 0x05F0)
class UGA_PASS_QingYuJing_C final : public UGA_Passive_Point_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_PASS_QingYuJing_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_PASS_QingYuJing_C")
	}
	static class UGA_PASS_QingYuJing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_PASS_QingYuJing_C>();
	}
};
DUMPER7_ASSERTS_UGA_PASS_QingYuJing_C;

SDK_NAMESPACE_END
