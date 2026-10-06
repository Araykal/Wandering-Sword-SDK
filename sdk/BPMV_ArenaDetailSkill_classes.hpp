#pragma once



// Package: BPMV_ArenaDetailSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_ArenaDetailSkill.BPMV_ArenaDetailSkill_C
// 0x0008 (0x03A8 - 0x03A0)
class UBPMV_ArenaDetailSkill_C final : public UJHNeoUIArenaDetailSkillView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPMV_ArenaDetailSkill(int32 EntryPoint);
	void EVT_SetupHierarchy();
	class UWidget* Navi_GotoLeftList(EUINavigation Navigation_0);
	class UWidget* Navi_GotoRightList(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_ArenaDetailSkill_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_ArenaDetailSkill_C")
	}
	static class UBPMV_ArenaDetailSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_ArenaDetailSkill_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_ArenaDetailSkill_C;

SDK_NAMESPACE_END
