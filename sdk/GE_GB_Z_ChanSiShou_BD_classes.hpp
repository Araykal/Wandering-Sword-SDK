#pragma once



// Package: GE_GB_Z_ChanSiShou_BD

#include "Basic.hpp"

#include "GE_Base_Attr_AttackPower_TurnBased_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_GB_Z_ChanSiShou_BD.GE_GB_Z_ChanSiShou_BD_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_GB_Z_ChanSiShou_BD_C final : public UGE_Base_Attr_AttackPower_TurnBased_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_GB_Z_ChanSiShou_BD_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_GB_Z_ChanSiShou_BD_C")
	}
	static class UGE_GB_Z_ChanSiShou_BD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_GB_Z_ChanSiShou_BD_C>();
	}
};
DUMPER7_ASSERTS_UGE_GB_Z_ChanSiShou_BD_C;

SDK_NAMESPACE_END
