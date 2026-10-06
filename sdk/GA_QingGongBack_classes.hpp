#pragma once



// Package: GA_QingGongBack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_QingGongBack.GA_QingGongBack_C
// 0x0220 (0x0880 - 0x0660)
class UGA_QingGongBack_C : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_QingGongBack_C;                  // 0x0658(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ReTurnDelay;                                       // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FB_PreDelay;                                       // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         Cast_Particle;                                     // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cast_PreDelay;                                     // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_674[0x4];                                      // 0x0674(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Cast_Audio;                                        // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              施法并行音效;                                      // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         施法并行音效延时时间;                              // 0x0688(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Cast_AttachRotator;                                // 0x068C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68D[0x3];                                      // 0x068D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Cast_RelativeTransform;                            // 0x0690(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FRotator                               CastRotatorCache;                                  // 0x06C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CC[0x4];                                      // 0x06CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Zone_Particle;                                     // 0x06D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zone_PreDelay;                                     // 0x06D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Zone_AttachRotator;                                // 0x06DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DD[0x3];                                      // 0x06DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Zone_RelativeTransform;                            // 0x06E0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class USoundCue*                              Zone_Audio;                                        // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGrid*>                          Grids;                                             // 0x0718(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         起跳动画延时;                                      // 0x0728(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Flipbook动画播放速率;                              // 0x072C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayFlipbook*              Async_Task;                                        // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNiagaraComponent*                      残影粒子系统;                                      // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         Grid_Particle;                                     // 0x0740(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Grid_PreDelay;                                     // 0x0748(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Grid_AttachRotator;                                // 0x074C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74D[0x3];                                      // 0x074D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Grid_RelativeTransform;                            // 0x0750(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class USoundCue*                              Grid_Audio;                                        // 0x0780(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGrid*                                  FromGrid;                                          // 0x0788(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         位移速率;                                          // 0x0790(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage_PreDelay;                                   // 0x0794(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Enemies;                                           // 0x0798(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class USoundCue*                              Damage_Audio;                                      // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         Damage_Particle;                                   // 0x07B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Damage_AttachRotator;                              // 0x07B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B9[0x7];                                      // 0x07B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Damage_RelativeTransform;                          // 0x07C0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FRotator                               DamageRotatorCache;                                // 0x07F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         TargetPawnBuffId;                                  // 0x07FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ToTargetBuffChance;                                // 0x0800(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ToSelfBuffId;                                      // 0x0804(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ToTargetBuffId;                                    // 0x0808(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80C[0x4];                                      // 0x080C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGrid*>                          BetweenGrids;                                      // 0x0810(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 PreBuffIdsToSelf;                                  // 0x0820(0x0010)(Edit, BlueprintVisible)
	bool                                          bChromaticAberrationIsShowed;                      // 0x0830(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_831[0x7];                                      // 0x0831(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFightNPC*>                      DamageActorCache;                                  // 0x0838(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         DamageActorIndex;                                  // 0x0848(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FrameIndex;                                        // 0x084C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperFlipbook*                         残影动画;                                          // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         残影动画索引;                                      // 0x0858(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Flipbook播放速率;                                  // 0x085C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         淡化速率;                                          // 0x0860(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_864[0x4];                                      // 0x0864(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               粒子材质;                                          // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         残影飘动速度;                                      // 0x0870(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         粒子产生速率;                                      // 0x0874(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NewVar_0;                                          // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_QingGongBack(int32 EntryPoint);
	void 大招定屏后();
	void 瞬移到背后();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_988EDF7F42C78BB0094DEFA3A176BED1();
	void OnInterrupted_988EDF7F42C78BB0094DEFA3A176BED1();
	void OnCancelled_988EDF7F42C78BB0094DEFA3A176BED1();
	void OnTargetLocationReached_2837B2FB4C76CF893D752F840776FE7D();
	void 改变轻功状态(bool Condition);
	void 创建粒子材质(class AActor* Target, struct FVector2D* FlipbookSize);
	void 更新粒子材质(class AActor* NewParam, struct FVector2D* FlipbookSize);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_QingGongBack_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_QingGongBack_C")
	}
	static class UGA_QingGongBack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_QingGongBack_C>();
	}
};
DUMPER7_ASSERTS_UGA_QingGongBack_C;

SDK_NAMESPACE_END
