#pragma once



// Package: GA_PingPang_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_Base_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_PingPang_Base.GA_PingPang_Base_C
// 0x0130 (0x0790 - 0x0660)
class UGA_PingPang_Base_C : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_PingPang_Base_C;                 // 0x0658(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bChromaticAberrationIsShowed;                      // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_661[0x3];                                      // 0x0661(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReTurnDelay;                                       // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         Cast_Particle;                                     // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cast_PreDelay;                                     // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_674[0xC];                                      // 0x0674(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Cast_RelativeTransform;                            // 0x0680(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         施法并行音效延时时间;                              // 0x06B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B4[0x4];                                      // 0x06B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              施法并行音效;                                      // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Cast_Audio;                                        // 0x06C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FB_PreDelay;                                       // 0x06C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CC[0x4];                                      // 0x06CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Bullet_RelativeTransform;                          // 0x06D0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Bullet_PreDelay;                                   // 0x0700(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_Interval;                                   // 0x0704(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         Damage_Particle;                                   // 0x0708(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         Bullet_Particle;                                   // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_InitSpeed;                                  // 0x0718(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_Acceleration;                               // 0x071C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_MaxSpeed;                                   // 0x0720(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         消毁延时;                                          // 0x0724(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Bullet_SpawnAudio;                                 // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentBulletCount;                                // 0x0730(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_734[0x4];                                      // 0x0734(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Damage_Audio;                                      // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Damage_RelativeTransform;                          // 0x0740(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         寻怪范围;                                          // 0x0770(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         弹跳次数上限;                                      // 0x0774(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         递减伤害下限;                                      // 0x0778(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         每次受击伤害递减率;                                // 0x077C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BuffId;                                            // 0x0780(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         层数加成;                                          // 0x0784(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BuffId_判断敌人;                                   // 0x0788(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_789[0x3];                                      // 0x0789(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         弹跳次数上限Cache;                                 // 0x078C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_PingPang_Base(int32 EntryPoint);
	void OnBulletDestroyed(class AActor* DestroyedActor);
	void OnBulletBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void 大招定屏后();
	void K2_ActivateAbility();
	void 受击及伤害(class AFollowAbilityProjectile* Projectile, class AFightNPC* FightNPC);
	void GetDamageCount(class AActor* InAttackTarget, int32* AttackCount);
	void GetDamageMultiplier(int32 已攻击次数, float* Multiplier);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_PingPang_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_PingPang_Base_C")
	}
	static class UGA_PingPang_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_PingPang_Base_C>();
	}
};
DUMPER7_ASSERTS_UGA_PingPang_Base_C;

SDK_NAMESPACE_END
