#pragma once



// Package: Quest_30701

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30701.Quest_30701_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30701_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30701_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30701(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_7A9AB6F14B16EA5B6CB5B9923ADBDF57();
	void OnFinished_F53565D4486C461247B35386ABBC1C0D();
	void OnStop_F53565D4486C461247B35386ABBC1C0D();
	void OnDlgClosed_0C97F99143B62F47665ED7BC28DE809D(int32 NPCId);
	void OnDlgSelectedOption_0C97F99143B62F47665ED7BC28DE809D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30701_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30701_C")
	}
	static class UQuest_30701_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30701_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30701_C;

SDK_NAMESPACE_END
