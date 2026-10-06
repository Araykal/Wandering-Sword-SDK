#pragma once



// Package: BPVE_Backpack_SortType_PopupItem

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_Backpack_SortType_PopupItem.BPVE_Backpack_SortType_PopupItem_C
// 0x0028 (0x03B0 - 0x0388)
class UBPVE_Backpack_SortType_PopupItem_C final : public UNeoUI1Img1TxtComp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_GAADisplay_C*                       BP_GAADisplay;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_C*                            Btn_SortBtnPopupItem;                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIBorderBase*                       NeoUIBorderBase_87;                                // 0x03A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_118;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_Backpack_SortType_PopupItem(int32 EntryPoint);
	void BndEvt__BPVE_Backpack_SortType_PopupItem_Btn_SortBtnPopupItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void EVT_RenderView();
	void Construct();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_Backpack_SortType_PopupItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_Backpack_SortType_PopupItem_C")
	}
	static class UBPVE_Backpack_SortType_PopupItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_Backpack_SortType_PopupItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_Backpack_SortType_PopupItem_C;

SDK_NAMESPACE_END
