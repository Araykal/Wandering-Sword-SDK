#pragma once



// Package: BP_Ground_Base

#include "Basic.hpp"

#include "JHLevelRuntime_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_Ground_Base.BP_Ground_Base_C
// 0x0000 (0x02C0 - 0x02C0)
class ABP_Ground_Base_C : public AJHLevelGround
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_Ground_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_Ground_Base_C")
	}
	static class ABP_Ground_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Ground_Base_C>();
	}
};
DUMPER7_ASSERTS_ABP_Ground_Base_C;

SDK_NAMESPACE_END
