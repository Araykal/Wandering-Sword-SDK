#pragma once



// Package: GE_Event_PreBeAttack

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Event_PreBeAttack.GE_Event_PreBeAttack_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_Event_PreBeAttack_C : public UJHGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_Event_PreBeAttack_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Event_PreBeAttack_C")
	}
	static class UGE_Event_PreBeAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Event_PreBeAttack_C>();
	}
};
DUMPER7_ASSERTS_UGE_Event_PreBeAttack_C;

SDK_NAMESPACE_END
