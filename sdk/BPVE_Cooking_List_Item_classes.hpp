#pragma once



// Package: BPVE_Cooking_List_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_Cooking_List_Item.BPVE_Cooking_List_Item_C
// 0x0020 (0x03D8 - 0x03B8)
class UBPVE_Cooking_List_Item_C final : public UJHNeoUI_Workmanship_ListItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SufficientAnim;                                    // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UJHGPCBtn_C*                            BTN_CookingListItem;                               // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_Cooking_List_Item(int32 EntryPoint);
	void BndEvt__BPVE_Cooking_List_Item_BTN_CookingListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void EVT_PlaySuffcientAnim();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_Cooking_List_Item_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_Cooking_List_Item_C")
	}
	static class UBPVE_Cooking_List_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_Cooking_List_Item_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_Cooking_List_Item_C;

SDK_NAMESPACE_END
