#pragma once



// Package: BP_EnvironmentVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BP_SEnvironmentValue_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_EnvironmentVolume.BP_EnvironmentVolume_C
// 0x0060 (0x0288 - 0x0228)
class ABP_EnvironmentVolume_C final : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         太阳光亮度;                                        // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_JHDirectionalLight_C*               DirectionalLight;                                  // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         云影强度;                                          // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBP_SEnvironmentValue>          改变集;                                            // 0x0248(0x0010)(Edit, BlueprintVisible)
	class ABP_Environment_C*                      Environment;                                       // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UFightLevelSetting>      FightSetting;                                      // 0x0260(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EnvironmentVolume(int32 EntryPoint);
	void ReceiveBeginPlay();
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_EnvironmentVolume_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_EnvironmentVolume_C")
	}
	static class ABP_EnvironmentVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EnvironmentVolume_C>();
	}
};
DUMPER7_ASSERTS_ABP_EnvironmentVolume_C;

SDK_NAMESPACE_END
