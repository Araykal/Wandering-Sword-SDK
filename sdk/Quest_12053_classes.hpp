#pragma once



// Package: Quest_12053

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12053.Quest_12053_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12053_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12053_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12053(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_6EEB553B426EEF3EFAEC23B59FBD1919();
	void OnStop_6EEB553B426EEF3EFAEC23B59FBD1919();
	void OnDlgClosed_AC39AE0C4FF365AE0E46BA9CD6937678(int32 NPCId);
	void OnDlgSelectedOption_AC39AE0C4FF365AE0E46BA9CD6937678(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12053_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12053_C")
	}
	static class UQuest_12053_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12053_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12053_C;

SDK_NAMESPACE_END
