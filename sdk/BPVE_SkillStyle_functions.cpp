#pragma once



// Package: BPVE_SkillStyle

#include "Basic.hpp"

#include "BPVE_SkillStyle_classes.hpp"
#include "BPVE_SkillStyle_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_SkillStyle.BPVE_SkillStyle_C.ExecuteUbergraph_BPVE_SkillStyle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SkillStyle_C::ExecuteUbergraph_BPVE_SkillStyle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillStyle_C", "ExecuteUbergraph_BPVE_SkillStyle");

	Params::BPVE_SkillStyle_C_ExecuteUbergraph_BPVE_SkillStyle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SkillStyle.BPVE_SkillStyle_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPVE_SkillStyle_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillStyle_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SkillStyle.BPVE_SkillStyle_C.FirstFocusElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                         Ele                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SkillStyle_C::FirstFocusElement(class UWidget** Ele)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillStyle_C", "FirstFocusElement");

	Params::BPVE_SkillStyle_C_FirstFocusElement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ele != nullptr)
		*Ele = Parms.Ele;
}


SDK_NAMESPACE_END
