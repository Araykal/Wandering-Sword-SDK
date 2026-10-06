#pragma once



// Package: Quest_5399

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5399.Quest_5399_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5399_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5399_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5399(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_A47C6FED4C26127C1442E587382A50A0();
	void OnFinished_9EF5F30041B3E58F1C335EB28E422E52();
	void OnStop_9EF5F30041B3E58F1C335EB28E422E52();
	void OnDlgClosed_6163043842A44FC43935FFBA0B63B42A(int32 NPCId);
	void OnDlgSelectedOption_6163043842A44FC43935FFBA0B63B42A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5399_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5399_C")
	}
	static class UQuest_5399_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5399_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5399_C;

SDK_NAMESPACE_END
