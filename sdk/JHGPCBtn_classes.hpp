#pragma once



// Package: JHGPCBtn

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHGPCBtn.JHGPCBtn_C
// 0x0000 (0x0580 - 0x0580)
class UJHGPCBtn_C final : public UJHNeoUIGamepadConfirmButton
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHGPCBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHGPCBtn_C")
	}
	static class UJHGPCBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHGPCBtn_C>();
	}
};
DUMPER7_ASSERTS_UJHGPCBtn_C;

SDK_NAMESPACE_END
