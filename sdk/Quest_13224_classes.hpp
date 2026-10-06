#pragma once



// Package: Quest_13224

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_13224.Quest_13224_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_13224_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_13224_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_13224(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_394FA6EB41F09F1B10A099AE7D941815();
	void OnStop_394FA6EB41F09F1B10A099AE7D941815();
	void OnDlgClosed_127FD4464F4544694DA2AA8F133152DF(int32 NPCId);
	void OnDlgSelectedOption_127FD4464F4544694DA2AA8F133152DF(int32 NPCId);
	void OnSuccess_56398A604E252606F4F6A69E8B38E77D(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_13224_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_13224_C")
	}
	static class UQuest_13224_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_13224_C>();
	}
};
DUMPER7_ASSERTS_UQuest_13224_C;

SDK_NAMESPACE_END
