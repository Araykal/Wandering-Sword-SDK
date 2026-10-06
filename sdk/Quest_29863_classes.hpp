#pragma once



// Package: Quest_29863

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29863.Quest_29863_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_29863_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29863_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_29863(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_7CFEC9FE4BF9DE708964F281C5481AB1(bool bWinOrLose);
	void OnFinished_32A5813B44B5F807D2F5D2884703460E();
	void OnStop_32A5813B44B5F807D2F5D2884703460E();
	void OnDlgClosed_7F615A3240E23C65135F4085CA6C7700(int32 NPCId);
	void OnDlgSelectedOption_7F615A3240E23C65135F4085CA6C7700(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29863_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29863_C")
	}
	static class UQuest_29863_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29863_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29863_C;

SDK_NAMESPACE_END
