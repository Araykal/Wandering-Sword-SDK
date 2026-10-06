#pragma once



// Package: BPVE_NGP_InheritanceItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_NGP_InheritanceItem.BPVE_NGP_InheritanceItem_C
// 0x0020 (0x04B8 - 0x0498)
class UBPVE_NGP_InheritanceItem_C final : public UJHNeoUI_NGP_InheritanceItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_NGP_InheritanceItem;                           // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_16;                           // 0x04B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_NGP_InheritanceItem(int32 EntryPoint);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void BndEvt__BPVE_NGP_InheritanceItem_BTN_NGP_InheritanceItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_NGP_InheritanceItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_NGP_InheritanceItem_C")
	}
	static class UBPVE_NGP_InheritanceItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_NGP_InheritanceItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_NGP_InheritanceItem_C;

SDK_NAMESPACE_END
