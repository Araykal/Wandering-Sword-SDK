#pragma once



// Package: UWBP_MasterMenu

#include "Basic.hpp"

#include "UWBP_MasterMenu_classes.hpp"
#include "UWBP_MasterMenu_parameters.hpp"


SDK_NAMESPACE_START

// Function UWBP_MasterMenu.UWBP_MasterMenu_C.ExecuteUbergraph_UWBP_MasterMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_MasterMenu_C::ExecuteUbergraph_UWBP_MasterMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "ExecuteUbergraph_UWBP_MasterMenu");

	Params::UWBP_MasterMenu_C_ExecuteUbergraph_UWBP_MasterMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.EVT_UpdateLoadButtonStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUWBP_MasterMenu_C::EVT_UpdateLoadButtonStatus(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "EVT_UpdateLoadButtonStatus");

	Params::UWBP_MasterMenu_C_EVT_UpdateLoadButtonStatus Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.EVT_FocusWidgetInitDelay
// (Event, Public, BlueprintEvent)

void UUWBP_MasterMenu_C::EVT_FocusWidgetInitDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "EVT_FocusWidgetInitDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.EVT_AppendActiveAreaArr
// (Event, Public, BlueprintEvent)

void UUWBP_MasterMenu_C::EVT_AppendActiveAreaArr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "EVT_AppendActiveAreaArr");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.BndEvt__UWBP_MasterMenu_BTN_Exit_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_MasterMenu_C::BndEvt__UWBP_MasterMenu_BTN_Exit_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "BndEvt__UWBP_MasterMenu_BTN_Exit_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::UWBP_MasterMenu_C_BndEvt__UWBP_MasterMenu_BTN_Exit_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.BndEvt__UWBP_MasterMenu_BTN_Config_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_MasterMenu_C::BndEvt__UWBP_MasterMenu_BTN_Config_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "BndEvt__UWBP_MasterMenu_BTN_Config_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::UWBP_MasterMenu_C_BndEvt__UWBP_MasterMenu_BTN_Config_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.BndEvt__UWBP_MasterMenu_BTN_Load_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_MasterMenu_C::BndEvt__UWBP_MasterMenu_BTN_Load_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "BndEvt__UWBP_MasterMenu_BTN_Load_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::UWBP_MasterMenu_C_BndEvt__UWBP_MasterMenu_BTN_Load_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.BndEvt__UWBP_MasterMenu_BTN_NewGame_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUWBP_MasterMenu_C::BndEvt__UWBP_MasterMenu_BTN_NewGame_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "BndEvt__UWBP_MasterMenu_BTN_NewGame_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::UWBP_MasterMenu_C_BndEvt__UWBP_MasterMenu_BTN_NewGame_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUWBP_MasterMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUWBP_MasterMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "PreConstruct");

	Params::UWBP_MasterMenu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.ShowMain
// (Public, BlueprintCallable, BlueprintEvent)

void UUWBP_MasterMenu_C::ShowMain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "ShowMain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.On_Image_T_shiling_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUWBP_MasterMenu_C::On_Image_T_shiling_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "On_Image_T_shiling_MouseButtonDown_0");

	Params::UWBP_MasterMenu_C_On_Image_T_shiling_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.Get T Sahngdianyelianjie Tool Tip Widget 0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUWBP_MasterMenu_C::Get_T_Sahngdianyelianjie_Tool_Tip_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "Get T Sahngdianyelianjie Tool Tip Widget 0");

	Params::UWBP_MasterMenu_C_Get_T_Sahngdianyelianjie_Tool_Tip_Widget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.Get_T_wenjuandiaocha_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUWBP_MasterMenu_C::Get_T_wenjuandiaocha_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "Get_T_wenjuandiaocha_ToolTipWidget_0");

	Params::UWBP_MasterMenu_C_Get_T_wenjuandiaocha_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.On_T_sahngdianyelianjie_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUWBP_MasterMenu_C::On_T_sahngdianyelianjie_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "On_T_sahngdianyelianjie_MouseButtonDown_0");

	Params::UWBP_MasterMenu_C_On_T_sahngdianyelianjie_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.On_T_wenjuandiaocha_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUWBP_MasterMenu_C::On_T_wenjuandiaocha_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "On_T_wenjuandiaocha_MouseButtonDown_0");

	Params::UWBP_MasterMenu_C_On_T_wenjuandiaocha_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUWBP_MasterMenu_C::DoCustomNavigation_0(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "DoCustomNavigation_0");

	Params::UWBP_MasterMenu_C_DoCustomNavigation_0 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.DoCustomNavigation_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUWBP_MasterMenu_C::DoCustomNavigation_1(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "DoCustomNavigation_1");

	Params::UWBP_MasterMenu_C_DoCustomNavigation_1 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UWBP_MasterMenu.UWBP_MasterMenu_C.可以交互
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   允许交互_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUWBP_MasterMenu_C::可以交互(bool* 允许交互_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UWBP_MasterMenu_C", "可以交互");

	Params::UWBP_MasterMenu_C_可以交互 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (允许交互_0 != nullptr)
		*允许交互_0 = Parms.允许交互_0;
}


SDK_NAMESPACE_END
