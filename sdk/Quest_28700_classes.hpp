#pragma once



// Package: Quest_28700

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28700.Quest_28700_C
// 0x0050 (0x0290 - 0x0240)
class UQuest_28700_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28700_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Spawn_Transform;                                   // 0x0250(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper)
	class ABP_Radiation_C*                        NewVar_0;                                          // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28700(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E3AF79DB444D33B596CBF6887DFE65BD();
	void OnFinished_D104466D43579620689D868AFA427926();
	void OnStop_D104466D43579620689D868AFA427926();
	void OnDlgClosed_BB77BFD1404577AF5512C6ADBA6CF9E8(int32 NPCId);
	void OnDlgSelectedOption_BB77BFD1404577AF5512C6ADBA6CF9E8(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28700_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28700_C")
	}
	static class UQuest_28700_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28700_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28700_C;

SDK_NAMESPACE_END
