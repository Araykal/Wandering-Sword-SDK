#pragma once



// Package: Quest_30390

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30390.Quest_30390_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30390_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30390_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30390(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_C12051E045E997836557F5B987518B28();
	void OnFinished_5953515A49B7415867A7E4B8115658D7();
	void OnStop_5953515A49B7415867A7E4B8115658D7();
	void OnDlgClosed_1C6F1C9B48AAE6C25379B5A1D0C4C367(int32 NPCId);
	void OnDlgSelectedOption_1C6F1C9B48AAE6C25379B5A1D0C4C367(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30390_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30390_C")
	}
	static class UQuest_30390_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30390_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30390_C;

SDK_NAMESPACE_END
