#pragma once



// Package: BP_GHCSkillGrid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GHCSkillGrid.BP_GHCSkillGrid_C
// 0x0008 (0x08B0 - 0x08A8)
class UBP_GHCSkillGrid_C final : public UJHNeoUIItemGrid
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_GHCSkillGrid(int32 EntryPoint);
	void EVT_InitOnce();
	void BP_OnEntryInitialized_Event_0(class UObject* Item, class UUserWidget* Widget);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GHCSkillGrid_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GHCSkillGrid_C")
	}
	static class UBP_GHCSkillGrid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GHCSkillGrid_C>();
	}
};
DUMPER7_ASSERTS_UBP_GHCSkillGrid_C;

SDK_NAMESPACE_END
