#pragma once



// Package: Quest_12294

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12294.Quest_12294_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12294_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12294_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12294(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_B3815E2B402B8A239966F5A9260D6C2C();
	void OnStop_B3815E2B402B8A239966F5A9260D6C2C();
	void OnDlgClosed_9C43E2FB41D8112600F142B5A4993504(int32 NPCId);
	void OnDlgSelectedOption_9C43E2FB41D8112600F142B5A4993504(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12294_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12294_C")
	}
	static class UQuest_12294_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12294_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12294_C;

SDK_NAMESPACE_END
