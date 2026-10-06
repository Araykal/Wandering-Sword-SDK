#pragma once



// Package: BPVE_MeridianNode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_MeridianNode.BPVE_MeridianNode_C
// 0x0028 (0x0478 - 0x0450)
class UBPVE_MeridianNode_C final : public UJHMeridianNode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPCMP_NeoUISimpleBtn_C*                BPCMP_NeoUISimpleBtn;                              // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_C*                            BTN_MeridianNode;                                  // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  RootCanvas;                                        // 0x0470(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_MeridianNode(int32 EntryPoint);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void BndEvt__BPVE_MeridianNode_BTN_MeridianNode_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__BPVE_MeridianNode_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature(class UNeoUICommonButton* SrcWidget);
	void Construct();
	class UWidget* Get_RootCanvas_ToolTipWidget_0();
	void Reconcile_Line_Scale(float Value);
	class UWidget* Navi_GotoNextNode(EUINavigation Navigation_0);
	class UWidget* Navi_GotoPreNode(EUINavigation Navigation_0);
	class UWidget* Navi_GotoSideBar(EUINavigation Navigation_0);
	class UWidget* Navi_GotoDetail(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_MeridianNode_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_MeridianNode_C")
	}
	static class UBPVE_MeridianNode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_MeridianNode_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_MeridianNode_C;

SDK_NAMESPACE_END
