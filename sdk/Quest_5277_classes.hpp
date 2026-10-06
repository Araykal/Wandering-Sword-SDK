#pragma once



// Package: Quest_5277

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5277.Quest_5277_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5277_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5277_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5277(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_1D7B808642B245D716297093B2C31207();
	void OnStop_1D7B808642B245D716297093B2C31207();
	void OnDlgClosed_9231D53C4815583967D6AA9F7063F45A(int32 NPCId);
	void OnDlgSelectedOption_9231D53C4815583967D6AA9F7063F45A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5277_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5277_C")
	}
	static class UQuest_5277_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5277_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5277_C;

SDK_NAMESPACE_END
