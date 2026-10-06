#pragma once



// Package: Quest_29741

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29741.Quest_29741_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_29741_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29741_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29741(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_3F49D4EE45FE40357B0B9B8645176BCE();
	void OnStop_3F49D4EE45FE40357B0B9B8645176BCE();
	void OnDlgClosed_14BC5FD6440898FDE8BC98A75BF9C11A(int32 NPCId);
	void OnDlgSelectedOption_14BC5FD6440898FDE8BC98A75BF9C11A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29741_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29741_C")
	}
	static class UQuest_29741_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29741_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29741_C;

SDK_NAMESPACE_END
