#pragma once



// Package: BPVE_SkillCoreCell

#include "Basic.hpp"

#include "BPVE_SkillCoreCell_classes.hpp"
#include "BPVE_SkillCoreCell_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_SkillCoreCell.BPVE_SkillCoreCell_C.ExecuteUbergraph_BPVE_SkillCoreCell
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_SkillCoreCell_C::ExecuteUbergraph_BPVE_SkillCoreCell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCell_C", "ExecuteUbergraph_BPVE_SkillCoreCell");

	Params::BPVE_SkillCoreCell_C_ExecuteUbergraph_BPVE_SkillCoreCell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_SkillCoreCell.BPVE_SkillCoreCell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_SkillCoreCell_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCell_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_SkillCoreCell.BPVE_SkillCoreCell_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_SkillCoreCell_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillCoreCell_C", "OnFocusReceived");

	Params::BPVE_SkillCoreCell_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
