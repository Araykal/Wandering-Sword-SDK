#pragma once



// Package: BPVE_Cooking_List_Item

#include "Basic.hpp"

#include "BPVE_Cooking_List_Item_classes.hpp"
#include "BPVE_Cooking_List_Item_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_Cooking_List_Item.BPVE_Cooking_List_Item_C.ExecuteUbergraph_BPVE_Cooking_List_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Cooking_List_Item_C::ExecuteUbergraph_BPVE_Cooking_List_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Cooking_List_Item_C", "ExecuteUbergraph_BPVE_Cooking_List_Item");

	Params::BPVE_Cooking_List_Item_C_ExecuteUbergraph_BPVE_Cooking_List_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Cooking_List_Item.BPVE_Cooking_List_Item_C.BndEvt__BPVE_Cooking_List_Item_BTN_CookingListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_Cooking_List_Item_C::BndEvt__BPVE_Cooking_List_Item_BTN_CookingListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Cooking_List_Item_C", "BndEvt__BPVE_Cooking_List_Item_BTN_CookingListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_Cooking_List_Item_C_BndEvt__BPVE_Cooking_List_Item_BTN_CookingListItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_Cooking_List_Item.BPVE_Cooking_List_Item_C.EVT_PlaySuffcientAnim
// (Event, Public, BlueprintEvent)

void UBPVE_Cooking_List_Item_C::EVT_PlaySuffcientAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Cooking_List_Item_C", "EVT_PlaySuffcientAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_Cooking_List_Item.BPVE_Cooking_List_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_Cooking_List_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_Cooking_List_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
