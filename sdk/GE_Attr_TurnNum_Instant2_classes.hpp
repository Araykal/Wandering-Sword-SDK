#pragma once



// Package: GE_Attr_TurnNum_Instant2

#include "Basic.hpp"

#include "GE_Base_Attr_TurnNum_Instant_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GE_Attr_TurnNum_Instant2.GE_Attr_TurnNum_Instant2_C
// 0x0000 (0x07F8 - 0x07F8)
class UGE_Attr_TurnNum_Instant2_C final : public UGE_Base_Attr_TurnNum_Instant_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GE_Attr_TurnNum_Instant2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GE_Attr_TurnNum_Instant2_C")
	}
	static class UGE_Attr_TurnNum_Instant2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Attr_TurnNum_Instant2_C>();
	}
};
DUMPER7_ASSERTS_UGE_Attr_TurnNum_Instant2_C;

SDK_NAMESPACE_END
