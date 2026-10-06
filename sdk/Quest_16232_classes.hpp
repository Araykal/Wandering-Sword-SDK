#pragma once



// Package: Quest_16232

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16232.Quest_16232_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_16232_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16232_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_16232(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_4E3BBEFD49595EB057F6399851BC9E37();
	void OnStop_4E3BBEFD49595EB057F6399851BC9E37();
	void OnDlgClosed_7E64259E4DCC9A76CE384CB9A17996B7(int32 NPCId);
	void OnDlgSelectedOption_7E64259E4DCC9A76CE384CB9A17996B7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16232_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16232_C")
	}
	static class UQuest_16232_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16232_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16232_C;

SDK_NAMESPACE_END
