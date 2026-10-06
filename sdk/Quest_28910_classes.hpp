#pragma once



// Package: Quest_28910

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28910.Quest_28910_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28910_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28910_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28910(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_A89D9D7A4C8A68FCF83EDD97058711B6();
	void OnFinished_816170D34A56C63362F94FA9DC3D4A96();
	void OnStop_816170D34A56C63362F94FA9DC3D4A96();
	void OnDlgClosed_B433DC844F9B734AA8C8A593B7CBF48C(int32 NPCId);
	void OnDlgSelectedOption_B433DC844F9B734AA8C8A593B7CBF48C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28910_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28910_C")
	}
	static class UQuest_28910_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28910_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28910_C;

SDK_NAMESPACE_END
