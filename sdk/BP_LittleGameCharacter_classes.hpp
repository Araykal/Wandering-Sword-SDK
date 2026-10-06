#pragma once



// Package: BP_LittleGameCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_LittleGameCharacter.BP_LittleGameCharacter_C
// 0x00C0 (0x0760 - 0x06A0)
class ABP_LittleGameCharacter_C final : public ALittleGameCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                         ____0______0_7263126142CC48900AF231A2E9C3A150;     // 0x06A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETimelineDirection                            ____0__Direction_7263126142CC48900AF231A2E9C3A150; // 0x06AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_6AD[0x3];                                      // 0x06AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     时间轴_0;                                          // 0x06B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_2_NewTrack_0_467499D14D8862197AF76391238E6CCC; // 0x06B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_467499D14D8862197AF76391238E6CCC; // 0x06BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_6BD[0x3];                                      // 0x06BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x06C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_NewTrack_0_A2151DD64C125BD44E284792DC041273; // 0x06C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_A2151DD64C125BD44E284792DC041273; // 0x06CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_6CD[0x3];                                      // 0x06CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x06D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_3F99D6074466292C488FDE9592A10FC7; // 0x06D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_3F99D6074466292C488FDE9592A10FC7; // 0x06DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_6DD[0x3];                                      // 0x06DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x06E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotZ2;                                             // 0x06E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotZ1;                                             // 0x06EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotZ3;                                             // 0x06F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F4[0x4];                                      // 0x06F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   内圈;                                              // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   外圈;                                              // 0x0700(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   中圈;                                              // 0x0708(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Msg;                                               // 0x0710(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   Parameter_Name;                                    // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Parameter_Value;                                   // 0x0730(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSuss1;                                            // 0x0740(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSuss2;                                            // 0x0741(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSuss3;                                            // 0x0742(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_743[0x5];                                      // 0x0743(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EUIDirection>                          Directions;                                        // 0x0748(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_Turntable_C*                        Hetu;                                              // 0x0758(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LittleGameCharacter(int32 EntryPoint);
	void BP_SetCommonMaterial(class UStaticMeshComponent* MeshComponent);
	void BP_SetOulineMaterial(class UStaticMeshComponent* MeshComponent);
	void ReceiveBeginPlay();
	void BP_AddArrowUIW();
	void BP_RemoveMonkeyUi();
	void BP_RotateWaiQuanMesh(class UStaticMeshComponent* MeshTo, const struct FRotator& CurrentRotation, const struct FRotator& TargetRotation);
	void BP_RotateNeiQuanMesh(class UStaticMeshComponent* MeshTo, const struct FRotator& CurrentRotation, const struct FRotator& TargetRotation);
	void BP_RotateZhongQuanMesh(class UStaticMeshComponent* MeshTo, const struct FRotator& CurrentRotation, const struct FRotator& TargetRotation);
	void BP_AddArrowUID();
	void BP_AddArrowUIS();
	void BP_AddArrowUIA();
	void Timeline_2__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void 时间轴_0__UpdateFunc();
	void 时间轴_0__FinishedFunc();
	void Judge_Suss(bool* NewParam);
	void ShowSuss();
	void SwitchEnum(TArray<EUIDirection>* Directions_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_LittleGameCharacter_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_LittleGameCharacter_C")
	}
	static class ABP_LittleGameCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LittleGameCharacter_C>();
	}
};
DUMPER7_ASSERTS_ABP_LittleGameCharacter_C;

SDK_NAMESPACE_END
