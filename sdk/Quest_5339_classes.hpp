#pragma once



// Package: Quest_5339

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5339.Quest_5339_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5339_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5339_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5339(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_AAC809F2477A64D6A06E3B94E388ECD0();
	void OnStop_AAC809F2477A64D6A06E3B94E388ECD0();
	void OnDlgClosed_4297AE6C4C8B6021439E9396F1CB4C9D(int32 NPCId);
	void OnDlgSelectedOption_4297AE6C4C8B6021439E9396F1CB4C9D(int32 NPCId);
	void OnSuccess_7CF960974F62EC19A256F48E075C50B5(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5339_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5339_C")
	}
	static class UQuest_5339_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5339_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5339_C;

SDK_NAMESPACE_END
