#pragma once



// Package: Quest_12318

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12318.Quest_12318_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12318_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12318_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12318(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_24886B674F5896C11F59119F133AC54C();
	void OnFinished_E4B0A3F84ECAF7AC5D70FF8B28BC0056();
	void OnStop_E4B0A3F84ECAF7AC5D70FF8B28BC0056();
	void OnDlgClosed_3ADC842D4045132C07D2B6BDF99CF22A(int32 NPCId);
	void OnDlgSelectedOption_3ADC842D4045132C07D2B6BDF99CF22A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12318_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12318_C")
	}
	static class UQuest_12318_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12318_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12318_C;

SDK_NAMESPACE_END
