#pragma once



// Package: Widget_Arrow

#include "Basic.hpp"

#include "Widget_Arrow_classes.hpp"
#include "Widget_Arrow_parameters.hpp"


SDK_NAMESPACE_START

// Function Widget_Arrow.Widget_Arrow_C.ExecuteUbergraph_Widget_Arrow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Arrow_C::ExecuteUbergraph_Widget_Arrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_Arrow_C", "ExecuteUbergraph_Widget_Arrow");

	Params::Widget_Arrow_C_ExecuteUbergraph_Widget_Arrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Widget_Arrow.Widget_Arrow_C.BndEvt__Widget_Arrow_Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_Arrow_C::BndEvt__Widget_Arrow_Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_Arrow_C", "BndEvt__Widget_Arrow_Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Widget_Arrow.Widget_Arrow_C.InitWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ParamFlag                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Arrow_C::InitWidget(int32 ParamFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_Arrow_C", "InitWidget");

	Params::Widget_Arrow_C_InitWidget Parms{};

	Parms.ParamFlag = ParamFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Widget_Arrow.Widget_Arrow_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FKeyEvent&                 InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_Arrow_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_Arrow_C", "OnKeyDown");

	Params::Widget_Arrow_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Widget_Arrow.Widget_Arrow_C.SetButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Style                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Arrow_C::SetButtonStyle(int32 Style)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_Arrow_C", "SetButtonStyle");

	Params::Widget_Arrow_C_SetButtonStyle Parms{};

	Parms.Style = Style;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
