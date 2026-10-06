#pragma once



// Package: Quest_12052

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12052.Quest_12052_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12052_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12052_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12052(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_197F82204E35D0BB9DDD7B8A6C4F9E80();
	void OnStop_197F82204E35D0BB9DDD7B8A6C4F9E80();
	void OnDlgClosed_0C54587A4D780B09B043E0B7BBBF849F(int32 NPCId);
	void OnDlgSelectedOption_0C54587A4D780B09B043E0B7BBBF849F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12052_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12052_C")
	}
	static class UQuest_12052_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12052_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12052_C;

SDK_NAMESPACE_END
