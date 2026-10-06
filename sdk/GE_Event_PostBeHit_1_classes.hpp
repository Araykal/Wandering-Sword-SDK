#pragma once



// Package: GE_Event_PostBeHit_1

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Event_PostBeHit.GE_Event_PostBeHit_C
// 0x0000 (0x07F8 - 0x07F8)
class GE_Event_PostBeHit_1::UGE_Event_PostBeHit_C : public UJHGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL_FULLNAME("BlueprintGeneratedClass GE_Event_PostBeHit.GE_Event_PostBeHit_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Event_PostBeHit_C")
	}
	static class GE_Event_PostBeHit_1::UGE_Event_PostBeHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<GE_Event_PostBeHit_1::UGE_Event_PostBeHit_C>();
	}
};
DUMPER7_ASSERTS_GE_Event_PostBeHit_1__UGE_Event_PostBeHit_C;

SDK_NAMESPACE_END
