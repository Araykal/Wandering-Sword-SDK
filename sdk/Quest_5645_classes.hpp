#pragma once



// Package: Quest_5645

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5645.Quest_5645_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5645_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5645_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5645(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_1CD9F58C4D79506C7E9EA4A5A13C8408();
	void OnFinished_58D1CE724660DD5F4B90F9958647F84D();
	void OnStop_58D1CE724660DD5F4B90F9958647F84D();
	void OnDlgClosed_BB6ECC274AD9151E95C3F4B382C91A5E(int32 NPCId);
	void OnDlgSelectedOption_BB6ECC274AD9151E95C3F4B382C91A5E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5645_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5645_C")
	}
	static class UQuest_5645_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5645_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5645_C;

SDK_NAMESPACE_END
