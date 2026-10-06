#pragma once



// Package: BPVE_PrimeMeridianZimai

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_PrimeMeridianZimai.BPVE_PrimeMeridianZimai_C
// 0x0038 (0x0668 - 0x0630)
class UBPVE_PrimeMeridianZimai_C final : public UJHNeoUIPrimeMeridianZimaiBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0630(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_PrimeMeridianCell;                             // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHNeoUISeqPlayer_C*                    IMG_DaYuanMan;                                     // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_RongHuiGuanTong;                               // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_42;                           // 0x0658(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_225;                                // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_PrimeMeridianZimai(int32 EntryPoint);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void BndEvt__BPVE_PrimeMeridianZimai_BTN_PrimeMeridianCell_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0);
	void BndEvt__BPVE_PrimeMeridianZimai_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EVT_RenderView();
	void Construct();
	class UWidget* GetToolTipWidget_0();
	struct FEventReply On_IMG_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_PrimeMeridianZimai_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_PrimeMeridianZimai_C")
	}
	static class UBPVE_PrimeMeridianZimai_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_PrimeMeridianZimai_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_PrimeMeridianZimai_C;

SDK_NAMESPACE_END
