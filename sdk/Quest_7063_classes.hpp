#pragma once



// Package: Quest_7063

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_7063.Quest_7063_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_7063_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_7063_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_7063(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_9B1EEDA544B4828FBEB771A5E6B0A9FA();
	void OnStop_9B1EEDA544B4828FBEB771A5E6B0A9FA();
	void OnDlgClosed_622F1C04418845A1868410966F526BAC(int32 NPCId);
	void OnDlgSelectedOption_622F1C04418845A1868410966F526BAC(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_7063_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_7063_C")
	}
	static class UQuest_7063_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_7063_C>();
	}
};
DUMPER7_ASSERTS_UQuest_7063_C;

SDK_NAMESPACE_END
