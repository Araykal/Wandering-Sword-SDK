#pragma once



// Package: BPVE_SkillCoreCell_Equiped

#include "Basic.hpp"

#include "BPVE_SkillCoreCell_Equiped_classes.hpp"
#include "BPVE_SkillCoreCell_Equiped_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_SkillCoreCell_Equiped.BPVE_SkillCoreCell_Equiped_C.ExecuteUbergraph_BPVE_SkillCoreCell_Equiped
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SkillCoreCell_Equiped_C::ExecuteUbergraph_BPVE_SkillCoreCell_Equiped(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCell_Equiped_C", "ExecuteUbergraph_BPVE_SkillCoreCell_Equiped");

	Params::BPVE_SkillCoreCell_Equiped_C_ExecuteUbergraph_BPVE_SkillCoreCell_Equiped Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SkillCoreCell_Equiped.BPVE_SkillCoreCell_Equiped_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_SkillCoreCell_Equiped_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCell_Equiped_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SkillCoreCell_Equiped.BPVE_SkillCoreCell_Equiped_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_SkillCoreCell_Equiped_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCell_Equiped_C", "OnFocusReceived");

	Params::BPVE_SkillCoreCell_Equiped_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
