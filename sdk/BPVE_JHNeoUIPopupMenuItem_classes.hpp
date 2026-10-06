#pragma once



// Package: BPVE_JHNeoUIPopupMenuItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHNeoUIPopupMenuItem.BPVE_JHNeoUIPopupMenuItem_C
// 0x0018 (0x0670 - 0x0658)
class UBPVE_JHNeoUIPopupMenuItem_C final : public UJHNeoUIPopupMenuItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0658(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_PopupMenuItem;                                 // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHNeoUIPopupMenuItem(int32 EntryPoint);
	void BndEvt__BPVE_JHNeoUIPopupMenuItem_BTN_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BPVE_JHNeoUIPopupMenuItem_BTN_PopupMenuItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHNeoUIPopupMenuItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHNeoUIPopupMenuItem_C")
	}
	static class UBPVE_JHNeoUIPopupMenuItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHNeoUIPopupMenuItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHNeoUIPopupMenuItem_C;

SDK_NAMESPACE_END
