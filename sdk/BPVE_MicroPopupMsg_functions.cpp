#pragma once



// Package: BPVE_MicroPopupMsg

#include "Basic.hpp"

#include "BPVE_MicroPopupMsg_classes.hpp"
#include "BPVE_MicroPopupMsg_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_MicroPopupMsg.BPVE_MicroPopupMsg_C.ExecuteUbergraph_BPVE_MicroPopupMsg
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_MicroPopupMsg_C::ExecuteUbergraph_BPVE_MicroPopupMsg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MicroPopupMsg_C", "ExecuteUbergraph_BPVE_MicroPopupMsg");

	Params::BPVE_MicroPopupMsg_C_ExecuteUbergraph_BPVE_MicroPopupMsg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MicroPopupMsg.BPVE_MicroPopupMsg_C.EVT_UpdateTextColor
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FSlateColor&               Clr                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UBPVE_MicroPopupMsg_C::EVT_UpdateTextColor(const struct FSlateColor& Clr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MicroPopupMsg_C", "EVT_UpdateTextColor");

	Params::BPVE_MicroPopupMsg_C_EVT_UpdateTextColor Parms{};

	Parms.Clr = std::move(Clr);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MicroPopupMsg.BPVE_MicroPopupMsg_C.EVT_StartShow
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FJHNeoUIMicroPopupMsgItem& Msg                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UBPVE_MicroPopupMsg_C::EVT_StartShow(const struct FJHNeoUIMicroPopupMsgItem& Msg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MicroPopupMsg_C", "EVT_StartShow");

	Params::BPVE_MicroPopupMsg_C_EVT_StartShow Parms{};

	Parms.Msg = std::move(Msg);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_MicroPopupMsg.BPVE_MicroPopupMsg_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UBPVE_MicroPopupMsg_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MicroPopupMsg_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_MicroPopupMsg.BPVE_MicroPopupMsg_C.SequenceEvent__ENTRYPOINTBPVE_MicroPopupMsg_0
// (Public, BlueprintCallable, BlueprintEvent)

void UBPVE_MicroPopupMsg_C::SequenceEvent__ENTRYPOINTBPVE_MicroPopupMsg_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_MicroPopupMsg_C", "SequenceEvent__ENTRYPOINTBPVE_MicroPopupMsg_0");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
