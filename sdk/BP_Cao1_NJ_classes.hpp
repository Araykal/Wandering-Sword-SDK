#pragma once



// Package: BP_Cao1_NJ

#include "Basic.hpp"

#include "BP_Cliff_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_Cao1_NJ.BP_Cao1_NJ_C
// 0x0000 (0x0528 - 0x0528)
class ABP_Cao1_NJ_C : public ABP_Cliff_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_Cao1_NJ_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_Cao1_NJ_C")
	}
	static class ABP_Cao1_NJ_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Cao1_NJ_C>();
	}
};
DUMPER7_ASSERTS_ABP_Cao1_NJ_C;

SDK_NAMESPACE_END
