#pragma once



// Package: Widget_MonkeyBottonTip

#include "Basic.hpp"

#include "Widget_MonkeyBottonTip_classes.hpp"
#include "Widget_MonkeyBottonTip_parameters.hpp"


SDK_NAMESPACE_START

// Function Widget_MonkeyBottonTip.Widget_MonkeyBottonTip_C.ExecuteUbergraph_Widget_MonkeyBottonTip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MonkeyBottonTip_C::ExecuteUbergraph_Widget_MonkeyBottonTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_MonkeyBottonTip_C", "ExecuteUbergraph_Widget_MonkeyBottonTip");

	Params::Widget_MonkeyBottonTip_C_ExecuteUbergraph_Widget_MonkeyBottonTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Widget_MonkeyBottonTip.Widget_MonkeyBottonTip_C.ClearChildren
// (BlueprintCallable, BlueprintEvent)

void UWidget_MonkeyBottonTip_C::ClearChildren()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_MonkeyBottonTip_C", "ClearChildren");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Widget_MonkeyBottonTip.Widget_MonkeyBottonTip_C.AddDanceStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Content                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MonkeyBottonTip_C::AddDanceStep(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_MonkeyBottonTip_C", "AddDanceStep");

	Params::Widget_MonkeyBottonTip_C_AddDanceStep Parms{};

	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
