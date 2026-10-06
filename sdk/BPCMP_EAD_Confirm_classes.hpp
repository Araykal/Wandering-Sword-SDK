#pragma once



// Package: BPCMP_EAD_Confirm

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_EAD_Confirm.BPCMP_EAD_Confirm_C
// 0x0028 (0x05A0 - 0x0578)
class UBPCMP_EAD_Confirm_C final : public UJHNeoUI_EAD_ConfirmBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_EAD_Confirm;                                   // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BtnClick;                                          // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPCMP_EAD_Confirm(int32 EntryPoint);
	void BndEvt__BPCMP_EAD_Confirm_BTN_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPCMP_EAD_Confirm_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_EAD_Confirm_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_EAD_Confirm_C")
	}
	static class UBPCMP_EAD_Confirm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_EAD_Confirm_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_EAD_Confirm_C;

SDK_NAMESPACE_END
