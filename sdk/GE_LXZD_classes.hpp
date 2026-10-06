#pragma once



// Package: GE_LXZD

#include "Basic.hpp"

#include "GE_Event_PostCrit_0_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_LXZD.GE_LXZD_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_LXZD_C final : public GE_Event_PostCrit_0::UGE_Event_PostCrit_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_LXZD_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_LXZD_C")
	}
	static class UGE_LXZD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_LXZD_C>();
	}
};
DUMPER7_ASSERTS_UGE_LXZD_C;

SDK_NAMESPACE_END
