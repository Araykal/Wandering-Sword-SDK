#pragma once



// Package: Quest_28793

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28793.Quest_28793_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28793_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28793_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28793(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_E254B019438E9E23C0B15AA6776972C5();
	void OnStop_E254B019438E9E23C0B15AA6776972C5();
	void OnDlgClosed_000403DF4D4A811C8B2CE493247E02CA(int32 NPCId);
	void OnDlgSelectedOption_000403DF4D4A811C8B2CE493247E02CA(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28793_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28793_C")
	}
	static class UQuest_28793_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28793_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28793_C;

SDK_NAMESPACE_END
