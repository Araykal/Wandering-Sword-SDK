#pragma once



// Package: BPMV_PMsg

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_PMsg.BPMV_PMsg_C
// 0x0000 (0x0470 - 0x0470)
class UBPMV_PMsg_C final : public UJHNeoUIView_PersistentMsg
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_PMsg_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_PMsg_C")
	}
	static class UBPMV_PMsg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_PMsg_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_PMsg_C;

SDK_NAMESPACE_END
