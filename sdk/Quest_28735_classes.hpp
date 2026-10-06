#pragma once



// Package: Quest_28735

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28735.Quest_28735_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28735_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28735_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28735(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_09ED97694237266442236180AC606792(bool bWinOrLose);
	void OnDlgClosed_BCF9E601428F7DA21C3062BB6C4FA325(int32 NPCId);
	void OnDlgSelectedOption_BCF9E601428F7DA21C3062BB6C4FA325(int32 NPCId);
	void OnFinished_FF3EEF54473954EED4605C97609276D3();
	void OnStop_FF3EEF54473954EED4605C97609276D3();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28735_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28735_C")
	}
	static class UQuest_28735_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28735_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28735_C;

SDK_NAMESPACE_END
