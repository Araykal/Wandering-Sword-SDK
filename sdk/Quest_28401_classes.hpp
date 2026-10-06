#pragma once



// Package: Quest_28401

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28401.Quest_28401_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28401_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28401_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28401(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_F1DC32444B322911B2F5C6B29C2FB85C();
	void OnFinished_89A8777748F4D65349D25FA2B001886B();
	void OnStop_89A8777748F4D65349D25FA2B001886B();
	void OnDlgClosed_AD1A27D24A3DC0617DFDA48BE9DCFB6C(int32 NPCId);
	void OnDlgSelectedOption_AD1A27D24A3DC0617DFDA48BE9DCFB6C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28401_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28401_C")
	}
	static class UQuest_28401_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28401_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28401_C;

SDK_NAMESPACE_END
