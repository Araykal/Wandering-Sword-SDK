#pragma once



// Package: BP_Cao4_NJ

#include "Basic.hpp"

#include "BP_Cao1_NJ_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_Cao4_NJ.BP_Cao4_NJ_C
// 0x0000 (0x0528 - 0x0528)
class ABP_Cao4_NJ_C final : public ABP_Cao1_NJ_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_Cao4_NJ_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_Cao4_NJ_C")
	}
	static class ABP_Cao4_NJ_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Cao4_NJ_C>();
	}
};
DUMPER7_ASSERTS_ABP_Cao4_NJ_C;

SDK_NAMESPACE_END
