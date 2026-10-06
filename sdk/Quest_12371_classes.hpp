#pragma once



// Package: Quest_12371

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12371.Quest_12371_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12371_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12371_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12371(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_5C54D500400E0DDD002F9990B923264E();
	void OnStop_5C54D500400E0DDD002F9990B923264E();
	void OnDlgClosed_A1CC019D44A6A1ACB08C5C8C49ED0F17(int32 NPCId);
	void OnDlgSelectedOption_A1CC019D44A6A1ACB08C5C8C49ED0F17(int32 NPCId);
	void OnSuccess_CDF926B14CC23AD482E6C0A92892116A(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12371_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12371_C")
	}
	static class UQuest_12371_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12371_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12371_C;

SDK_NAMESPACE_END
