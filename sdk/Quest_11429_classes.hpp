#pragma once



// Package: Quest_11429

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11429.Quest_11429_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11429_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11429_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11429(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_1924041447D9D359184434A4B1900F41();
	void OnStop_1924041447D9D359184434A4B1900F41();
	void OnDlgClosed_0979F125468EA68C9866F2812BC9D03E(int32 NPCId);
	void OnDlgSelectedOption_0979F125468EA68C9866F2812BC9D03E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11429_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11429_C")
	}
	static class UQuest_11429_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11429_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11429_C;

SDK_NAMESPACE_END
