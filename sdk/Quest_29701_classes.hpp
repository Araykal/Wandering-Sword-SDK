#pragma once



// Package: Quest_29701

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29701.Quest_29701_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_29701_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29701_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29701(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_919B688B4F84E79D56BE18BFA7B1DE81();
	void OnFinished_64EAE9604D2132D07EDB8C926F9A34C4();
	void OnStop_64EAE9604D2132D07EDB8C926F9A34C4();
	void OnDlgClosed_C35419CA40BEEC65BD91C780A075459F(int32 NPCId);
	void OnDlgSelectedOption_C35419CA40BEEC65BD91C780A075459F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29701_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29701_C")
	}
	static class UQuest_29701_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29701_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29701_C;

SDK_NAMESPACE_END
