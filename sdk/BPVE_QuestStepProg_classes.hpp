#pragma once



// Package: BPVE_QuestStepProg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_QuestStepProg.BPVE_QuestStepProg_C
// 0x0008 (0x02F8 - 0x02F0)
class UBPVE_QuestStepProg_C final : public UJHNeoUIQuestStepProg
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPVE_QuestStepProg(int32 EntryPoint);
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_QuestStepProg_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_QuestStepProg_C")
	}
	static class UBPVE_QuestStepProg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_QuestStepProg_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_QuestStepProg_C;

SDK_NAMESPACE_END
