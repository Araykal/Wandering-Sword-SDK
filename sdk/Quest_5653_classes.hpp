#pragma once



// Package: Quest_5653

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5653.Quest_5653_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5653_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5653_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5653(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_3CFC37F7445028058D9FA3B8FC4C2F52(bool bWinOrLose);
	void OnFinished_484DB98F4A391BF40A1DE9B3193C36E4();
	void OnStop_484DB98F4A391BF40A1DE9B3193C36E4();
	void OnDlgClosed_198100014F46046E66A85BA32A419680(int32 NPCId);
	void OnDlgSelectedOption_198100014F46046E66A85BA32A419680(int32 NPCId);
	void OnSuccess_7D37514E4F5356E91D2775AD84AADE02(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5653_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5653_C")
	}
	static class UQuest_5653_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5653_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5653_C;

SDK_NAMESPACE_END
