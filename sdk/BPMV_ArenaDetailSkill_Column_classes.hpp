#pragma once



// Package: BPMV_ArenaDetailSkill_Column

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_ArenaDetailSkill_Column.BPMV_ArenaDetailSkill_Column_C
// 0x0008 (0x03C0 - 0x03B8)
class UBPMV_ArenaDetailSkill_Column_C final : public UMartialArtSpellDisplayColumn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPMV_ArenaDetailSkill_Column(int32 EntryPoint);
	void EVT_RenderView();
	void EVT_SetupHierarchy();
	class UWidget* DoCustomNavigation_0(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_ArenaDetailSkill_Column_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_ArenaDetailSkill_Column_C")
	}
	static class UBPMV_ArenaDetailSkill_Column_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_ArenaDetailSkill_Column_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_ArenaDetailSkill_Column_C;

SDK_NAMESPACE_END
