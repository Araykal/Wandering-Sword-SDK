#pragma once



// Package: BPMV_JHGHC_Skill

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHGHC_Skill.BPMV_JHGHC_Skill_C
// 0x0048 (0x03C8 - 0x0380)
class UBPMV_JHGHC_Skill_C final : public UJHNeoUIGHCView_Skill
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVE_GH_SubtypeBtn_C*                    SubType1;                                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_GH_SubtypeBtn_C*                    SubType1_1;                                        // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_GH_SubtypeBtn_C*                    SubType1_2;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_GH_SubtypeBtn_C*                    SubType1_3;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_GH_SubtypeBtn_C*                    SubType1_4;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_GH_SubtypeBtn_C*                    SubType1_5;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_GH_SubtypeBtn_C*                    SubType1_6;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   TipSlotName;                                       // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_JHGHC_Skill(int32 EntryPoint);
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void EVT_SetupSubModuleSlots();
	void EVT_SetupHierarchy();
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHGHC_Skill_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHGHC_Skill_C")
	}
	static class UBPMV_JHGHC_Skill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHGHC_Skill_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHGHC_Skill_C;

SDK_NAMESPACE_END
