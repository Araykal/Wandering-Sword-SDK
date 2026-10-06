#pragma once



// Package: BTS_CacheHeroPoint

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BTS_CacheHeroPoint.BTS_CacheHeroPoint_C
// 0x0170 (0x0208 - 0x0098)
class UBTS_CacheHeroPoint_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 HeroActorKey;                                      // 0x00A0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 SelfActorKey;                                      // 0x00C8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 CacheOriKey;                                       // 0x00F0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 视野范围Key;                                       // 0x0118(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 追踪范围Key;                                       // 0x0140(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 巡逻范围Key;                                       // 0x0168(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 超出距离Key;                                       // 0x0190(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 GameInstanceKey;                                   // 0x01B8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 GameplayController;                                // 0x01E0(0x0028)(Edit, BlueprintVisible)

public:
	void ReceiveActivationAI(class AAIController* OwnerController_ReceiveActivationAI, class APawn* ControlledPawn_ReceiveActivationAI);
	void ExecuteUbergraph_BTS_CacheHeroPoint(int32 EntryPoint);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BTS_CacheHeroPoint_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BTS_CacheHeroPoint_C")
	}
	static class UBTS_CacheHeroPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_CacheHeroPoint_C>();
	}
};
DUMPER7_ASSERTS_UBTS_CacheHeroPoint_C;

SDK_NAMESPACE_END
