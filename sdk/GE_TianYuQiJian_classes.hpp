#pragma once



// Package: GE_TianYuQiJian

#include "Basic.hpp"

#include "GE_Event_PostCrit_0_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_TianYuQiJian.GE_TianYuQiJian_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_TianYuQiJian_C final : public GE_Event_PostCrit_0::UGE_Event_PostCrit_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_TianYuQiJian_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_TianYuQiJian_C")
	}
	static class UGE_TianYuQiJian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_TianYuQiJian_C>();
	}
};
DUMPER7_ASSERTS_UGE_TianYuQiJian_C;

SDK_NAMESPACE_END
