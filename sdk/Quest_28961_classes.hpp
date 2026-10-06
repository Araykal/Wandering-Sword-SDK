#pragma once



// Package: Quest_28961

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28961.Quest_28961_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28961_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28961_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28961(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_53C8275B4828A29E191D478F9A680EDC();
	void OnFinished_294A49274F46F163D6586E8209BE340D();
	void OnStop_294A49274F46F163D6586E8209BE340D();
	void OnDlgClosed_10C53F884FB51491148D44B0052ECA3C(int32 NPCId);
	void OnDlgSelectedOption_10C53F884FB51491148D44B0052ECA3C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28961_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28961_C")
	}
	static class UQuest_28961_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28961_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28961_C;

SDK_NAMESPACE_END
