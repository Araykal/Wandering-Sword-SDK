#pragma once



// Package: BPVE_JHNeoUIPopupMenu_Skill_Install

#include "Basic.hpp"

#include "BPVE_JHNeoUIPopupMenu_Skill_Install_classes.hpp"
#include "BPVE_JHNeoUIPopupMenu_Skill_Install_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_JHNeoUIPopupMenu_Skill_Install.BPVE_JHNeoUIPopupMenu_Skill_Install_C.ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Skill_Install
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_JHNeoUIPopupMenu_Skill_Install_C::ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Skill_Install(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHNeoUIPopupMenu_Skill_Install_C", "ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Skill_Install");

	Params::BPVE_JHNeoUIPopupMenu_Skill_Install_C_ExecuteUbergraph_BPVE_JHNeoUIPopupMenu_Skill_Install Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_JHNeoUIPopupMenu_Skill_Install.BPVE_JHNeoUIPopupMenu_Skill_Install_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_JHNeoUIPopupMenu_Skill_Install_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_JHNeoUIPopupMenu_Skill_Install_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
