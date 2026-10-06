#pragma once



// Package: Quest_11292

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11292.Quest_11292_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11292_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11292_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11292(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_5F1711F446F35FB8B3157C93DEECEBA6();
	void OnStop_5F1711F446F35FB8B3157C93DEECEBA6();
	void OnDlgClosed_3FC18E9C4B27B640EA383ABF5DD79133(int32 NPCId);
	void OnDlgSelectedOption_3FC18E9C4B27B640EA383ABF5DD79133(int32 NPCId);
	void OnSuccess_15A095C749270199537205BA9E016265(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11292_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11292_C")
	}
	static class UQuest_11292_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11292_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11292_C;

SDK_NAMESPACE_END
