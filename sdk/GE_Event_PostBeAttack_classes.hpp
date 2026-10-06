#pragma once



// Package: GE_Event_PostBeAttack

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Event_PostBeAttack.GE_Event_PostBeAttack_C
// 0x0000 (0x07F8 - 0x07F8)
class GE_Event_PostBeAttack::UGE_Event_PostBeAttack_C : public UJHGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL_FULLNAME("BlueprintGeneratedClass GE_Event_PostBeAttack.GE_Event_PostBeAttack_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Event_PostBeAttack_C")
	}
	static class GE_Event_PostBeAttack::UGE_Event_PostBeAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<GE_Event_PostBeAttack::UGE_Event_PostBeAttack_C>();
	}
};
DUMPER7_ASSERTS_GE_Event_PostBeAttack__UGE_Event_PostBeAttack_C;

SDK_NAMESPACE_END
