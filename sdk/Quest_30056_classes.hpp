#pragma once



// Package: Quest_30056

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30056.Quest_30056_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_30056_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30056_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewVar_0;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30056(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_D49D15024299FF59407CDCA24A6879A7();
	void OnFinished_1B7368B744EC56CB1D8FF1BF780F02F4();
	void OnStop_1B7368B744EC56CB1D8FF1BF780F02F4();
	void OnDlgClosed_641630FA44278D6588B7758A2CD9ABE6(int32 NPCId);
	void OnDlgSelectedOption_641630FA44278D6588B7758A2CD9ABE6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30056_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30056_C")
	}
	static class UQuest_30056_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30056_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30056_C;

SDK_NAMESPACE_END
