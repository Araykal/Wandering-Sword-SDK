#pragma once



// Package: BPVE_RoomName

#include "Basic.hpp"

#include "BPVE_RoomName_classes.hpp"
#include "BPVE_RoomName_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_RoomName.BPVE_RoomName_C.ExecuteUbergraph_BPVE_RoomName
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_RoomName_C::ExecuteUbergraph_BPVE_RoomName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RoomName_C", "ExecuteUbergraph_BPVE_RoomName");

	Params::BPVE_RoomName_C_ExecuteUbergraph_BPVE_RoomName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_RoomName.BPVE_RoomName_C.EVT_HideRoomName
// (Event, Protected, BlueprintEvent)

void UBPVE_RoomName_C::EVT_HideRoomName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RoomName_C", "EVT_HideRoomName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_RoomName.BPVE_RoomName_C.EVT_ShowRoomName
// (Event, Protected, BlueprintEvent)

void UBPVE_RoomName_C::EVT_ShowRoomName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RoomName_C", "EVT_ShowRoomName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_RoomName.BPVE_RoomName_C.CT_Root_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNeoUICanvasPanelBase*            CT_Root                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_RoomName_C::CT_Root_Event_0(class UNeoUICanvasPanelBase* CT_Root)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RoomName_C", "CT_Root_Event_0");

	Params::BPVE_RoomName_C_CT_Root_Event_0 Parms{};

	Parms.CT_Root = CT_Root;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_RoomName.BPVE_RoomName_C.SequenceEvent__ENTRYPOINTBPVE_RoomName_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNeoUICanvasPanelBase*            CT_Root                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_RoomName_C::SequenceEvent__ENTRYPOINTBPVE_RoomName_0(class UNeoUICanvasPanelBase* CT_Root)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RoomName_C", "SequenceEvent__ENTRYPOINTBPVE_RoomName_0");

	Params::BPVE_RoomName_C_SequenceEvent__ENTRYPOINTBPVE_RoomName_0 Parms{};

	Parms.CT_Root = CT_Root;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
