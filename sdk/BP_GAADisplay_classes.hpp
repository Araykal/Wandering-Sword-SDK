#pragma once



// Package: BP_GAADisplay

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BP_GAADisplay.BP_GAADisplay_C
// 0x0008 (0x0288 - 0x0280)
class UBP_GAADisplay_C final : public UGamepadActiveAreaDisplay
{
public:
	class UNeoUIImageBase*                        NeoUIImageBase_38;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GAADisplay_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GAADisplay_C")
	}
	static class UBP_GAADisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GAADisplay_C>();
	}
};
DUMPER7_ASSERTS_UBP_GAADisplay_C;

SDK_NAMESPACE_END
