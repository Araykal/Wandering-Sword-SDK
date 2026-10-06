#pragma once



// Package: Quest_28962

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28962.Quest_28962_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28962_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28962_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28962(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_6040C24140AF5DAA7EF802AAC8CEDD9E();
	void OnStop_6040C24140AF5DAA7EF802AAC8CEDD9E();
	void OnDlgClosed_4E1D2D7F43536EEB9811C49B0690A0BC(int32 NPCId);
	void OnDlgSelectedOption_4E1D2D7F43536EEB9811C49B0690A0BC(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28962_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28962_C")
	}
	static class UQuest_28962_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28962_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28962_C;

SDK_NAMESPACE_END
