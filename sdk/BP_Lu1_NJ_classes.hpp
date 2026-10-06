#pragma once



// Package: BP_Lu1_NJ

#include "Basic.hpp"

#include "BP_Ground_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_Lu1_NJ.BP_Lu1_NJ_C
// 0x0000 (0x02C0 - 0x02C0)
class ABP_Lu1_NJ_C : public ABP_Ground_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_Lu1_NJ_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_Lu1_NJ_C")
	}
	static class ABP_Lu1_NJ_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Lu1_NJ_C>();
	}
};
DUMPER7_ASSERTS_ABP_Lu1_NJ_C;

SDK_NAMESPACE_END
