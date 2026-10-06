#pragma once



// Package: Quest_11430

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11430.Quest_11430_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_11430_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11430_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_11430(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_743325E948782B8226A6BABB5EAE46D5();
	void OnStop_743325E948782B8226A6BABB5EAE46D5();
	void OnDlgClosed_0B3EAA464D24FD408D3908B46131BE5C(int32 NPCId);
	void OnDlgSelectedOption_0B3EAA464D24FD408D3908B46131BE5C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11430_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11430_C")
	}
	static class UQuest_11430_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11430_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11430_C;

SDK_NAMESPACE_END
