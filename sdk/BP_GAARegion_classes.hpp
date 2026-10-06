#pragma once



// Package: BP_GAARegion

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BP_GAARegion.BP_GAARegion_C
// 0x0020 (0x02A0 - 0x0280)
class UBP_GAARegion_C final : public UGamepadActiveAreaDisplay
{
public:
	class UNeoUIImageBase*                        LeftBottom;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        LeftTop;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        RightBottom;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        RightTop;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GAARegion_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GAARegion_C")
	}
	static class UBP_GAARegion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GAARegion_C>();
	}
};
DUMPER7_ASSERTS_UBP_GAARegion_C;

SDK_NAMESPACE_END
