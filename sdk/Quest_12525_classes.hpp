#pragma once



// Package: Quest_12525

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12525.Quest_12525_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12525_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12525_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12525(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_4875F91D4A8EB0476DCDDC9893C31816();
	void OnFinished_7E207C5845A6C5A7B4883790577F10E1();
	void OnStop_7E207C5845A6C5A7B4883790577F10E1();
	void OnDlgClosed_1B814E5F4D9DB026674581AE0E36758B(int32 NPCId);
	void OnDlgSelectedOption_1B814E5F4D9DB026674581AE0E36758B(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12525_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12525_C")
	}
	static class UQuest_12525_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12525_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12525_C;

SDK_NAMESPACE_END
