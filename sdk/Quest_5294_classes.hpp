#pragma once



// Package: Quest_5294

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5294.Quest_5294_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5294_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5294_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5294(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_FCA9DD2F4D4621AEA4E10395C5C3BBD9();
	void OnStop_FCA9DD2F4D4621AEA4E10395C5C3BBD9();
	void OnDlgClosed_983CFEED4DF1080DBAE7CE90B245F21C(int32 NPCId);
	void OnDlgSelectedOption_983CFEED4DF1080DBAE7CE90B245F21C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5294_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5294_C")
	}
	static class UQuest_5294_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5294_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5294_C;

SDK_NAMESPACE_END
