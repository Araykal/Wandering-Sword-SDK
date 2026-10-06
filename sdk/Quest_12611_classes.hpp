#pragma once



// Package: Quest_12611

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12611.Quest_12611_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12611_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12611_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12611(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_62B0B7554F4C6C478149F28FDE6B1CB8();
	void OnFinished_B5E4728E4B433A299BAB898BB2D20AE6();
	void OnStop_B5E4728E4B433A299BAB898BB2D20AE6();
	void OnDlgClosed_4F33B35B4D228EDF07CCC699599F0CC1(int32 NPCId);
	void OnDlgSelectedOption_4F33B35B4D228EDF07CCC699599F0CC1(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12611_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12611_C")
	}
	static class UQuest_12611_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12611_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12611_C;

SDK_NAMESPACE_END
