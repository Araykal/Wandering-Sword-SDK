#pragma once



// Package: BPMV_JHNeoUITips_Gamepad

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHNeoUITips_Gamepad.BPMV_JHNeoUITips_Gamepad_C
// 0x0008 (0x03F0 - 0x03E8)
class UBPMV_JHNeoUITips_Gamepad_C final : public UJHNeoUITipsModuleView_Gamepad
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPMV_JHNeoUITips_Gamepad(int32 EntryPoint);
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHNeoUITips_Gamepad_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHNeoUITips_Gamepad_C")
	}
	static class UBPMV_JHNeoUITips_Gamepad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHNeoUITips_Gamepad_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHNeoUITips_Gamepad_C;

SDK_NAMESPACE_END
