#pragma once



// Package: BTD_OutFollowRange

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BTD_OutFollowRange.BTD_OutFollowRange_C
// 0x00F0 (0x0190 - 0x00A0)
class UBTD_OutFollowRange_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 SelfActorKey;                                      // 0x00A0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 OriPositionKey;                                    // 0x00C8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 FollowRange;                                       // 0x00F0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 SeeHeroKey;                                        // 0x0118(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 超出距离Key;                                       // 0x0140(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 HeroKey;                                           // 0x0168(0x0028)(Edit, BlueprintVisible)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController_PerformConditionCheckAI, class APawn* ControlledPawn_PerformConditionCheckAI);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BTD_OutFollowRange_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BTD_OutFollowRange_C")
	}
	static class UBTD_OutFollowRange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_OutFollowRange_C>();
	}
};
DUMPER7_ASSERTS_UBTD_OutFollowRange_C;

SDK_NAMESPACE_END
