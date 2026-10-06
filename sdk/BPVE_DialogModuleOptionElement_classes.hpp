#pragma once



// Package: BPVE_DialogModuleOptionElement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_DialogModuleOptionElement.BPVE_DialogModuleOptionElement_C
// 0x0028 (0x0328 - 0x0300)
class UBPVE_DialogModuleOptionElement_C final : public UDialogModuleListElementVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_DialogOption;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_Option;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIRichTextBlockBase*                RTXT_Cont;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_DialogModuleOptionElement(int32 EntryPoint);
	void BndEvt__BPVE_DialogModuleOptionElement_BTN_DialogOption_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void EVT_RenderView();
	void BndEvt__BPVE_DialogModuleOptionElement_BTN_Option_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_DialogModuleOptionElement_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_DialogModuleOptionElement_C")
	}
	static class UBPVE_DialogModuleOptionElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_DialogModuleOptionElement_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_DialogModuleOptionElement_C;

SDK_NAMESPACE_END
