#pragma once



// Package: BP_PlayerController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x0050 (0x0730 - 0x06E0)
class ABP_PlayerController_C final : public AJHPlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                WBP_SelectItem_Obj;                                // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MiniMap_C*                          BP_全局地图;                                       // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_GM0_C*                             WBP_GM_Obj;                                        // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NotInWorldMap;                                     // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_701[0x7];                                      // 0x0701(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_MonkeyDance_C*>              Out_Actors;                                        // 0x0708(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                NewVar_0;                                          // 0x0718(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               NewVar_1;                                          // 0x0724(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerController(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnPossesMoved(class APawn* InPawn);
	void BP_HandleOpenMiniMap();
	void InpActEvt_Battle_Skill_6_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Battle_Skill_5_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Battle_Skill_4_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Battle_Skill_3_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Battle_Skill_2_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Battle_Skill_1_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_2(const struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_PlayerController_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_PlayerController_C")
	}
	static class ABP_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerController_C>();
	}
};
DUMPER7_ASSERTS_ABP_PlayerController_C;

SDK_NAMESPACE_END
