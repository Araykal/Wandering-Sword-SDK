#pragma once



// Package: BPCMP_SystemLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_SystemLine.BPCMP_SystemLine_C
// 0x0018 (0x0508 - 0x04F0)
class UBPCMP_SystemLine_C final : public UJHNeoUISystemLine
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMulticastInlineDelegate<void()>              EVT_BTN_CLICK;                                     // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPCMP_SystemLine(int32 EntryPoint);
	void BndEvt__BPCMP_SystemLine_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_SystemLine_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_SystemLine_C")
	}
	static class UBPCMP_SystemLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_SystemLine_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_SystemLine_C;

SDK_NAMESPACE_END
