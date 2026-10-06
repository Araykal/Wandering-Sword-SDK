#pragma once



// Package: BP_GatherStaticMesh

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_structs.hpp"
#include "BP_GatherBase_classes.hpp"
#include "GridRuntime_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GatherStaticMesh.BP_GatherStaticMesh_C
// 0x01F8 (0x0460 - 0x0268)
class ABP_GatherStaticMesh_C : public ABP_GatherBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GatherStaticMesh_C;              // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         _____alpha_EFDFE8BD440BFC90907DF7851A4DAAF4;       // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETimelineDirection                            ______Direction_EFDFE8BD440BFC90907DF7851A4DAAF4;  // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_27D[0x3];                                      // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     树木倾倒;                                          // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            采集前;                                            // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            采集后;                                            // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   显示文字;                                          // 0x0298(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EGatherType, float>                      第一次交互声音延时;                                // 0x02B0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EGatherType, float>                      第二次交互声音延时;                                // 0x0300(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EGatherType, TSoftObjectPtr<class USoundBase>> 交互音效;                                    // 0x0350(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EGatherType, float>                      总交互时长;                                        // 0x03A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                原始相对位置;                                      // 0x03F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               原始相对旋转;                                      // 0x03FC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               动态材质实例;                                      // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EGatherType, TSoftObjectPtr<class USoundCue>> 结束音效;                                     // 0x0410(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_GatherStaticMesh(int32 EntryPoint);
	void Reset();
	void ReceiveBeginPlay();
	void HandleVisible(bool bVisible, EGatherType GatherType);
	void BP_PreGather(EGatherType GatherType);
	void 树木倾倒__UpdateFunc();
	void 树木倾倒__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GatherStaticMesh_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GatherStaticMesh_C")
	}
	static class ABP_GatherStaticMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GatherStaticMesh_C>();
	}
};
DUMPER7_ASSERTS_ABP_GatherStaticMesh_C;

SDK_NAMESPACE_END
