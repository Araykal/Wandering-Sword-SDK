#pragma once



// Package: BPVE_GatherResultItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_GatherResultItem.BPVE_GatherResultItem_C
// 0x0028 (0x0328 - 0x0300)
class UBPVE_GatherResultItem_C final : public UJHNeoUIGatherResultItemVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_GatherResultItem;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_114;                          // 0x0318(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_69;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_GatherResultItem(int32 EntryPoint);
	void BndEvt__BPVE_GatherResultItem_BTN_GatherResultItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void Construct();
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_GatherResultItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_GatherResultItem_C")
	}
	static class UBPVE_GatherResultItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_GatherResultItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_GatherResultItem_C;

SDK_NAMESPACE_END
