#pragma once



// Package: Quest_30318

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30318.Quest_30318_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30318_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30318_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30318(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_853E6E7F422831BCF8FF5C98CA730A1C(int32 NPCId);
	void OnDlgSelectedOption_853E6E7F422831BCF8FF5C98CA730A1C(int32 NPCId);
	void OnSuccess_60395A244615CCFE6BFB288452D87E19();
	void OnFinished_CE87A7C94CC6114B9CF6C49B3CB56D41();
	void OnStop_CE87A7C94CC6114B9CF6C49B3CB56D41();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30318_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30318_C")
	}
	static class UQuest_30318_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30318_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30318_C;

SDK_NAMESPACE_END
