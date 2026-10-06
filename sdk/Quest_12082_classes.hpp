#pragma once



// Package: Quest_12082

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12082.Quest_12082_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12082_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12082_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12082(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_215989E847BE8D566931F4AC1BC56F30();
	void OnStop_215989E847BE8D566931F4AC1BC56F30();
	void OnDlgClosed_B25575A24F79C0D0202A80AFB11ECD48(int32 NPCId);
	void OnDlgSelectedOption_B25575A24F79C0D0202A80AFB11ECD48(int32 NPCId);
	void OnSuccess_7FA9D4A0483E4D87286C07BF0544FE0D(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12082_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12082_C")
	}
	static class UQuest_12082_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12082_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12082_C;

SDK_NAMESPACE_END
