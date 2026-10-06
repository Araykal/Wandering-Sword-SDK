#pragma once



// Package: JHGPCBtn_Center

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHGPCBtn_Center.JHGPCBtn_Center_C
// 0x0000 (0x0580 - 0x0580)
class UJHGPCBtn_Center_C final : public UJHNeoUIGamepadConfirmButton
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHGPCBtn_Center_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHGPCBtn_Center_C")
	}
	static class UJHGPCBtn_Center_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHGPCBtn_Center_C>();
	}
};
DUMPER7_ASSERTS_UJHGPCBtn_Center_C;

SDK_NAMESPACE_END
