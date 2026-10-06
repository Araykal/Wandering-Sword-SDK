#pragma once



// Package: BPVE_HUD_QuestStep

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_HUD_QuestStep.BPVE_HUD_QuestStep_C
// 0x0020 (0x0310 - 0x02F0)
class UBPVE_HUD_QuestStep_C final : public UJHNeoUIQuestStepSimple_Tracking
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FoldStepText;                                      // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Title;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIRichTextBlockBase*                TXT_TitleRich;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_HUD_QuestStep(int32 EntryPoint);
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_HUD_QuestStep_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_HUD_QuestStep_C")
	}
	static class UBPVE_HUD_QuestStep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_HUD_QuestStep_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_HUD_QuestStep_C;

SDK_NAMESPACE_END
