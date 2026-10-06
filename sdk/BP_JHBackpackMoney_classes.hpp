#pragma once



// Package: BP_JHBackpackMoney

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BP_JHBackpackMoney.BP_JHBackpackMoney_C
// 0x0000 (0x0388 - 0x0388)
class UBP_JHBackpackMoney_C final : public UJHBackpackMoneyDisplay
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHBackpackMoney_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHBackpackMoney_C")
	}
	static class UBP_JHBackpackMoney_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JHBackpackMoney_C>();
	}
};
DUMPER7_ASSERTS_UBP_JHBackpackMoney_C;

SDK_NAMESPACE_END
