#pragma once



// Package: BPMV_JHBackpack_NoMoney

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHBackpack_NoMoney.BPMV_JHBackpack_NoMoney_C
// 0x0010 (0x0390 - 0x0380)
class UBPMV_JHBackpack_NoMoney_C final : public UJHBackpackViewBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_134;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_JHBackpack_NoMoney(int32 EntryPoint);
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void EVT_RenderView();
	void EVT_SetupHierarchy();
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHBackpack_NoMoney_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHBackpack_NoMoney_C")
	}
	static class UBPMV_JHBackpack_NoMoney_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHBackpack_NoMoney_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHBackpack_NoMoney_C;

SDK_NAMESPACE_END
