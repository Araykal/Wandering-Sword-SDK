#pragma once



// Package: Quest_30311

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30311.Quest_30311_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30311_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30311_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30311(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_879BD6684F5F381EE10F7DBB8428E3E3();
	void OnFinished_511F4F5C4C940374121F54BA8AD1EEBA();
	void OnStop_511F4F5C4C940374121F54BA8AD1EEBA();
	void OnDlgClosed_CE6A7FB647D51B9011FCAAA889E59954(int32 NPCId);
	void OnDlgSelectedOption_CE6A7FB647D51B9011FCAAA889E59954(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30311_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30311_C")
	}
	static class UQuest_30311_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30311_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30311_C;

SDK_NAMESPACE_END
