#pragma once



// Package: GC_SkillEffect_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GC_SkillEffect_Base.GC_SkillEffect_Base_C
// 0x00E0 (0x0360 - 0x0280)
#pragma pack(push, 0x1)
class SDK_ALIGN(0x10) AGC_SkillEffect_Base_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        ActiveParticle;                                    // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        ExecuteParticle;                                   // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SpawnedActivePariticleComponent;                   // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SpawnedExecutePariticleComponent;                  // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          改变人物颜色;                                      // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0xF];                                      // 0x02C1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             持续Buff_Transform;                                // 0x02D0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                             ExecuteBuff_Transform;                             // 0x0300(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                          跟随人物旋转;                                      // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          残影效果;                                          // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_332[0x6];                                      // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               粒子材质;                                          // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      残影粒子系统;                                      // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         淡化速率;                                          // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         飘动速度;                                          // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         粒子数量;                                          // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_SkillEffect_Base(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void 创建粒子材质(class AActor* Target, struct FVector2D* FlipbookSize);
	void DestroyComponents();
	void 开启残影效果(class AActor* MyTarget);
	void 更新粒子材质(class AActor* MyTarget, struct FVector2D* FlipbookSize);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GC_SkillEffect_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GC_SkillEffect_Base_C")
	}
	static class AGC_SkillEffect_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_SkillEffect_Base_C>();
	}
};
#pragma pack(pop)
DUMPER7_ASSERTS_AGC_SkillEffect_Base_C;

SDK_NAMESPACE_END
