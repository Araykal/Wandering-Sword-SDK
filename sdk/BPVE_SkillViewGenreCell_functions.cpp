#pragma once



// Package: BPVE_SkillViewGenreCell

#include "Basic.hpp"

#include "BPVE_SkillViewGenreCell_classes.hpp"
#include "BPVE_SkillViewGenreCell_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_SkillViewGenreCell.BPVE_SkillViewGenreCell_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPVE_SkillViewGenreCell_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_SkillViewGenreCell_C", "OnMouseButtonDown_0");

	Params::BPVE_SkillViewGenreCell_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
