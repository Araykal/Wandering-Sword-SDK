#pragma once



// Package: JHGHC_PropRegion

#include "Basic.hpp"

#include "JHGHC_PropRegion_classes.hpp"
#include "JHGHC_PropRegion_parameters.hpp"


SDK_NAMESPACE_START

// Function JHGHC_PropRegion.JHGHC_PropRegion_C.ExecuteUbergraph_JHGHC_PropRegion
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHGHC_PropRegion_C::ExecuteUbergraph_JHGHC_PropRegion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_PropRegion_C", "ExecuteUbergraph_JHGHC_PropRegion");

	Params::JHGHC_PropRegion_C_ExecuteUbergraph_JHGHC_PropRegion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGHC_PropRegion.JHGHC_PropRegion_C.BndEvt__JHGHC_PropRegion_VE_Title_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UJHGHC_PropRegion_C::BndEvt__JHGHC_PropRegion_VE_Title_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_PropRegion_C", "BndEvt__JHGHC_PropRegion_VE_Title_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JHGHC_PropRegion.JHGHC_PropRegion_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJHGHC_PropRegion_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_PropRegion_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JHGHC_PropRegion.JHGHC_PropRegion_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UJHGHC_PropRegion_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_PropRegion_C", "OnMouseButtonDown_0");

	Params::JHGHC_PropRegion_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
