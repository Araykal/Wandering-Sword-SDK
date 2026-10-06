#pragma once



// Package: Quest_29532

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29532.Quest_29532_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_29532_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29532_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewVar_0;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29532(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_2B2172164EAA4370BD979C8D0E6450A5();
	void OnFinished_C5D2E3BA4AAF99E798147CBA2BAD05E8();
	void OnStop_C5D2E3BA4AAF99E798147CBA2BAD05E8();
	void OnDlgClosed_B9752BB14CD90D28796DFA865181188B(int32 NPCId);
	void OnDlgSelectedOption_B9752BB14CD90D28796DFA865181188B(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29532_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29532_C")
	}
	static class UQuest_29532_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29532_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29532_C;

SDK_NAMESPACE_END
