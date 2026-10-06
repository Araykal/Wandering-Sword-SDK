#pragma once



// Package: BP_JHDirectionalLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_JHDirectionalLight.BP_JHDirectionalLight_C
// 0x0030 (0x0260 - 0x0230)
class ABP_JHDirectionalLight_C final : public ADirectionalLight
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         TargetIntensity;                                   // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OriIntensity;                                      // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpireTime;                                        // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionTime;                                    // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InternalTime;                                      // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAutoReset;                                        // 0x024C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_24D[0x3];                                      // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TargetCloundPower;                                 // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OriCloundPower;                                    // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CloundPowerTransitionTime;                         // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_JHDirectionalLight(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void FInterpToIntensity(float Intensity, float TransitionTime_0, float DelayTime, bool AutoReset);
	void ResetIntensity();
	void FinterpToCloundPower(float Power, float TransitionTime_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHDirectionalLight_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHDirectionalLight_C")
	}
	static class ABP_JHDirectionalLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_JHDirectionalLight_C>();
	}
};
DUMPER7_ASSERTS_ABP_JHDirectionalLight_C;

SDK_NAMESPACE_END
