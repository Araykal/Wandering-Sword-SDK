#pragma once



// Package: BP_AbilityPointLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_AbilityPointLight.BP_AbilityPointLight_C
// 0x0048 (0x0268 - 0x0220)
class ABP_AbilityPointLight_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   LightComponent;                                    // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1______0_B678B29F4C6D512D28FFE7809367D17F; // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_B678B29F4C6D512D28FFE7809367D17F; // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_235[0x3];                                      // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0______0_131D9F3B4D882AB608FD81A7C55332AA; // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_131D9F3B4D882AB608FD81A7C55332AA; // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_245[0x3];                                      // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetIntensity;                                   // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionTime;                                    // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpireTime;                                        // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InternalTime;                                      // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OriIntensity;                                      // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AbilityPointLight(int32 EntryPoint);
	void TimelineIntensityAndDestroy();
	void TimelineIntensity();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void FInterpToIntensity(float Intensity, float TransitionTime_0, float DelayTime);
	void ResetIntensity();
	void SetLightColor(const struct FLinearColor& NewParam);
	void FinterpToIntensityAndDestroy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_AbilityPointLight_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_AbilityPointLight_C")
	}
	static class ABP_AbilityPointLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AbilityPointLight_C>();
	}
};
DUMPER7_ASSERTS_ABP_AbilityPointLight_C;

SDK_NAMESPACE_END
