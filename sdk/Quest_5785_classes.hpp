#pragma once



// Package: Quest_5785

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5785.Quest_5785_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5785_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5785_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5785(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_EA30797342FEEB0B29F4B39FB6B7F1BC();
	void OnFinished_8BB070BA46A06F1672C5D7B1FAE7D418();
	void OnStop_8BB070BA46A06F1672C5D7B1FAE7D418();
	void OnDlgClosed_9637D08042D731390D8A649466C87251(int32 NPCId);
	void OnDlgSelectedOption_9637D08042D731390D8A649466C87251(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5785_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5785_C")
	}
	static class UQuest_5785_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5785_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5785_C;

SDK_NAMESPACE_END
