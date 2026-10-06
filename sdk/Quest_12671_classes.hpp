#pragma once



// Package: Quest_12671

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12671.Quest_12671_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12671_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12671_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12671(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_9B21A565440309E02D056C92D7FEDD19();
	void OnFinished_02B585AF47265AF9186C9EB485560AEC();
	void OnStop_02B585AF47265AF9186C9EB485560AEC();
	void OnDlgClosed_BB0FBDB549960889726EEB92ECA3A229(int32 NPCId);
	void OnDlgSelectedOption_BB0FBDB549960889726EEB92ECA3A229(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12671_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12671_C")
	}
	static class UQuest_12671_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12671_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12671_C;

SDK_NAMESPACE_END
