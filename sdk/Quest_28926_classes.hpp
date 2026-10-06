#pragma once



// Package: Quest_28926

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28926.Quest_28926_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28926_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28926_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28926(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_AAF3B9D74C666EB5FCA6BBA6E77CCFE5();
	void OnFinished_597A15EA461F7373A570BF87E222E237();
	void OnStop_597A15EA461F7373A570BF87E222E237();
	void OnDlgClosed_98BAEB8944EEC948677C80BED07A53DD(int32 NPCId);
	void OnDlgSelectedOption_98BAEB8944EEC948677C80BED07A53DD(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28926_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28926_C")
	}
	static class UQuest_28926_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28926_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28926_C;

SDK_NAMESPACE_END
