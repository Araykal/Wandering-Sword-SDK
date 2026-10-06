#pragma once



// Package: BPCMP_AlertBTN_GamepadTip

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_AlertBTN_GamepadTip.BPCMP_AlertBTN_GamepadTip_C
// 0x0010 (0x0280 - 0x0270)
class UBPCMP_AlertBTN_GamepadTip_C final : public UNeoUIComponentBase
{
public:
	class UNeoUIImageBase*                        IMG_Cancel;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Confirm;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void GotoSingleMode();
	void GotoDoubleMode();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_AlertBTN_GamepadTip_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_AlertBTN_GamepadTip_C")
	}
	static class UBPCMP_AlertBTN_GamepadTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_AlertBTN_GamepadTip_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_AlertBTN_GamepadTip_C;

SDK_NAMESPACE_END
