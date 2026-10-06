#pragma once



// Package: Quest_5083

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5083.Quest_5083_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5083_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5083_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5083(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_E0E2192E4E084DAA859AC6BD8237341C();
	void OnStop_E0E2192E4E084DAA859AC6BD8237341C();
	void OnDlgClosed_207A814548A570519C9F07AC47F82DD2(int32 NPCId);
	void OnDlgSelectedOption_207A814548A570519C9F07AC47F82DD2(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5083_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5083_C")
	}
	static class UQuest_5083_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5083_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5083_C;

SDK_NAMESPACE_END
