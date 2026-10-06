#pragma once



// Package: BP_AbilitySpotLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_AbilitySpotLight.BP_AbilitySpotLight_C
// 0x0048 (0x0268 - 0x0220)
class ABP_AbilitySpotLight_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                    LightComponent;                                    // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0______1_EF65F9204DEF38399ADA589136EFE338; // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_EF65F9204DEF38399ADA589136EFE338; // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_235[0x3];                                      // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1______0_D24C50514C4ADAEE78CF7E9413E3B66B; // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_D24C50514C4ADAEE78CF7E9413E3B66B; // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_245[0x3];                                      // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetIntensity;                                   // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionTime;                                    // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpireTime;                                        // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InternalTime;                                      // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OriIntensity;                                      // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAutoReset;                                        // 0x0264(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AbilitySpotLight(int32 EntryPoint);
	void TimelineIntensityAndDestroy();
	void TimelineToIntensity();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void FInterpToIntensity(float Intensity, float TransitionTime_0, float DelayTime, bool AutoReset);
	void ResetIntensity();
	void SetLightColor(const struct FLinearColor& LightColor);
	void FinterpToIntensityAndDestroy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_AbilitySpotLight_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_AbilitySpotLight_C")
	}
	static class ABP_AbilitySpotLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AbilitySpotLight_C>();
	}
};
DUMPER7_ASSERTS_ABP_AbilitySpotLight_C;

SDK_NAMESPACE_END
