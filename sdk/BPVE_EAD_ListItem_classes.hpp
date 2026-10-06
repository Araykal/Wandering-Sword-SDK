#pragma once



// Package: BPVE_EAD_ListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_EAD_ListItem.BPVE_EAD_ListItem_C
// 0x0018 (0x0320 - 0x0308)
class UBPVE_EAD_ListItem_C final : public UJHNeoUI_EAD_ListItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_EDB_ListItem;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_120;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_EAD_ListItem(int32 EntryPoint);
	void BndEvt__BPVE_EAD_ListItem_BTN_EDB_ListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();
	class UWidget* GotoDetail(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_EAD_ListItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_EAD_ListItem_C")
	}
	static class UBPVE_EAD_ListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_EAD_ListItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_EAD_ListItem_C;

SDK_NAMESPACE_END
