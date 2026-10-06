#pragma once



// Package: GE_Base_Attr_Strength_TurnBased

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Base_Attr_Strength_TurnBased.GE_Base_Attr_Strength_TurnBased_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_Base_Attr_Strength_TurnBased_C : public UJHGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_Base_Attr_Strength_TurnBased_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Base_Attr_Strength_TurnBased_C")
	}
	static class UGE_Base_Attr_Strength_TurnBased_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Base_Attr_Strength_TurnBased_C>();
	}
};
DUMPER7_ASSERTS_UGE_Base_Attr_Strength_TurnBased_C;

SDK_NAMESPACE_END
