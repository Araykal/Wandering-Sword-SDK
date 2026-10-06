#pragma once



// Package: BP_BackpackFilterBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BP_BackpackFilterBtn.BP_BackpackFilterBtn_C
// 0x0008 (0x0618 - 0x0610)
class UBP_BackpackFilterBtn_C final : public UJHBackpackFilterBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_BackpackFilterBtn(int32 EntryPoint);
	void BndEvt__BP_BackpackFilterBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_BackpackFilterBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_BackpackFilterBtn_C")
	}
	static class UBP_BackpackFilterBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BackpackFilterBtn_C>();
	}
};
DUMPER7_ASSERTS_UBP_BackpackFilterBtn_C;

SDK_NAMESPACE_END
