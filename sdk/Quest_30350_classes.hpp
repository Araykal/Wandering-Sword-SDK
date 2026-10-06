#pragma once



// Package: Quest_30350

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30350.Quest_30350_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30350_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30350_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30350(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_C6D1BEF54A4D7B2EBAC286A7EDE30325();
	void OnFinished_5C3279D947D93EF91361B59B4036EA58();
	void OnStop_5C3279D947D93EF91361B59B4036EA58();
	void OnDlgClosed_99BA7C2C4262F1D5708F3A933CFB9A6F(int32 NPCId);
	void OnDlgSelectedOption_99BA7C2C4262F1D5708F3A933CFB9A6F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30350_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30350_C")
	}
	static class UQuest_30350_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30350_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30350_C;

SDK_NAMESPACE_END
