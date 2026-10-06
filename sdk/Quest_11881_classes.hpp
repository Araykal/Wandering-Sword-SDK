#pragma once



// Package: Quest_11881

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DS_Skill_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11881.Quest_11881_C
// 0x0050 (0x0290 - 0x0240)
class UQuest_11881_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11881_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTeamInfo*                              NPCObj;                                            // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         npc_id;                                            // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         力道;                                              // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         根骨;                                              // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         身法;                                              // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         内功;                                              // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         经脉点;                                            // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDS_Skill>                      技能添加;                                          // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 装备ID;                                            // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EGameplayModOp                                四维属性替换;                                      // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          经脉自动点;                                        // 0x0289(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          自动回满血;                                        // 0x028A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Quest_11881(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_2D180D47406BF3A84181A2A848400E02();
	void OnStop_2D180D47406BF3A84181A2A848400E02();
	void OnDlgClosed_4B7FCC934784437E4E79D1B868950D9A(int32 NPCId);
	void OnDlgSelectedOption_4B7FCC934784437E4E79D1B868950D9A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11881_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11881_C")
	}
	static class UQuest_11881_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11881_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11881_C;

SDK_NAMESPACE_END
