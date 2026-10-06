#pragma once



// Package: Quest_28936

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28936.Quest_28936_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_28936_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28936_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_28936(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_156DB5E64359C8B5EFA1F38DEF02B003(bool bWinOrLose);
	void OnFinished_224513434138C288B269599755EA1597();
	void OnStop_224513434138C288B269599755EA1597();
	void OnDlgClosed_9D1C4B4145B6D7001752B3B5C7DF2168(int32 NPCId);
	void OnDlgSelectedOption_9D1C4B4145B6D7001752B3B5C7DF2168(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28936_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28936_C")
	}
	static class UQuest_28936_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28936_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28936_C;

SDK_NAMESPACE_END
