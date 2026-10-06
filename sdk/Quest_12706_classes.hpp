#pragma once



// Package: Quest_12706

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12706.Quest_12706_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12706_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12706_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12706(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_611D0CC745EC16345B68A7BC66ED796C();
	void OnStop_611D0CC745EC16345B68A7BC66ED796C();
	void OnDlgClosed_C76B8FD547F64B8ACE47A485A093FDD3(int32 NPCId);
	void OnDlgSelectedOption_C76B8FD547F64B8ACE47A485A093FDD3(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12706_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12706_C")
	}
	static class UQuest_12706_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12706_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12706_C;

SDK_NAMESPACE_END
