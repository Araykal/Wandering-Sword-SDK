#pragma once



// Package: BTD_IsSceneWorldType

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BTD_IsSceneWorldType.BTD_IsSceneWorldType_C
// 0x0050 (0x00F0 - 0x00A0)
class UBTD_IsSceneWorldType_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 GameInstanceKey;                                   // 0x00A0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 PlayerControllerKey;                               // 0x00C8(0x0028)(Edit, BlueprintVisible)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController_PerformConditionCheckAI, class APawn* ControlledPawn_PerformConditionCheckAI);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BTD_IsSceneWorldType_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BTD_IsSceneWorldType_C")
	}
	static class UBTD_IsSceneWorldType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_IsSceneWorldType_C>();
	}
};
DUMPER7_ASSERTS_UBTD_IsSceneWorldType_C;

SDK_NAMESPACE_END
