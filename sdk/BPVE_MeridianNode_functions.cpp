#pragma once



// Package: BPVE_MeridianNode

#include "Basic.hpp"

#include "BPVE_MeridianNode_classes.hpp"
#include "BPVE_MeridianNode_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_MeridianNode.BPVE_MeridianNode_C.ExecuteUbergraph_BPVE_MeridianNode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MeridianNode_C::ExecuteUbergraph_BPVE_MeridianNode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianNode_C", "ExecuteUbergraph_BPVE_MeridianNode");

	Params::BPVE_MeridianNode_C_ExecuteUbergraph_BPVE_MeridianNode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianNode.BPVE_MeridianNode_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_MeridianNode_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianNode_C", "EVT_GamepadShowTips");

	Params::BPVE_MeridianNode_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianNode.BPVE_MeridianNode_C.BndEvt__BPVE_MeridianNode_BTN_MeridianNode_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MeridianNode_C::BndEvt__BPVE_MeridianNode_BTN_MeridianNode_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianNode_C", "BndEvt__BPVE_MeridianNode_BTN_MeridianNode_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPVE_MeridianNode_C_BndEvt__BPVE_MeridianNode_BTN_MeridianNode_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianNode.BPVE_MeridianNode_C.BndEvt__BPVE_MeridianNode_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNeoUICommonButton*               SrcWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MeridianNode_C::BndEvt__BPVE_MeridianNode_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature(class UNeoUICommonButton* SrcWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianNode_C", "BndEvt__BPVE_MeridianNode_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature");

	Params::BPVE_MeridianNode_C_BndEvt__BPVE_MeridianNode_BPCMP_NeoUISimpleBtn_K2Node_ComponentBoundEvent_0_NeoUICommonButtonSingleClick__DelegateSignature Parms{};

	Parms.SrcWidget = SrcWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_MeridianNode_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianNode_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Get_RootCanvas_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_MeridianNode_C::Get_RootCanvas_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianNode_C", "Get_RootCanvas_ToolTipWidget_0");

	Params::BPVE_MeridianNode_C_Get_RootCanvas_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Reconcile Line Scale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MeridianNode_C::Reconcile_Line_Scale(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianNode_C", "Reconcile Line Scale");

	Params::BPVE_MeridianNode_C_Reconcile_Line_Scale Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Navi_GotoNextNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_MeridianNode_C::Navi_GotoNextNode(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianNode_C", "Navi_GotoNextNode");

	Params::BPVE_MeridianNode_C_Navi_GotoNextNode Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Navi_GotoPreNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_MeridianNode_C::Navi_GotoPreNode(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianNode_C", "Navi_GotoPreNode");

	Params::BPVE_MeridianNode_C_Navi_GotoPreNode Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Navi_GotoSideBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_MeridianNode_C::Navi_GotoSideBar(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianNode_C", "Navi_GotoSideBar");

	Params::BPVE_MeridianNode_C_Navi_GotoSideBar Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_MeridianNode.BPVE_MeridianNode_C.Navi_GotoDetail
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_MeridianNode_C::Navi_GotoDetail(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MeridianNode_C", "Navi_GotoDetail");

	Params::BPVE_MeridianNode_C_Navi_GotoDetail Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
