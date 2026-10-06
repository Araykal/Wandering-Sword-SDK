#pragma once



// Package: BP_FightNPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_FightNPC.BP_FightNPC_C
// 0x0040 (0x05B0 - 0x0570)
class ABP_FightNPC_C : public AFightNPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNavigationInvokerComponent*            NavigationInvoker;                                 // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayDie;                                          // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_581[0x3];                                      // 0x0581(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OffsetCache;                                       // 0x0584(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               SpriteMaterialsInstance;                           // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_591[0x7];                                      // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLinearColor>                   Colors;                                            // 0x0598(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_FightNPC(int32 EntryPoint);
	void ReceiveBeginPlay();
	void HandleSelected(bool bSelected_0);
	void HandleShowHealthChange(float InValue, EDamageType DamangeType);
	void HandleShowManaChange(float InValue);
	void HandleDie();
	void HandleShowDamage(float InValue, EDamageType DamangeType);
	void ReceiveTick(float DeltaSeconds);
	void ResetBlendColor();
	void AddColor(const struct FLinearColor& Color);
	void RemoveColor(const struct FLinearColor& Color);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_FightNPC_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_FightNPC_C")
	}
	static class ABP_FightNPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FightNPC_C>();
	}
};
DUMPER7_ASSERTS_ABP_FightNPC_C;

SDK_NAMESPACE_END
