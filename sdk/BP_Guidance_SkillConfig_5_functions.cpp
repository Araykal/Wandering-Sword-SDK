#pragma once



// Package: BP_Guidance_SkillConfig_5

#include "Basic.hpp"

#include "BP_Guidance_SkillConfig_5_classes.hpp"
#include "BP_Guidance_SkillConfig_5_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_Guidance_SkillConfig_5.BP_Guidance_SkillConfig_5_C.ExecuteUbergraph_BP_Guidance_SkillConfig_5
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Guidance_SkillConfig_5_C::ExecuteUbergraph_BP_Guidance_SkillConfig_5(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Guidance_SkillConfig_5_C", "ExecuteUbergraph_BP_Guidance_SkillConfig_5");

	Params::BP_Guidance_SkillConfig_5_C_ExecuteUbergraph_BP_Guidance_SkillConfig_5 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Guidance_SkillConfig_5.BP_Guidance_SkillConfig_5_C.EVT_DelayResized
// (Event, Public, BlueprintEvent)

void UBP_Guidance_SkillConfig_5_C::EVT_DelayResized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Guidance_SkillConfig_5_C", "EVT_DelayResized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Guidance_SkillConfig_5.BP_Guidance_SkillConfig_5_C.EVT_StartStep
// (Event, Public, BlueprintEvent)

void UBP_Guidance_SkillConfig_5_C::EVT_StartStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Guidance_SkillConfig_5_C", "EVT_StartStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Guidance_SkillConfig_5.BP_Guidance_SkillConfig_5_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBP_Guidance_SkillConfig_5_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Guidance_SkillConfig_5_C", "OnMouseButtonDown_0");

	Params::BP_Guidance_SkillConfig_5_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
