#pragma once



// Package: Quest_30392

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30392.Quest_30392_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_30392_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30392_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_30392(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_D28AF55F40DF7537D88077AF4E220C62(bool bWinOrLose);
	void OnFinished_77AD447A4C6D2379D6304DB5C5418F21();
	void OnStop_77AD447A4C6D2379D6304DB5C5418F21();
	void OnDlgClosed_7561F82343D7DC647C98778BC39D9A14(int32 NPCId);
	void OnDlgSelectedOption_7561F82343D7DC647C98778BC39D9A14(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30392_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30392_C")
	}
	static class UQuest_30392_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30392_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30392_C;

SDK_NAMESPACE_END
