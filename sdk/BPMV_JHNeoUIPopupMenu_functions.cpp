#pragma once



// Package: BPMV_JHNeoUIPopupMenu

#include "Basic.hpp"

#include "BPMV_JHNeoUIPopupMenu_classes.hpp"
#include "BPMV_JHNeoUIPopupMenu_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHNeoUIPopupMenu.BPMV_JHNeoUIPopupMenu_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_JHNeoUIPopupMenu_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHNeoUIPopupMenu_C", "OnMouseButtonDown_0");

	Params::BPMV_JHNeoUIPopupMenu_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
