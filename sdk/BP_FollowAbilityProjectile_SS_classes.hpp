#pragma once



// Package: BP_FollowAbilityProjectile_SS

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_FollowAbilityProjectile_SS.BP_FollowAbilityProjectile_SS_C
// 0x0050 (0x0330 - 0x02E0)
class ABP_FollowAbilityProjectile_SS_C final : public AFollowAbilityProjectile_SS
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHPaperFlipbookComponent*              JHPaperFlipbook;                                   // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         DamageMultiplier;                                  // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          残影效果;                                          // 0x02F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2F5[0x3];                                      // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         淡化速率;                                          // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         飘动速度;                                          // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               粒子材质;                                          // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperFlipbook*                         残影动画;                                          // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         粒子产生速率;                                      // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      残影粒子系统;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Flipbook播放速率;                                  // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FollowAbilityProjectile_SS(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void 更新粒子材质(class AActor* MyTarget, struct FVector2D* FlipbookSize);
	void 创建粒子材质(class AActor* Target, struct FVector2D* FlipbookSize);
	void 开启残影效果(class AActor* MyTarget);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_FollowAbilityProjectile_SS_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_FollowAbilityProjectile_SS_C")
	}
	static class ABP_FollowAbilityProjectile_SS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FollowAbilityProjectile_SS_C>();
	}
};
DUMPER7_ASSERTS_ABP_FollowAbilityProjectile_SS_C;

SDK_NAMESPACE_END
