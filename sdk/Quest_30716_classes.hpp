#pragma once



// Package: Quest_30716

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30716.Quest_30716_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30716_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30716_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30716(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_AF71EBE7429E2133C307FBA244F4366A();
	void OnFinished_0CAC04E84DD92502169FB18745881DC3();
	void OnStop_0CAC04E84DD92502169FB18745881DC3();
	void OnDlgClosed_CA37D5784E73A327B67DC4B26EC8002E(int32 NPCId);
	void OnDlgSelectedOption_CA37D5784E73A327B67DC4B26EC8002E(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30716_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30716_C")
	}
	static class UQuest_30716_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30716_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30716_C;

SDK_NAMESPACE_END
