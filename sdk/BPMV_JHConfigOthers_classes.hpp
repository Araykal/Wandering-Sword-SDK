#pragma once



// Package: BPMV_JHConfigOthers

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHConfigOthers.BPMV_JHConfigOthers_C
// 0x0010 (0x03D8 - 0x03C8)
class UBPMV_JHConfigOthers_C final : public UJHNeoUIConfig_OthersView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVE_JHVideoPanel2_C*                    VE_JHVideoPanel2;                                  // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_JHConfigOthers(int32 EntryPoint);
	void EVT_AutoFocusForTabClick();
	void EVT_SetupHierarchy();
	void Construct();
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHConfigOthers_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHConfigOthers_C")
	}
	static class UBPMV_JHConfigOthers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHConfigOthers_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHConfigOthers_C;

SDK_NAMESPACE_END
