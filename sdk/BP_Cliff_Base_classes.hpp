#pragma once



// Package: BP_Cliff_Base

#include "Basic.hpp"

#include "JHLevelRuntime_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_Cliff_Base.BP_Cliff_Base_C
// 0x0000 (0x0528 - 0x0528)
class ABP_Cliff_Base_C : public AJHLevelCliff
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_Cliff_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_Cliff_Base_C")
	}
	static class ABP_Cliff_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Cliff_Base_C>();
	}
};
DUMPER7_ASSERTS_ABP_Cliff_Base_C;

SDK_NAMESPACE_END
