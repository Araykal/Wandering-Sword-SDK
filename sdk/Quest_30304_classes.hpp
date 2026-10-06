#pragma once



// Package: Quest_30304

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30304.Quest_30304_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30304_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30304_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30304(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_278FEA0A4E8A5D58977ED3B058314458();
	void OnFinished_D698715D412D76FA739DE8B098109423();
	void OnStop_D698715D412D76FA739DE8B098109423();
	void OnDlgClosed_097E8D3F44A6A43C99EE59A5932E65EA(int32 NPCId);
	void OnDlgSelectedOption_097E8D3F44A6A43C99EE59A5932E65EA(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30304_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30304_C")
	}
	static class UQuest_30304_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30304_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30304_C;

SDK_NAMESPACE_END
