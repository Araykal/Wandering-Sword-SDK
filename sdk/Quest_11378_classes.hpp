#pragma once



// Package: Quest_11378

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11378.Quest_11378_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11378_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11378_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11378(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_83DB20BE4A207BC1146361996A9E4077();
	void OnStop_83DB20BE4A207BC1146361996A9E4077();
	void OnDlgClosed_40D7D3724747056930995BB3E2F052D7(int32 NPCId);
	void OnDlgSelectedOption_40D7D3724747056930995BB3E2F052D7(int32 NPCId);
	void OnSuccess_AD57497B41A675D0F6F9B4BE2C29332D(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11378_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11378_C")
	}
	static class UQuest_11378_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11378_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11378_C;

SDK_NAMESPACE_END
