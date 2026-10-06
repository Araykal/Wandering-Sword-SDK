#pragma once



// Package: Quest_5739

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5739.Quest_5739_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5739_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5739_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5739(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_020432B24883DE6A88D896A22C6D985C();
	void OnStop_020432B24883DE6A88D896A22C6D985C();
	void OnDlgClosed_F5038AF04709535DFBF457AE2B0AC6A3(int32 NPCId);
	void OnDlgSelectedOption_F5038AF04709535DFBF457AE2B0AC6A3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5739_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5739_C")
	}
	static class UQuest_5739_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5739_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5739_C;

SDK_NAMESPACE_END
