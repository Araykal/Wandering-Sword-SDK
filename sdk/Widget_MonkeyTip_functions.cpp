#pragma once



// Package: Widget_MonkeyTip

#include "Basic.hpp"

#include "Widget_MonkeyTip_classes.hpp"
#include "Widget_MonkeyTip_parameters.hpp"


SDK_NAMESPACE_START

// Function Widget_MonkeyTip.Widget_MonkeyTip_C.ExecuteUbergraph_Widget_MonkeyTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MonkeyTip_C::ExecuteUbergraph_Widget_MonkeyTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_MonkeyTip_C", "ExecuteUbergraph_Widget_MonkeyTip");

	Params::Widget_MonkeyTip_C_ExecuteUbergraph_Widget_MonkeyTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Widget_MonkeyTip.Widget_MonkeyTip_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MonkeyTip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_MonkeyTip_C", "Tick");

	Params::Widget_MonkeyTip_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Widget_MonkeyTip.Widget_MonkeyTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_MonkeyTip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_MonkeyTip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Widget_MonkeyTip.Widget_MonkeyTip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_MonkeyTip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_MonkeyTip_C", "PreConstruct");

	Params::Widget_MonkeyTip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Widget_MonkeyTip.Widget_MonkeyTip_C.Set Dance Step Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDanceType                              DanceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MonkeyTip_C::Set_Dance_Step_Index(EDanceType DanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_MonkeyTip_C", "Set Dance Step Index");

	Params::Widget_MonkeyTip_C_Set_Dance_Step_Index Parms{};

	Parms.DanceType = DanceType;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
