#pragma once



// Package: Quest_30732

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30732.Quest_30732_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30732_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30732_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30732(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_D5B00D004CAA33C86153319D0D8C6230();
	void OnFinished_32ED25EB48556EB09E425A88585873C1();
	void OnStop_32ED25EB48556EB09E425A88585873C1();
	void OnDlgClosed_E81A764D48AF301A8AB9D4B1D346E7D7(int32 NPCId);
	void OnDlgSelectedOption_E81A764D48AF301A8AB9D4B1D346E7D7(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30732_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30732_C")
	}
	static class UQuest_30732_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30732_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30732_C;

SDK_NAMESPACE_END
