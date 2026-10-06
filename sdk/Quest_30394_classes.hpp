#pragma once



// Package: Quest_30394

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30394.Quest_30394_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30394_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30394_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30394(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_8DD764734C9AE4ED49F2969CB23C58D7();
	void OnStop_8DD764734C9AE4ED49F2969CB23C58D7();
	void OnDlgClosed_7991B8D94D7EFFE96F39048E501F9F5A(int32 NPCId);
	void OnDlgSelectedOption_7991B8D94D7EFFE96F39048E501F9F5A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30394_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30394_C")
	}
	static class UQuest_30394_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30394_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30394_C;

SDK_NAMESPACE_END
