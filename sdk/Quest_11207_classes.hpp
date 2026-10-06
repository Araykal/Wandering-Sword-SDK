#pragma once



// Package: Quest_11207

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11207.Quest_11207_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11207_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11207_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11207(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_D23DBF0943F53E6DAFDC6EBB0620D67D();
	void OnStop_D23DBF0943F53E6DAFDC6EBB0620D67D();
	void OnDlgClosed_1CA57D2A4D8E81DE4DDFFBA7B33EBF6D(int32 NPCId);
	void OnDlgSelectedOption_1CA57D2A4D8E81DE4DDFFBA7B33EBF6D(int32 NPCId);
	void OnSuccess_B92F5E0E4D4CD33709FC5F910273A5C0(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11207_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11207_C")
	}
	static class UQuest_11207_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11207_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11207_C;

SDK_NAMESPACE_END
