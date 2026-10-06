#pragma once



// Package: BP_FightSpectator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_FightSpectator.BP_FightSpectator_C
// 0x0068 (0x0350 - 0x02E8)
class ABP_FightSpectator_C final : public AFightSpectator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         InternalTime;                                      // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionTime;                                    // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OriRotator;                                        // 0x02F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               TargetRotator;                                     // 0x0304(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAutoReset;                                        // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_311[0x3];                                      // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TargetLocation;                                    // 0x0314(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetArmLength;                                   // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OriTargetArmLength;                                // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetOffset;                                      // 0x0328(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OriTargetOffset;                                   // 0x0334(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OriCameraLag;                                      // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_341[0x3];                                      // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               移动平台下棒子的旋转量;                            // 0x0344(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_FightSpectator(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void HandleRotatorChanged(const struct FRotator& Rotator);
	void ReceiveBeginPlay();
	void ChangeArmArgs(const struct FRotator& Rotator, float ArmLength, const struct FVector& TargetOffset_0, float Speed, bool bUseLag);
	void ResetArmArgs(bool UseLag);
	void ChangeArmRotator(const struct FRotator& NewRotator);
	void ResetArmRotator();
	void ChangeActorLocation(const struct FVector& Location);
	void ResetArmTargetLength();
	void ChangeArmTargetLength(float NewArmTargetLength);
	void SetCameraLag(bool UseCameraLag);
	void ResetCameraLag();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_FightSpectator_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_FightSpectator_C")
	}
	static class ABP_FightSpectator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FightSpectator_C>();
	}
};
DUMPER7_ASSERTS_ABP_FightSpectator_C;

SDK_NAMESPACE_END
