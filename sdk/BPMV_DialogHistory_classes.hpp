#pragma once



// Package: BPMV_DialogHistory

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_DialogHistory.BPMV_DialogHistory_C
// 0x0010 (0x03D0 - 0x03C0)
class UBPMV_DialogHistory_C final : public UJHNeoUIDialogHistoryView
{
public:
	class UNeoUIImageBase*                        NeoUIImageBase_49;                                 // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_98;                                 // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_DialogHistory_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_DialogHistory_C")
	}
	static class UBPMV_DialogHistory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_DialogHistory_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_DialogHistory_C;

SDK_NAMESPACE_END
