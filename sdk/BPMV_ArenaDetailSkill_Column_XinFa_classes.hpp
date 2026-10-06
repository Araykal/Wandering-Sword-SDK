#pragma once



// Package: BPMV_ArenaDetailSkill_Column_XinFa

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_ArenaDetailSkill_Column_XinFa.BPMV_ArenaDetailSkill_Column_XinFa_C
// 0x0018 (0x03D0 - 0x03B8)
class UBPMV_ArenaDetailSkill_Column_XinFa_C final : public UMartialArtSpellDisplayColumn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPMV_ArenaDetailSkill_Additional_C*    Cell4;                                             // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPMV_ArenaDetailSkill_Additional_C*    Cell5;                                             // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_ArenaDetailSkill_Column_XinFa(int32 EntryPoint);
	void EVT_RenderView();
	void EVT_SetupHierarchy();
	class UWidget* DoCustomNavigation_0(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_ArenaDetailSkill_Column_XinFa_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_ArenaDetailSkill_Column_XinFa_C")
	}
	static class UBPMV_ArenaDetailSkill_Column_XinFa_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_ArenaDetailSkill_Column_XinFa_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_ArenaDetailSkill_Column_XinFa_C;

SDK_NAMESPACE_END
