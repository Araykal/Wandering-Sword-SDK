#pragma once



// Package: GE_kgdg_5

#include "Basic.hpp"

#include "GE_Base_Attr_TurnNum_Instant_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_kgdg_5.GE_kgdg_5_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_kgdg_5_C final : public UGE_Base_Attr_TurnNum_Instant_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_kgdg_5_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_kgdg_5_C")
	}
	static class UGE_kgdg_5_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_kgdg_5_C>();
	}
};
DUMPER7_ASSERTS_UGE_kgdg_5_C;

SDK_NAMESPACE_END
