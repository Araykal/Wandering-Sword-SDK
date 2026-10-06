#pragma once



// Package: BP_GHCScenarioGrid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GHCScenarioGrid.BP_GHCScenarioGrid_C
// 0x0008 (0x08B0 - 0x08A8)
class UBP_GHCScenarioGrid_C final : public UJHNeoUIItemGrid
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_GHCScenarioGrid(int32 EntryPoint);
	void BP_OnEntryInitialized_Event_0(class UObject* Item, class UUserWidget* Widget);
	void HandleEntryGenerated(class UUserWidget* Widget);
	void EVT_InitOnce();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GHCScenarioGrid_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GHCScenarioGrid_C")
	}
	static class UBP_GHCScenarioGrid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GHCScenarioGrid_C>();
	}
};
DUMPER7_ASSERTS_UBP_GHCScenarioGrid_C;

SDK_NAMESPACE_END
