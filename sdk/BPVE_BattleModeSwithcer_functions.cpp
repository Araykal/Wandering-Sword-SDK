#pragma once



// Package: BPVE_BattleModeSwithcer

#include "Basic.hpp"

#include "BPVE_BattleModeSwithcer_classes.hpp"
#include "BPVE_BattleModeSwithcer_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_BattleModeSwithcer.BPVE_BattleModeSwithcer_C.ExecuteUbergraph_BPVE_BattleModeSwithcer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleModeSwithcer_C::ExecuteUbergraph_BPVE_BattleModeSwithcer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleModeSwithcer_C", "ExecuteUbergraph_BPVE_BattleModeSwithcer");

	Params::BPVE_BattleModeSwithcer_C_ExecuteUbergraph_BPVE_BattleModeSwithcer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleModeSwithcer.BPVE_BattleModeSwithcer_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_BattleModeSwithcer_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleModeSwithcer_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_BattleModeSwithcer.BPVE_BattleModeSwithcer_C.On_IMG_IA_Realtime_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_BattleModeSwithcer_C::On_IMG_IA_Realtime_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleModeSwithcer_C", "On_IMG_IA_Realtime_MouseButtonDown_0");

	Params::BPVE_BattleModeSwithcer_C_On_IMG_IA_Realtime_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPVE_BattleModeSwithcer.BPVE_BattleModeSwithcer_C.On_IMG_IA_TurnBased_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_BattleModeSwithcer_C::On_IMG_IA_TurnBased_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleModeSwithcer_C", "On_IMG_IA_TurnBased_MouseButtonDown_0");

	Params::BPVE_BattleModeSwithcer_C_On_IMG_IA_TurnBased_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
