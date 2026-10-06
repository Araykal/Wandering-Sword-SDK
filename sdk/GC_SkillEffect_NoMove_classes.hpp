#pragma once



// Package: GC_SkillEffect_NoMove

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GC_SkillEffect_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GC_SkillEffect_NoMove.GC_SkillEffect_NoMove_C
// 0x0030 (0x0390 - 0x0360)
class AGC_SkillEffect_NoMove_C final : public AGC_SkillEffect_Base_C
{
public:
	uint8                                         Pad_354[0x4];                                      // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_GC_SkillEffect_NoMove_C;            // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               SpawnedActiveParticleComp;                         // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SpawnedExecteParComp;                              // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         淡化速率NoMove;                                    // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         残影飘动速度NoMove;                                // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         粒子产生速率NoMove;                                // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Parameters_Location;                               // 0x037C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_SkillEffect_NoMove(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void 开启残影效果_No_Move(class AActor* NewParam);
	void 创建粒子材质_No_Move(class AActor* NewParam, struct FVector2D* FlipbookSize);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void DestroyComponents();
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GC_SkillEffect_NoMove_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GC_SkillEffect_NoMove_C")
	}
	static class AGC_SkillEffect_NoMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_SkillEffect_NoMove_C>();
	}
};
DUMPER7_ASSERTS_AGC_SkillEffect_NoMove_C;

SDK_NAMESPACE_END
