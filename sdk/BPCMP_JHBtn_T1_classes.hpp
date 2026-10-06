#pragma once



// Package: BPCMP_JHBtn_T1

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_JHBtn_T1.BPCMP_JHBtn_T1_C
// 0x0038 (0x05B0 - 0x0578)
class UBPCMP_JHBtn_T1_C final : public UNeoUI1Btn1TxtComp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_1BTN1TXT;                                      // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_A_1;                                           // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BtnClick;                                          // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          In_Enable;                                         // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BPCMP_JHBtn_T1(int32 EntryPoint);
	void BndEvt__BPCMP_JHBtn_T1_BTN_1BTN1TXT_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0);
	void BndEvt__BPCMP_JHBtn_T1_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetEanbleButton(bool InEnable);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_JHBtn_T1_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_JHBtn_T1_C")
	}
	static class UBPCMP_JHBtn_T1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_JHBtn_T1_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_JHBtn_T1_C;

SDK_NAMESPACE_END
