#pragma once



// Package: Quest_11871

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11871.Quest_11871_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11871_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11871_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11871(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_B4A69D394024B7482CC5F38FDFE76C54(bool bWinOrLose);
	void OnSuccess_DCAFE0A34A7FA75829AC238A9989E406(bool bWinOrLose);
	void OnFinished_816E97AB4334816D930F33A30243C28F();
	void OnStop_816E97AB4334816D930F33A30243C28F();
	void OnDlgClosed_3BF4A08C4C0B921A58B56DA71EE627C1(int32 NPCId);
	void OnDlgSelectedOption_3BF4A08C4C0B921A58B56DA71EE627C1(int32 NPCId);
	void OnSuccess_931882F547084ED9C76E7F9C43398E7C(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11871_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11871_C")
	}
	static class UQuest_11871_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11871_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11871_C;

SDK_NAMESPACE_END
