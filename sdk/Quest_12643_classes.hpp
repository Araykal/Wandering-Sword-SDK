#pragma once



// Package: Quest_12643

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12643.Quest_12643_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12643_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12643_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12643(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_FA9BB0EB45BA37DDCDEF21B23FCDE6B4();
	void OnFinished_766BF4DC4260C36370B71B954A312691();
	void OnStop_766BF4DC4260C36370B71B954A312691();
	void OnDlgClosed_20033735423250EC509514BF3A935180(int32 NPCId);
	void OnDlgSelectedOption_20033735423250EC509514BF3A935180(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12643_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12643_C")
	}
	static class UQuest_12643_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12643_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12643_C;

SDK_NAMESPACE_END
