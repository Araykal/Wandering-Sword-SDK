#pragma once



// Package: Quest_32037

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_32037.Quest_32037_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_32037_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_32037_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_32037(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_878B363349300EAC03A5E78A42C87B88();
	void OnStop_878B363349300EAC03A5E78A42C87B88();
	void OnDlgClosed_204552BE44E668B4932BC69529A1BA0F(int32 NPCId);
	void OnDlgSelectedOption_204552BE44E668B4932BC69529A1BA0F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_32037_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_32037_C")
	}
	static class UQuest_32037_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_32037_C>();
	}
};
DUMPER7_ASSERTS_UQuest_32037_C;

SDK_NAMESPACE_END
