#pragma once



// Package: BPVE_Backpack_SortType_Popup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_Backpack_SortType_Popup.BPVE_Backpack_SortType_Popup_C
// 0x0048 (0x0320 - 0x02D8)
class UBPVE_Backpack_SortType_Popup_C final : public UJHBackpackSortTypePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIBorderBase*                       NeoUIBorderBase_129;                               // 0x02E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_40;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_Backpack_SortType_PopupItem_C*    VE0;                                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_Backpack_SortType_PopupItem_C*    VE0_1;                                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_Backpack_SortType_PopupItem_C*    VE0_2;                                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_Backpack_SortType_PopupItem_C*    VE0_3;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              FocusSortTypeBtn;                                  // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPVE_Backpack_SortType_Popup(int32 EntryPoint);
	void EVT_SetupHierarchy();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	class UWidget* DoCustomNavigation_0(EUINavigation Navigation_0);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_Backpack_SortType_Popup_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_Backpack_SortType_Popup_C")
	}
	static class UBPVE_Backpack_SortType_Popup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_Backpack_SortType_Popup_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_Backpack_SortType_Popup_C;

SDK_NAMESPACE_END
