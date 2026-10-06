#pragma once



// Package: Quest_5787

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5787.Quest_5787_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5787_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5787_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5787(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_84AE07F441DA754923A68E86D09AA221();
	void OnFinished_4456D85049446C24498C4DBA39B5D439();
	void OnStop_4456D85049446C24498C4DBA39B5D439();
	void OnDlgClosed_627F2AE34DB9320A7BCA2A8C130D8141(int32 NPCId);
	void OnDlgSelectedOption_627F2AE34DB9320A7BCA2A8C130D8141(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5787_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5787_C")
	}
	static class UQuest_5787_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5787_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5787_C;

SDK_NAMESPACE_END
