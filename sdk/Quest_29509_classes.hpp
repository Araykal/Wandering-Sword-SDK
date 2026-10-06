#pragma once



// Package: Quest_29509

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29509.Quest_29509_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_29509_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29509_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29509(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_13AC1B0A4CF73878943D40B4C09128A0();
	void OnStop_13AC1B0A4CF73878943D40B4C09128A0();
	void OnDlgClosed_844EAB264F76511665E0BC86076DD788(int32 NPCId);
	void OnDlgSelectedOption_844EAB264F76511665E0BC86076DD788(int32 NPCId);
	void OnSuccess_677BE41D48B5ECE6BCE3A7A0356D5A49(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29509_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29509_C")
	}
	static class UQuest_29509_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29509_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29509_C;

SDK_NAMESPACE_END
