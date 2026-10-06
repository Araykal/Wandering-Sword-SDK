#pragma once



// Package: BPMV_InputMappingConfig2

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_InputMappingConfig2.BPMV_InputMappingConfig2_C
// 0x0008 (0x0370 - 0x0368)
class UBPMV_InputMappingConfig2_C final : public UJHInputMappingConfigView2
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPMV_InputMappingConfig2(int32 EntryPoint);
	void EVT_SetupHierarchy();
	void EVT_AutoFocusForTabClick();
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_InputMappingConfig2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_InputMappingConfig2_C")
	}
	static class UBPMV_InputMappingConfig2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_InputMappingConfig2_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_InputMappingConfig2_C;

SDK_NAMESPACE_END
