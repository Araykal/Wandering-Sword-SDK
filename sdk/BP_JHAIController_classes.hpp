#pragma once



// Package: BP_JHAIController

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_JHAIController.BP_JHAIController_C
// 0x0028 (0x03F0 - 0x03C8)
class ABP_JHAIController_C final : public AJHAIController
{
public:
	bool                                          Overlap;                                           // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C9[0x7];                                      // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 OverLap_Actor;                                     // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          See;                                               // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  See_Pawn;                                          // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DeBug;                                             // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Hide;                                              // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHAIController_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHAIController_C")
	}
	static class ABP_JHAIController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_JHAIController_C>();
	}
};
DUMPER7_ASSERTS_ABP_JHAIController_C;

SDK_NAMESPACE_END
