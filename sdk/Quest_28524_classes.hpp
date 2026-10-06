#pragma once



// Package: Quest_28524

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28524.Quest_28524_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28524_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28524_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28524(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_BF10A62D404AB2BBA0C990B99078B744();
	void OnFinished_75EF1CEB422BAAEEB2FC87985DF7C5D2();
	void OnStop_75EF1CEB422BAAEEB2FC87985DF7C5D2();
	void OnDlgClosed_B15D68954209D4E56F8AAF9A80B04F64(int32 NPCId);
	void OnDlgSelectedOption_B15D68954209D4E56F8AAF9A80B04F64(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28524_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28524_C")
	}
	static class UQuest_28524_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28524_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28524_C;

SDK_NAMESPACE_END
