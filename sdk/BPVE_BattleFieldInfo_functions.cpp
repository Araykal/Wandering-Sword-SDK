#pragma once



// Package: BPVE_BattleFieldInfo

#include "Basic.hpp"

#include "BPVE_BattleFieldInfo_classes.hpp"
#include "BPVE_BattleFieldInfo_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_BattleFieldInfo.BPVE_BattleFieldInfo_C.ExecuteUbergraph_BPVE_BattleFieldInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleFieldInfo_C::ExecuteUbergraph_BPVE_BattleFieldInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleFieldInfo_C", "ExecuteUbergraph_BPVE_BattleFieldInfo");

	Params::BPVE_BattleFieldInfo_C_ExecuteUbergraph_BPVE_BattleFieldInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleFieldInfo.BPVE_BattleFieldInfo_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_BattleFieldInfo_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleFieldInfo_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_BattleFieldInfo.BPVE_BattleFieldInfo_C.BndEvt__BPVE_BattleFieldInfo_BTN_Hide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_BattleFieldInfo_C::BndEvt__BPVE_BattleFieldInfo_BTN_Hide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleFieldInfo_C", "BndEvt__BPVE_BattleFieldInfo_BTN_Hide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_BattleFieldInfo.BPVE_BattleFieldInfo_C.BndEvt__BPVE_BattleFieldInfo_BTN_SHOW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPVE_BattleFieldInfo_C::BndEvt__BPVE_BattleFieldInfo_BTN_SHOW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleFieldInfo_C", "BndEvt__BPVE_BattleFieldInfo_BTN_SHOW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_BattleFieldInfo.BPVE_BattleFieldInfo_C.HidePanel
// (Public, BlueprintCallable, BlueprintEvent)

void UBPVE_BattleFieldInfo_C::HidePanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleFieldInfo_C", "HidePanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_BattleFieldInfo.BPVE_BattleFieldInfo_C.ShowPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UBPVE_BattleFieldInfo_C::ShowPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleFieldInfo_C", "ShowPanel");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
