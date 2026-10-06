#pragma once



// Package: Quest_12314

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12314.Quest_12314_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12314_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12314_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12314(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_571E16BC4266A49BDA3FABA4ECB020CD(bool bWinOrLose);
	void OnFinished_6204667F4EEF38CA04D9AF82BC60E17F();
	void OnStop_6204667F4EEF38CA04D9AF82BC60E17F();
	void OnDlgClosed_C6ED94D146266B82A78AA1BFA47EC237(int32 NPCId);
	void OnDlgSelectedOption_C6ED94D146266B82A78AA1BFA47EC237(int32 NPCId);
	void OnSuccess_8529BD4641349D6101C8A89B9A0A7A51(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12314_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12314_C")
	}
	static class UQuest_12314_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12314_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12314_C;

SDK_NAMESPACE_END
