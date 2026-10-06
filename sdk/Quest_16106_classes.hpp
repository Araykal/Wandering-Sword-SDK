#pragma once



// Package: Quest_16106

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16106.Quest_16106_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_16106_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16106_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Quest;                                             // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_16106(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_9E7B93EA4381700E33554FBC922355E8();
	void OnFinished_3FEF5866497A52B7C3AE41B57C6522DE();
	void OnStop_3FEF5866497A52B7C3AE41B57C6522DE();
	void OnDlgClosed_9A8BB0E047F7AA315AF1F5BB094DAA3C(int32 NPCId);
	void OnDlgSelectedOption_9A8BB0E047F7AA315AF1F5BB094DAA3C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16106_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16106_C")
	}
	static class UQuest_16106_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16106_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16106_C;

SDK_NAMESPACE_END
