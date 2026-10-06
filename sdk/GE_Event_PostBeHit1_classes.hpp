#pragma once



// Package: GE_Event_PostBeHit1

#include "Basic.hpp"

#include "GE_Event_PostBeHit_1_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Event_PostBeHit1.GE_Event_PostBeHit1_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_Event_PostBeHit1_C final : public GE_Event_PostBeHit_1::UGE_Event_PostBeHit_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_Event_PostBeHit1_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Event_PostBeHit1_C")
	}
	static class UGE_Event_PostBeHit1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Event_PostBeHit1_C>();
	}
};
DUMPER7_ASSERTS_UGE_Event_PostBeHit1_C;

SDK_NAMESPACE_END
