#pragma once



// Package: Quest_9415

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_9415.Quest_9415_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_9415_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_9415_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_9415(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_7EA3B6364ABE201FF5EC688C17B1A087();
	void OnStop_7EA3B6364ABE201FF5EC688C17B1A087();
	void OnDlgClosed_44C666B94435215EF4786983985728A0(int32 NPCId);
	void OnDlgSelectedOption_44C666B94435215EF4786983985728A0(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_9415_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_9415_C")
	}
	static class UQuest_9415_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_9415_C>();
	}
};
DUMPER7_ASSERTS_UQuest_9415_C;

SDK_NAMESPACE_END
