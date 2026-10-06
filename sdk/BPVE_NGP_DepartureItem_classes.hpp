#pragma once



// Package: BPVE_NGP_DepartureItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_NGP_DepartureItem.BPVE_NGP_DepartureItem_C
// 0x0028 (0x0340 - 0x0318)
class UBPVE_NGP_DepartureItem_C final : public UJHNeoUINGP_DepartureItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_NGP_DepartureItem;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIHorizontalBox*                    CT_NumBtns;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_98;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_NGP_DepartureItem(int32 EntryPoint);
	void EVT_SyncWithGlobalInputMode();
	void BndEvt__BPVE_NGP_DepartureItem_BTN_Minus_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature();
	void BndEvt__BPVE_NGP_DepartureItem_BTN_Plus_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature();
	void EVT_SetupHierarchy();
	void Construct();
	class UWidget* Navi_Left(EUINavigation Navigation_0);
	class UWidget* Navi_Right(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_NGP_DepartureItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_NGP_DepartureItem_C")
	}
	static class UBPVE_NGP_DepartureItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_NGP_DepartureItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_NGP_DepartureItem_C;

SDK_NAMESPACE_END
