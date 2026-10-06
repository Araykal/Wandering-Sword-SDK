#pragma once



// Package: GA_Passive_FollowBullet_Base

#include "Basic.hpp"

#include "GA_Passive_Base_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_Passive_FollowBullet_Base.GA_Passive_FollowBullet_Base_C
// 0x00D0 (0x0550 - 0x0480)
class UGA_Passive_FollowBullet_Base_C : public UGA_Passive_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Passive_FollowBullet_Base_C;     // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Bullet_PreDelay;                                   // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48C[0x4];                                      // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Bullet_RelativeTransform;                          // 0x0490(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class USoundCue*                              Bullet_SpawnAudio;                                 // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_Interval;                                   // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CC[0x4];                                      // 0x04CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Damage_Particle;                                   // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         Bullet_Particle;                                   // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_InitSpeed;                                  // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_Acceleration;                               // 0x04E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_MaxSpeed;                                   // 0x04E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         消毁延时;                                          // 0x04EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentBulletCount;                                // 0x04F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         受击延时;                                          // 0x04F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Damage_Audio;                                      // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Damage_RelativeTransform;                          // 0x0500(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         FB_PreDelay;                                       // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          播放序列动画;                                      // 0x0534(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_535[0x3];                                      // 0x0535(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 BuffId查询;                                        // 0x0538(0x0010)(Edit, BlueprintVisible)

public:
	void OnBulletBeginOverlap(class AActor* OverlappedActor1, class AActor* OtherActor1);
	void K2_ActivateAbility();
	void OnBulletDestroyed(class AActor* DestroyedActor);
	void OnOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void ExecuteUbergraph_GA_Passive_FollowBullet_Base(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_Passive_FollowBullet_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_Passive_FollowBullet_Base_C")
	}
	static class UGA_Passive_FollowBullet_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Passive_FollowBullet_Base_C>();
	}
};
DUMPER7_ASSERTS_UGA_Passive_FollowBullet_Base_C;

SDK_NAMESPACE_END
