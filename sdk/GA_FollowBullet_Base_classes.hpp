#pragma once



// Package: GA_FollowBullet_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_Base_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_FollowBullet_Base.GA_FollowBullet_Base_C
// 0x0120 (0x0780 - 0x0660)
class UGA_FollowBullet_Base_C : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_FollowBullet_Base_C;             // 0x0658(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ReTurnDelay;                                       // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cast_PreDelay;                                     // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         Cast_Particle;                                     // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Cast_RelativeTransform;                            // 0x0670(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         FB_PreDelay;                                       // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A4[0x4];                                      // 0x06A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Damage_Particle;                                   // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_PreDelay;                                   // 0x06B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B4[0x4];                                      // 0x06B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Bullet_Particle;                                   // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_InitSpeed;                                  // 0x06C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentBulletCount;                                // 0x06C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C8[0x8];                                      // 0x06C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Damage_RelativeTransform;                          // 0x06D0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                             Bullet_RelativeTransform;                          // 0x0700(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         Bullet_Interval;                                   // 0x0730(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_Acceleration;                               // 0x0734(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bullet_MaxSpeed;                                   // 0x0738(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73C[0x4];                                      // 0x073C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Damage_Audio;                                      // 0x0740(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Cast_Audio;                                        // 0x0748(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Bullet_SpawnAudio;                                 // 0x0750(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bChromaticAberrationIsShowed;                      // 0x0758(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_759[0x3];                                      // 0x0759(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         受击延时;                                          // 0x075C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         消毁延时;                                          // 0x0760(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasFollow;                                         // 0x0764(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_765[0x3];                                      // 0x0765(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              施法并行音效;                                      // 0x0768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         施法并行音效延时时间;                              // 0x0770(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_FollowBullet_Base(int32 EntryPoint);
	void 大招定屏后();
	void OnBulletDestroyed(class AActor* DestroyedActor);
	void OnBulletBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_FollowBullet_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_FollowBullet_Base_C")
	}
	static class UGA_FollowBullet_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FollowBullet_Base_C>();
	}
};
DUMPER7_ASSERTS_UGA_FollowBullet_Base_C;

SDK_NAMESPACE_END
