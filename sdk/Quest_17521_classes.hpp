#pragma once



// Package: Quest_17521

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_17521.Quest_17521_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_17521_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_17521_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_17521(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_4569583D4C408549AC5F159962AEF04F();
	void OnStop_4569583D4C408549AC5F159962AEF04F();
	void OnDlgClosed_68C6AD244F4FA9BC04EE78BAA926E817(int32 NPCId);
	void OnDlgSelectedOption_68C6AD244F4FA9BC04EE78BAA926E817(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_17521_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_17521_C")
	}
	static class UQuest_17521_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_17521_C>();
	}
};
DUMPER7_ASSERTS_UQuest_17521_C;

SDK_NAMESPACE_END
