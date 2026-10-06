#pragma once



// Package: BP_MiniMap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_classes.hpp"
#include "GridRuntime_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_MiniMap.BP_MiniMap_C
// 0x0070 (0x0290 - 0x0220)
class ABP_MiniMap_C final : public AJHWorldMiniMap
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         _S_1_0_28527F7F4DFC79B38B16239240310BA7;           // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _S_Yun_28527F7F4DFC79B38B16239240310BA7;           // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _S_JingSheng_28527F7F4DFC79B38B16239240310BA7;     // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _S_JuZhong_28527F7F4DFC79B38B16239240310BA7;       // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _S____28527F7F4DFC79B38B16239240310BA7;            // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _S__Direction_28527F7F4DFC79B38B16239240310BA7;    // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_245[0x3];                                      // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TwoS;                                              // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                镜头位置;                                          // 0x0250(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                镜头偏移;                                          // 0x025C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_Move_C*                        Map_Move;                                          // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandler;                                      // 0x0270(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          全局开关;                                          // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279[0x3];                                      // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TargetOffsetCache;                                 // 0x027C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetArmLengthCache;                              // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MiniMap(int32 EntryPoint);
	void MoveCameraboom(EGridDirect Dir, bool bOnOff);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void 归位();
	void Time_Move();
	void 屏幕移动(EGridDirect 方向, bool Off);
	void 开关全局();
	void TwoS__UpdateFunc();
	void TwoS__FinishedFunc();
	void ClearTimerHandle();
	void ShowCityName();
	void HideCityName();
	void CreateAndShowMoveWidget();
	void HideAndDestroyMoveWidget();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_MiniMap_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_MiniMap_C")
	}
	static class ABP_MiniMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MiniMap_C>();
	}
};
DUMPER7_ASSERTS_ABP_MiniMap_C;

SDK_NAMESPACE_END
