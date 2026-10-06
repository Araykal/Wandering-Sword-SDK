#pragma once



// Package: Quest_5823

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5823.Quest_5823_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5823_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5823_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5823(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_5A01ACF846C2F69DADE13E9FA3C127F5();
	void OnFinished_2211F5154F9AEBEFECE8DEA8CE7E90EA();
	void OnStop_2211F5154F9AEBEFECE8DEA8CE7E90EA();
	void OnDlgClosed_7CF23966482BFEAA62150B9D883F83E9(int32 NPCId);
	void OnDlgSelectedOption_7CF23966482BFEAA62150B9D883F83E9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5823_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5823_C")
	}
	static class UQuest_5823_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5823_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5823_C;

SDK_NAMESPACE_END
