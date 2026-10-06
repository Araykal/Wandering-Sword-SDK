#pragma once



// Package: BPMV_JHGHC_Prop

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHGHC_Prop.BPMV_JHGHC_Prop_C
// 0x0010 (0x03B0 - 0x03A0)
class UBPMV_JHGHC_Prop_C final : public UJHNeoUIGHCView_Prop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   TipSlotName;                                       // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_JHGHC_Prop(int32 EntryPoint);
	void EVT_SetupSubModuleSlots();
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHGHC_Prop_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHGHC_Prop_C")
	}
	static class UBPMV_JHGHC_Prop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHGHC_Prop_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHGHC_Prop_C;

SDK_NAMESPACE_END
