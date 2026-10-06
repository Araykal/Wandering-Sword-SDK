#pragma once



// Package: Quest_28015

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28015.Quest_28015_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28015_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28015_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28015(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_4DE5E9234D88330BD08F7A8A5F500858();
	void OnFinished_A083F6FE440E1B2E08A482998EE0ED5F();
	void OnStop_A083F6FE440E1B2E08A482998EE0ED5F();
	void OnDlgClosed_21583E1840416E103457A2B7DB8C4908(int32 NPCId);
	void OnDlgSelectedOption_21583E1840416E103457A2B7DB8C4908(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28015_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28015_C")
	}
	static class UQuest_28015_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28015_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28015_C;

SDK_NAMESPACE_END
