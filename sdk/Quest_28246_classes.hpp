#pragma once



// Package: Quest_28246

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28246.Quest_28246_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28246_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28246_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28246(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_34BFA05C4391BD62F1DA4D8CE5735D37();
	void OnStop_34BFA05C4391BD62F1DA4D8CE5735D37();
	void OnDlgClosed_CF3842A745727EB8078D39A0477112F6(int32 NPCId);
	void OnDlgSelectedOption_CF3842A745727EB8078D39A0477112F6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28246_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28246_C")
	}
	static class UQuest_28246_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28246_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28246_C;

SDK_NAMESPACE_END
