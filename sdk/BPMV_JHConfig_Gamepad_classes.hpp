#pragma once



// Package: BPMV_JHConfig_Gamepad

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHConfig_Gamepad.BPMV_JHConfig_Gamepad_C
// 0x0008 (0x0368 - 0x0360)
class UBPMV_JHConfig_Gamepad_C final : public UJHNeoUIConfig_GamepadView
{
public:
	class UNeoUIImageBase*                        NeoUIImageBase_183;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHConfig_Gamepad_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHConfig_Gamepad_C")
	}
	static class UBPMV_JHConfig_Gamepad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHConfig_Gamepad_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHConfig_Gamepad_C;

SDK_NAMESPACE_END
