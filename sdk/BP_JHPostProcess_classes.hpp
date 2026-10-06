#pragma once



// Package: BP_JHPostProcess

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_JHPostProcess.BP_JHPostProcess_C
// 0x0028 (0x0248 - 0x0220)
class ABP_JHPostProcess_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         CA_TargetIntensity;                                // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CA_OriIntensity;                                   // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CA_Speed;                                          // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CA_ResetDelay;                                     // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OriFocalDistance;                                  // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_JHPostProcess(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ResetCAIntensity();
	void FInterpToCAIntensity(float Intensity, float Speed, float ResetDelay);
	void SetBokenFocalDistance(float FocalDistance);
	void ResetBokenFocalDistance();
	void SetCAToDefault();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHPostProcess_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHPostProcess_C")
	}
	static class ABP_JHPostProcess_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_JHPostProcess_C>();
	}
};
DUMPER7_ASSERTS_ABP_JHPostProcess_C;

SDK_NAMESPACE_END
