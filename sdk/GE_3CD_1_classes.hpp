#pragma once



// Package: GE_3CD_1

#include "Basic.hpp"

#include "GE_Base_Attr_AttackPower_TurnBased_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_3CD-1.GE_3CD-1_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_3CD_1_C final : public UGE_Base_Attr_AttackPower_TurnBased_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_3CD-1_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_3CD-1_C")
	}
	static class UGE_3CD_1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_3CD_1_C>();
	}
};
DUMPER7_ASSERTS_UGE_3CD_1_C;

SDK_NAMESPACE_END
