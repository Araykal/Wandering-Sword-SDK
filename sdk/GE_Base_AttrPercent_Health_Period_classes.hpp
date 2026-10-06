#pragma once



// Package: GE_Base_AttrPercent_Health_Period

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Base_AttrPercent_Health_Period.GE_Base_AttrPercent_Health_Period_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_Base_AttrPercent_Health_Period_C : public UJHGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_Base_AttrPercent_Health_Period_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Base_AttrPercent_Health_Period_C")
	}
	static class UGE_Base_AttrPercent_Health_Period_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Base_AttrPercent_Health_Period_C>();
	}
};
DUMPER7_ASSERTS_UGE_Base_AttrPercent_Health_Period_C;

SDK_NAMESPACE_END
