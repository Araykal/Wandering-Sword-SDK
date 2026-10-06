#pragma once



// Package: GE_ljtjs_1

#include "Basic.hpp"

#include "GE_Event_PostHit_1_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_ljtjs_1.GE_ljtjs_1_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_ljtjs_1_C final : public GE_Event_PostHit_1::UGE_Event_PostHit_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_ljtjs_1_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_ljtjs_1_C")
	}
	static class UGE_ljtjs_1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ljtjs_1_C>();
	}
};
DUMPER7_ASSERTS_UGE_ljtjs_1_C;

SDK_NAMESPACE_END
