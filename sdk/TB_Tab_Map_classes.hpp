#pragma once



// Package: TB_Tab_Map

#include "Basic.hpp"

#include "GridRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass TB_Tab_Map.TB_Tab_Map_C
// 0x0078 (0x02A0 - 0x0228)
class ATB_Tab_Map_C final : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          切地图;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                          提示;                                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                   LevelName;                                         // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0250(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGridDirect                                   Direct;                                            // 0x025C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25D[0x3];                                      // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                提示盒子大小;                                      // 0x0260(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                切地图盒子大小;                                    // 0x026C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                名字位置;                                          // 0x0278(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementActionSettings>     条件与执行集;                                      // 0x0288(0x0010)(Edit, BlueprintVisible)
	bool                                          PlayShowSceneAnim;                                 // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TB_Tab_Map(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Hide_Name();
	void BndEvt__切地图_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Show_Name();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnSuccess_F809598546F8C01B1724D88CEFBE3A97();
	void OnSuccess_D042B9FF4AB2FC2EA628B48A806BFBF0();
	void UserConstructionScript();
	void UpdateCityNameOld();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("TB_Tab_Map_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TB_Tab_Map_C")
	}
	static class ATB_Tab_Map_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATB_Tab_Map_C>();
	}
};
DUMPER7_ASSERTS_ATB_Tab_Map_C;

SDK_NAMESPACE_END
