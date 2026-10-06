#pragma once



// Package: Quest_30722

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30722.Quest_30722_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30722_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30722_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30722(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_63374940458D06D7B76F7DA4223E8A7D();
	void OnStop_63374940458D06D7B76F7DA4223E8A7D();
	void OnDlgClosed_915C688444DD96AC401204B92B8AD97E(int32 NPCId);
	void OnDlgSelectedOption_915C688444DD96AC401204B92B8AD97E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30722_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30722_C")
	}
	static class UQuest_30722_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30722_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30722_C;

SDK_NAMESPACE_END
