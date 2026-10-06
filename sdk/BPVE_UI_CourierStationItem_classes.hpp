#pragma once



// Package: BPVE_UI_CourierStationItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_UI_CourierStationItem.BPVE_UI_CourierStationItem_C
// 0x0020 (0x0358 - 0x0338)
class UBPVE_UI_CourierStationItem_C final : public UCourierStationItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_CourierStationItem;                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_34;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_UI_CourierStationItem(int32 EntryPoint);
	void BndEvt__BPVE_UI_CourierStationItem_BTN_CourierStationItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_UI_CourierStationItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_UI_CourierStationItem_C")
	}
	static class UBPVE_UI_CourierStationItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_UI_CourierStationItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_UI_CourierStationItem_C;

SDK_NAMESPACE_END
