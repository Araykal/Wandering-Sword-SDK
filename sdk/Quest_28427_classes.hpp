#pragma once



// Package: Quest_28427

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28427.Quest_28427_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28427_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28427_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28427(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void End(const class FString& GuidanceType);
	void OnFinished_0CD512AF424F4F07FDEC27A269354D19();
	void OnStop_0CD512AF424F4F07FDEC27A269354D19();
	void OnDlgClosed_E44578D8487E9D6E78B2BF940A0E8729(int32 NPCId);
	void OnDlgSelectedOption_E44578D8487E9D6E78B2BF940A0E8729(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28427_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28427_C")
	}
	static class UQuest_28427_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28427_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28427_C;

SDK_NAMESPACE_END
