#pragma once



// Package: Quest_5725

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5725.Quest_5725_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5725_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5725_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5725(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_09CCDF05461D03163B5C40A45AE512A5();
	void OnStop_09CCDF05461D03163B5C40A45AE512A5();
	void OnDlgClosed_D1881A054FBE8F5C8DD821AFB9D684C9(int32 NPCId);
	void OnDlgSelectedOption_D1881A054FBE8F5C8DD821AFB9D684C9(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5725_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5725_C")
	}
	static class UQuest_5725_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5725_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5725_C;

SDK_NAMESPACE_END
