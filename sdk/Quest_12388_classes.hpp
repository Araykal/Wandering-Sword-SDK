#pragma once



// Package: Quest_12388

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12388.Quest_12388_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12388_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12388_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12388(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_C101DC014DFA5E6C653DACB9C08254A7();
	void OnStop_C101DC014DFA5E6C653DACB9C08254A7();
	void OnDlgClosed_B643215A4A554DB42A1664986DAE7DD9(int32 NPCId);
	void OnDlgSelectedOption_B643215A4A554DB42A1664986DAE7DD9(int32 NPCId);
	void OnSuccess_477E61DC4B821CBD06C47989ABEB64B2(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12388_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12388_C")
	}
	static class UQuest_12388_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12388_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12388_C;

SDK_NAMESPACE_END
