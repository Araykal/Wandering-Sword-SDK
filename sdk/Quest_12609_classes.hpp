#pragma once



// Package: Quest_12609

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12609.Quest_12609_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12609_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12609_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12609(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_FFE3952144FC23F4A683729E20607D32();
	void OnStop_FFE3952144FC23F4A683729E20607D32();
	void OnDlgClosed_EA4745C14E87E503546D9DBAC514F76D(int32 NPCId);
	void OnDlgSelectedOption_EA4745C14E87E503546D9DBAC514F76D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12609_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12609_C")
	}
	static class UQuest_12609_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12609_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12609_C;

SDK_NAMESPACE_END
