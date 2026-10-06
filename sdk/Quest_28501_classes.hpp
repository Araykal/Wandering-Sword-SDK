#pragma once



// Package: Quest_28501

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28501.Quest_28501_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28501_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28501_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28501(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_EBB15446462113EF1A767B93401476AF();
	void OnFinished_0C8A82C842F26D788386118CB58D20B3();
	void OnStop_0C8A82C842F26D788386118CB58D20B3();
	void OnDlgClosed_25CD7E6A40DBC3228E3F9A951799DD97(int32 NPCId);
	void OnDlgSelectedOption_25CD7E6A40DBC3228E3F9A951799DD97(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28501_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28501_C")
	}
	static class UQuest_28501_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28501_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28501_C;

SDK_NAMESPACE_END
