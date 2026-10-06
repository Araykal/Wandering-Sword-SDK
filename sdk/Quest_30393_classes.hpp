#pragma once



// Package: Quest_30393

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30393.Quest_30393_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_30393_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30393_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_30393(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_6DDD2D494F1BAB8868B98C8C155D6E64(bool bWinOrLose);
	void OnFinished_73EBE4A545A558386241599A8AF81BE4();
	void OnStop_73EBE4A545A558386241599A8AF81BE4();
	void OnDlgClosed_120A66DE4B3BF651CF73F68B6026A452(int32 NPCId);
	void OnDlgSelectedOption_120A66DE4B3BF651CF73F68B6026A452(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30393_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30393_C")
	}
	static class UQuest_30393_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30393_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30393_C;

SDK_NAMESPACE_END
