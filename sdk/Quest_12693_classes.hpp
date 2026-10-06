#pragma once



// Package: Quest_12693

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12693.Quest_12693_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12693_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12693_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12693(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F5AB674E4EE33726C606D3A5188E5DDF();
	void OnStop_F5AB674E4EE33726C606D3A5188E5DDF();
	void OnDlgClosed_1EFF3464456FABCA12316BA7FC3E6F7F(int32 NPCId);
	void OnDlgSelectedOption_1EFF3464456FABCA12316BA7FC3E6F7F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12693_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12693_C")
	}
	static class UQuest_12693_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12693_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12693_C;

SDK_NAMESPACE_END
