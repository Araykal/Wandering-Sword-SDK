#pragma once



// Package: BPVE_MeridianEffectLineWithPlus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_MeridianEffectLineWithPlus.BPVE_MeridianEffectLineWithPlus_C
// 0x0040 (0x04A0 - 0x0460)
class UBPVE_MeridianEffectLineWithPlus_C final : public UJHNeoUIPrimeMeridian_PropertyLineVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_PrimeMeridianDetailLine;                       // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIHorizontalBox*                    CT_AdditionalCost;                                 // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       NeoUIButtonBase_283;                               // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_31;                           // 0x0488(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_80;                                 // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_82;                                 // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_MeridianEffectLineWithPlus(int32 EntryPoint);
	void EVT_UpdatePlusButtonVisibility(bool vflag);
	void BndEvt__BPVE_MeridianEffectLineWithPlus_BTN_PrimeMeridianDetailLine_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__BPVE_MeridianEffectLineWithPlus_NeoUIButtonBase_283_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void Construct();
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_MeridianEffectLineWithPlus_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_MeridianEffectLineWithPlus_C")
	}
	static class UBPVE_MeridianEffectLineWithPlus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_MeridianEffectLineWithPlus_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_MeridianEffectLineWithPlus_C;

SDK_NAMESPACE_END
