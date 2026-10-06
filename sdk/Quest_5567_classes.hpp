#pragma once



// Package: Quest_5567

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5567.Quest_5567_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5567_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5567_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5567(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_3F364DED4466C14506CB6982A4556912();
	void OnFinished_E9D858044E4C5F77A88D8089F8188D44();
	void OnStop_E9D858044E4C5F77A88D8089F8188D44();
	void OnDlgClosed_4CCE24EE4BD660EE296475843DF9B4BD(int32 NPCId);
	void OnDlgSelectedOption_4CCE24EE4BD660EE296475843DF9B4BD(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5567_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5567_C")
	}
	static class UQuest_5567_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5567_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5567_C;

SDK_NAMESPACE_END
