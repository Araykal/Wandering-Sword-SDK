#pragma once



// Package: JHCommonListVIew

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass JHCommonListVIew.JHCommonListVIew_C
// 0x0000 (0x0878 - 0x0878)
class UJHCommonListVIew_C final : public UNeoUIListView_CustomScrollBar
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHCommonListVIew_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHCommonListVIew_C")
	}
	static class UJHCommonListVIew_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHCommonListVIew_C>();
	}
};
DUMPER7_ASSERTS_UJHCommonListVIew_C;

SDK_NAMESPACE_END
