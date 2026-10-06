#pragma once



// Package: GA_Bullet_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BallisticTypes_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_structs.hpp"
#include "GA_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_Bullet_Base.GA_Bullet_Base_C
// 0x01F0 (0x0850 - 0x0660)
class UGA_Bullet_Base_C : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Bullet_Base_C;                   // 0x0658(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ReTurnDelay;                                       // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FB_PreDelay;                                       // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cast_PreDelay;                                     // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66C[0x4];                                      // 0x066C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Cast_RelativeTransform;                            // 0x0670(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class UFXSystemAsset*                         Cast_Particle;                                     // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         Damage_Particle;                                   // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxHitCount;                                       // 0x06B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBallisticTypes                               BallisticSharp;                                    // 0x06B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B5[0xB];                                      // 0x06B5(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Damage_RelativeTransform;                          // 0x06C0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         Bullet_PreDelay;                                   // 0x06F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F4[0x4];                                      // 0x06F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Bullet_Particle;                                   // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         子弹消毁延时;                                      // 0x0700(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_704[0xC];                                      // 0x0704(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Bullet_RelativeTransform;                          // 0x0710(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         Bullet_Speed;                                      // 0x0740(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentBulletCount;                                // 0x0744(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Cast_Audio;                                        // 0x0748(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Damage_Audio;                                      // 0x0750(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Cast_AttachRotator;                                // 0x0758(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Damage_AttachRotator;                              // 0x0759(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Bullet_AttachRotator;                              // 0x075A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75B[0x5];                                      // 0x075B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             BulletTransformCache;                              // 0x0760(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               DamageRotatorCache;                                // 0x0790(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               CastRotatorCache;                                  // 0x079C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bChromaticAberrationIsShowed;                      // 0x07A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A9[0x7];                                      // 0x07A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Bullet_Distroyed_Particle;                         // 0x07B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B8[0x8];                                      // 0x07B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Bullet_Distroyed_Transform;                        // 0x07C0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         受击延迟;                                          // 0x07F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F4[0x4];                                      // 0x07F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFightNPC*>                      DamageActorCache;                                  // 0x07F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         DamageActorIndex;                                  // 0x0808(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Cur_Bullet_Rotator;                                // 0x080C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         CurDestroyDistance;                                // 0x0818(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         施法并行音效延时时间;                              // 0x081C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              施法并行音效;                                      // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         斜角最大伤害次数;                                  // 0x0828(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurMaxHitCount;                                    // 0x082C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFightNPC*>                      DamageActorCacheTemp;                              // 0x0830(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         DamageActorIndexTemp;                              // 0x0840(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Bullet_Base(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void 受击伤害(class AFightNPC* OtherActor, class AActor* 子弹);
	void 大招定屏后();
	void K2_ActivateAbility();
	void OnBulletDestroyed(class AActor* DestroyedActor);
	void OnActorBeginOverlap_事件_0(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnFinish_0433FD5D4E95A8FF237CBCB6AD9198B8();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_Bullet_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_Bullet_Base_C")
	}
	static class UGA_Bullet_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Bullet_Base_C>();
	}
};
DUMPER7_ASSERTS_UGA_Bullet_Base_C;

SDK_NAMESPACE_END
