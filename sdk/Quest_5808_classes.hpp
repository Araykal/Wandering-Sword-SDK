#pragma once



// Package: Quest_5808

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5808.Quest_5808_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5808_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5808_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5808(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_22B194204D5C520027C7E5959AEE71B0();
	void OnFinished_C4CE323B44A3A9B1E6BE80B5B3F20F59();
	void OnStop_C4CE323B44A3A9B1E6BE80B5B3F20F59();
	void OnDlgClosed_868C9B3E47AAF14C28277EA5724083E8(int32 NPCId);
	void OnDlgSelectedOption_868C9B3E47AAF14C28277EA5724083E8(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5808_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5808_C")
	}
	static class UQuest_5808_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5808_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5808_C;

SDK_NAMESPACE_END
