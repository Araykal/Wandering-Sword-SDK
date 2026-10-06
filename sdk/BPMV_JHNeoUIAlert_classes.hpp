#pragma once



// Package: BPMV_JHNeoUIAlert

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHNeoUIAlert.BPMV_JHNeoUIAlert_C
// 0x0000 (0x0468 - 0x0468)
class UBPMV_JHNeoUIAlert_C final : public UJHNeoUIAlertModuleView
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHNeoUIAlert_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHNeoUIAlert_C")
	}
	static class UBPMV_JHNeoUIAlert_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHNeoUIAlert_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHNeoUIAlert_C;

SDK_NAMESPACE_END
