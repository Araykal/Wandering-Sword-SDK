#pragma once



// Package: Quest_12642

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12642.Quest_12642_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12642_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12642_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12642(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_AF414AE04554ACF69BB37B8E6C6FBBF7();
	void OnFinished_6151C669400E7A76740131A8F8F4128C();
	void OnStop_6151C669400E7A76740131A8F8F4128C();
	void OnDlgClosed_41F211784DFD4D20F1F1AB9506053B4B(int32 NPCId);
	void OnDlgSelectedOption_41F211784DFD4D20F1F1AB9506053B4B(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12642_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12642_C")
	}
	static class UQuest_12642_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12642_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12642_C;

SDK_NAMESPACE_END
