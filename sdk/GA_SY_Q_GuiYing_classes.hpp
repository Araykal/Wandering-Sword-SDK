#pragma once



// Package: GA_SY_Q_GuiYing

#include "Basic.hpp"

#include "GA_QingGong_SS_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_SY_Q_GuiYing.GA_SY_Q_GuiYing_C
// 0x0000 (0x0610 - 0x0610)
class UGA_SY_Q_GuiYing_C final : public UGA_QingGong_SS_Base_C
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_SY_Q_GuiYing_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_SY_Q_GuiYing_C")
	}
	static class UGA_SY_Q_GuiYing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SY_Q_GuiYing_C>();
	}
};
DUMPER7_ASSERTS_UGA_SY_Q_GuiYing_C;

SDK_NAMESPACE_END
