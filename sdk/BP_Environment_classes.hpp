#pragma once



// Package: BP_Environment

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BP_EEnvironmentValueType_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_Environment.BP_Environment_C
// 0x00B0 (0x02D0 - 0x0220)
class ABP_Environment_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UExponentialHeightFogComponent*         ExponentialHeightFog;                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAtmosphericFogComponent*               AtmosphericFog;                                    // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLight;                                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             DirectionalLight;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         InternalTime;                                      // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 原始集;                                            // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 目标集;                                            // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 开始集;                                            // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 当前Alpha集;                                       // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 过渡时间集;                                        // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 超时时间集;                                        // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  是否还原集;                                        // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               DirectionalLightFunctionMaterialsInstance;         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Environment(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CalcTransition(float DeltaSeconds, EBP_EEnvironmentValueType Type, EEasingFunc EasingFunction);
	void SetTransitions(float 目标值, float 过渡时间, float 停留时间, bool 是否还原, EBP_EEnvironmentValueType 数值类型);
	void ResetTransitions(EBP_EEnvironmentValueType 数值类型);
	void GetFloatByValueType(EBP_EEnvironmentValueType Type, float* Result);
	void SetFloatByValueType(EBP_EEnvironmentValueType Type, float NewValue);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_Environment_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_Environment_C")
	}
	static class ABP_Environment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Environment_C>();
	}
};
DUMPER7_ASSERTS_ABP_Environment_C;

SDK_NAMESPACE_END
