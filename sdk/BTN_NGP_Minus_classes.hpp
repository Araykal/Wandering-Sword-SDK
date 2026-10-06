#pragma once



// Package: BTN_NGP_Minus

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BTN_NGP_Minus.BTN_NGP_Minus_C
// 0x0018 (0x0590 - 0x0578)
class UBTN_NGP_Minus_C final : public UNeoUI1Btn1TxtComp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMulticastInlineDelegate<void()>              BtnClick;                                          // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BTN_NGP_Minus(int32 EntryPoint);
	void BndEvt__BTN_NGP_Minus_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BTN_NGP_Minus_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BTN_NGP_Minus_C")
	}
	static class UBTN_NGP_Minus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTN_NGP_Minus_C>();
	}
};
DUMPER7_ASSERTS_UBTN_NGP_Minus_C;

SDK_NAMESPACE_END
