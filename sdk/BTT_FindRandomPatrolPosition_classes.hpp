#pragma once



// Package: BTT_FindRandomPatrolPosition

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BTT_FindRandomPatrolPosition.BTT_FindRandomPatrolPosition_C
// 0x00D0 (0x0178 - 0x00A8)
class UBTT_FindRandomPatrolPosition_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 OutTargetPositionKey;                              // 0x00B0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 InOriPositionKey;                                  // 0x00D8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 InPatrolRangeKey;                                  // 0x0100(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 OutWaitTimeKey;                                    // 0x0128(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 InSelfKey;                                         // 0x0150(0x0028)(Edit, BlueprintVisible)

public:
	void ReceiveExecuteAI(class AAIController* OwnerController_ReceiveExecuteAI, class APawn* ControlledPawn_ReceiveExecuteAI);
	void ExecuteUbergraph_BTT_FindRandomPatrolPosition(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BTT_FindRandomPatrolPosition_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BTT_FindRandomPatrolPosition_C")
	}
	static class UBTT_FindRandomPatrolPosition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_FindRandomPatrolPosition_C>();
	}
};
DUMPER7_ASSERTS_UBTT_FindRandomPatrolPosition_C;

SDK_NAMESPACE_END
