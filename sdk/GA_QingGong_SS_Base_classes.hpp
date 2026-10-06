#pragma once



// Package: GA_QingGong_SS_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "JH_classes.hpp"
#include "CoreUObject_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_QingGong_SS_Base.GA_QingGong_SS_Base_C
// 0x01C8 (0x0610 - 0x0448)
class UGA_QingGong_SS_Base_C : public UJHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Damage_PreDelay;                                   // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_454[0x4];                                      // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Damage_Particle;                                   // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Damage_AttachRotator;                              // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_461[0x3];                                      // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               DamageRotatorCache;                                // 0x0464(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             Damage_RelativeTransform;                          // 0x0470(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class USoundCue*                              Damage_Audio;                                      // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         Cast_Particle;                                     // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CastRotatorCache;                                  // 0x04B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EAttachRotatorType                            Cast_AttachRotator;                                // 0x04BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BD[0x3];                                      // 0x04BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Cast_PreDelay;                                     // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C4[0x4];                                      // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Cast_Audio;                                        // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Cast_RelativeTransform;                            // 0x04D0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         Zone_PreDelay;                                     // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504[0x4];                                      // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Zone_Particle;                                     // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Zone_Audio;                                        // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Zone_AttachRotator;                                // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519[0x7];                                      // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Zone_RelativeTransform;                            // 0x0520(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class UFXSystemAsset*                         Grid_Particle;                                     // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Grid_PreDelay;                                     // 0x0558(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C[0x4];                                      // 0x055C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Grid_Audio;                                        // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Grid_AttachRotator;                                // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_569[0x7];                                      // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Grid_RelativeTransform;                            // 0x0570(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         ReTurnDelay;                                       // 0x05A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         起跳动画延时;                                      // 0x05A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         降落动画延时;                                      // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AC[0x4];                                      // 0x05AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_PlayFlipbook*              Async_Task;                                        // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         人物隐藏延迟;                                      // 0x05B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          是否隐藏人物;                                      // 0x05BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BD[0x3];                                      // 0x05BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              施法并行音效;                                      // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         施法并行音效延时时间;                              // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Flipbook动画播放速率;                              // 0x05CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         位移速率;                                          // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D4[0x4];                                      // 0x05D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     粒子材质;                                          // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                     残影粒子系统;                                      // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGrid*                                  FromGrid;                                          // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGrid*>                          Grids;                                             // 0x05F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                         Enemies;                                           // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_QingGong_SS_Base(int32 EntryPoint);
	void 瞬移();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnTargetLocationReached_471A859040F83FD706E41DB812953A3F();
	void OnCompleted_792BF76C48B1C70FEB3DB5AB53FCBDB1();
	void OnInterrupted_792BF76C48B1C70FEB3DB5AB53FCBDB1();
	void OnCancelled_792BF76C48B1C70FEB3DB5AB53FCBDB1();
	void OnCompleted_3131AB4846470703F49C08AF02ECAEDD();
	void OnInterrupted_3131AB4846470703F49C08AF02ECAEDD();
	void OnCancelled_3131AB4846470703F49C08AF02ECAEDD();
	void 改变轻功状态(bool Enable);
	void 销毁粒子材质();
	void 创建粒子材质(struct FVector2D* FlipbookSize);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_QingGong_SS_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_QingGong_SS_Base_C")
	}
	static class UGA_QingGong_SS_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_QingGong_SS_Base_C>();
	}
};
DUMPER7_ASSERTS_UGA_QingGong_SS_Base_C;

SDK_NAMESPACE_END
