#pragma once



// Package: Quest_28221

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28221.Quest_28221_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28221_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28221_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28221(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_FDBCE1AD4F0A853653153BA37A55CE8D();
	void OnFinished_0D0FEFC24D03DC0BF3E97AB1A1988950();
	void OnStop_0D0FEFC24D03DC0BF3E97AB1A1988950();
	void OnDlgClosed_12BC591140169698FFC1C38E81893926(int32 NPCId);
	void OnDlgSelectedOption_12BC591140169698FFC1C38E81893926(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28221_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28221_C")
	}
	static class UQuest_28221_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28221_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28221_C;

SDK_NAMESPACE_END
