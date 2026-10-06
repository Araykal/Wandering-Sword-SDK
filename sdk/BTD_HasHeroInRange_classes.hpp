#pragma once



// Package: BTD_HasHeroInRange

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BTD_HasHeroInRange.BTD_HasHeroInRange_C
// 0x00A0 (0x0140 - 0x00A0)
class UBTD_HasHeroInRange_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 ViewRange;                                         // 0x00A0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 HeroActorKey;                                      // 0x00C8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 SelfKey;                                           // 0x00F0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 SeeHeroKey;                                        // 0x0118(0x0028)(Edit, BlueprintVisible)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController_PerformConditionCheckAI, class APawn* ControlledPawn_PerformConditionCheckAI);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BTD_HasHeroInRange_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BTD_HasHeroInRange_C")
	}
	static class UBTD_HasHeroInRange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_HasHeroInRange_C>();
	}
};
DUMPER7_ASSERTS_UBTD_HasHeroInRange_C;

SDK_NAMESPACE_END
