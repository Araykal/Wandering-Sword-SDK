#pragma once



// Package: Quest_5345

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DS_Skill_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5345.Quest_5345_C
// 0x0050 (0x0290 - 0x0240)
class UQuest_5345_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5345_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
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
	void ExecuteUbergraph_Quest_5345(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_FEB97BF146DC7F76E8325181B1E11B87();
	void OnStop_FEB97BF146DC7F76E8325181B1E11B87();
	void OnDlgClosed_EE58188E40458B36F24AFABAD15D685F(int32 NPCId);
	void OnDlgSelectedOption_EE58188E40458B36F24AFABAD15D685F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5345_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5345_C")
	}
	static class UQuest_5345_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5345_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5345_C;

SDK_NAMESPACE_END
