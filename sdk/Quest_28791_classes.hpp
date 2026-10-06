#pragma once



// Package: Quest_28791

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28791.Quest_28791_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28791_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28791_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28791(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_B2764DA444A70CD7371A57A866573ED6();
	void OnSuccess_4EA0B49249D3A2833B612AA2FEB2D01D();
	void OnFinished_9DBBD2264A595898231E07BA5074D3C4();
	void OnStop_9DBBD2264A595898231E07BA5074D3C4();
	void OnDlgClosed_B5CCE4E94A86018089E281B2AE44ADE5(int32 NPCId);
	void OnDlgSelectedOption_B5CCE4E94A86018089E281B2AE44ADE5(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28791_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28791_C")
	}
	static class UQuest_28791_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28791_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28791_C;

SDK_NAMESPACE_END
