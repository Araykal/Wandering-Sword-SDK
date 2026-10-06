#pragma once



// Package: JH_CircularProgressBar

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JH_CircularProgressBar.JH_CircularProgressBar_C
// 0x0000 (0x02B0 - 0x02B0)
class UJH_CircularProgressBar_C final : public UJHNeoUICircularProgressBar
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JH_CircularProgressBar_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JH_CircularProgressBar_C")
	}
	static class UJH_CircularProgressBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJH_CircularProgressBar_C>();
	}
};
DUMPER7_ASSERTS_UJH_CircularProgressBar_C;

SDK_NAMESPACE_END
