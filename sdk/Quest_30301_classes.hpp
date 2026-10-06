#pragma once



// Package: Quest_30301

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30301.Quest_30301_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30301_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30301_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30301(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_2DF4D68943CEB596783284BA7D5DBF72();
	void OnFinished_83BED69C4D6FB50010A356A49C06C9D6();
	void OnStop_83BED69C4D6FB50010A356A49C06C9D6();
	void OnDlgClosed_4437314B427AF1F8797E13B4BE0C840A(int32 NPCId);
	void OnDlgSelectedOption_4437314B427AF1F8797E13B4BE0C840A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30301_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30301_C")
	}
	static class UQuest_30301_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30301_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30301_C;

SDK_NAMESPACE_END
