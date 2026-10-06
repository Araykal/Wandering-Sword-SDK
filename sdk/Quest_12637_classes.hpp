#pragma once



// Package: Quest_12637

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12637.Quest_12637_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12637_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12637_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12637(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_7842418945E3FB209AED688AE5792536();
	void OnStop_7842418945E3FB209AED688AE5792536();
	void OnDlgClosed_A38994B440AA9E43E15116A34ABD88AD(int32 NPCId);
	void OnDlgSelectedOption_A38994B440AA9E43E15116A34ABD88AD(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12637_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12637_C")
	}
	static class UQuest_12637_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12637_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12637_C;

SDK_NAMESPACE_END
