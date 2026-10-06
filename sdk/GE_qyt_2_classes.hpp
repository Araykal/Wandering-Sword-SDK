#pragma once



// Package: GE_qyt_2

#include "Basic.hpp"

#include "GE_Base_Attr_TurnNum_Instant_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_qyt_2.GE_qyt_2_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_qyt_2_C final : public UGE_Base_Attr_TurnNum_Instant_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_qyt_2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_qyt_2_C")
	}
	static class UGE_qyt_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_qyt_2_C>();
	}
};
DUMPER7_ASSERTS_UGE_qyt_2_C;

SDK_NAMESPACE_END
