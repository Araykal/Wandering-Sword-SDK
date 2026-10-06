#pragma once



// Package: Quest_5162

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5162.Quest_5162_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5162_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5162_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5162(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_CEDB9D6C4EFA9FF9221424B439EEBB4D();
	void OnStop_CEDB9D6C4EFA9FF9221424B439EEBB4D();
	void OnDlgClosed_2B00BA644C430EE5170A8EB968F756AC(int32 NPCId);
	void OnDlgSelectedOption_2B00BA644C430EE5170A8EB968F756AC(int32 NPCId);
	void OnSuccess_76C247E64F73041211E15DAADB4A7F50(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5162_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5162_C")
	}
	static class UQuest_5162_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5162_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5162_C;

SDK_NAMESPACE_END
