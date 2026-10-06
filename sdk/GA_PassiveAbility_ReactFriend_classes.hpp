#pragma once



// Package: GA_PassiveAbility_ReactFriend

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "JH_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_PassiveAbility_ReactFriend.GA_PassiveAbility_ReactFriend_C
// 0x0080 (0x04D8 - 0x0458)
class UGA_PassiveAbility_ReactFriend_C : public UJHGameplayPassiveAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EEventTargetType                              以哪个目标为范围中心;                              // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeamTargetType                               以谁为中心;                                        // 0x0461(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_462[0x2];                                      // 0x0462(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         范围形状_不支持有方向性的范围_;                    // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         范围大小;                                          // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         友方装备的技能Id;                                  // 0x046C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGameplayAbility>           激活的技能;                                        // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                         PawnActors;                                        // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                 Instigator;                                        // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FightNPC_C*                         As_BP_Fight_NPC;                                   // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                         Enemys;                                            // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UGrid*>                          AttackGrids;                                       // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSubclassOf<class UGameplayEffect>>    发起者给自己添加的buff;                            // 0x04B8(0x0010)(Edit, BlueprintVisible)
	bool                                          需要激活buff;                                      // 0x04C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_4C9[0x3];                                      // 0x04C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         友方装备的技能Id2;                                 // 0x04CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGameplayAbility>           激活的技能2;                                       // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_PassiveAbility_ReactFriend(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_PassiveAbility_ReactFriend_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_PassiveAbility_ReactFriend_C")
	}
	static class UGA_PassiveAbility_ReactFriend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_PassiveAbility_ReactFriend_C>();
	}
};
DUMPER7_ASSERTS_UGA_PassiveAbility_ReactFriend_C;

SDK_NAMESPACE_END
