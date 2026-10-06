#pragma once



// Package: BP_ItemGridWDT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_ItemGridWDT.BP_ItemGridWDT_C
// 0x0008 (0x08B0 - 0x08A8)
class UBP_ItemGridWDT_C final : public UJHNeoUIItemGridWDT
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ItemGridWDT(int32 EntryPoint);
	void EVT_InitOnce();
	void BP_OnEntryInitialized_Event_0(class UObject* Item, class UUserWidget* Widget);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_ItemGridWDT_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_ItemGridWDT_C")
	}
	static class UBP_ItemGridWDT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ItemGridWDT_C>();
	}
};
DUMPER7_ASSERTS_UBP_ItemGridWDT_C;

SDK_NAMESPACE_END
