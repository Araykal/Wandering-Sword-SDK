#pragma once



// Package: VE_JHVolumeAdjustPanel2

#include "Basic.hpp"

#include "VE_JHVolumeAdjustPanel2_classes.hpp"
#include "VE_JHVolumeAdjustPanel2_parameters.hpp"


SDK_NAMESPACE_START

// Function VE_JHVolumeAdjustPanel2.VE_JHVolumeAdjustPanel2_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UVE_JHVolumeAdjustPanel2_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VE_JHVolumeAdjustPanel2_C", "OnMouseButtonDown_0");

	Params::VE_JHVolumeAdjustPanel2_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
