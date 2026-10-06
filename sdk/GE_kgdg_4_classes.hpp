#pragma once



// Package: GE_kgdg_4

#include "Basic.hpp"

#include "GE_Base_Attr_TurnNum_Instant_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_kgdg_4.GE_kgdg_4_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_kgdg_4_C final : public UGE_Base_Attr_TurnNum_Instant_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_kgdg_4_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_kgdg_4_C")
	}
	static class UGE_kgdg_4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_kgdg_4_C>();
	}
};
DUMPER7_ASSERTS_UGE_kgdg_4_C;

SDK_NAMESPACE_END
