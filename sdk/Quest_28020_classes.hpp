#pragma once



// Package: Quest_28020

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28020.Quest_28020_C
// 0x0018 (0x0258 - 0x0240)
class UQuest_28020_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28020_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewVar_0;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28020(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_045A6B0C48B5B91B0B322CA5864CFE63();
	void OnFinished_6D193F31435B34DA460C31A1599434C7();
	void OnStop_6D193F31435B34DA460C31A1599434C7();
	void OnDlgClosed_3C63D4F04E82D65F255B579559307E5C(int32 NPCId);
	void OnDlgSelectedOption_3C63D4F04E82D65F255B579559307E5C(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28020_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28020_C")
	}
	static class UQuest_28020_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28020_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28020_C;

SDK_NAMESPACE_END
