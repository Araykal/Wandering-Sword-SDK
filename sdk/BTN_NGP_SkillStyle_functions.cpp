#pragma once



// Package: BTN_NGP_SkillStyle

#include "Basic.hpp"

#include "BTN_NGP_SkillStyle_classes.hpp"
#include "BTN_NGP_SkillStyle_parameters.hpp"


SDK_NAMESPACE_START

// Function BTN_NGP_SkillStyle.BTN_NGP_SkillStyle_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBTN_NGP_SkillStyle_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTN_NGP_SkillStyle_C", "OnMouseButtonDown_0");

	Params::BTN_NGP_SkillStyle_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
