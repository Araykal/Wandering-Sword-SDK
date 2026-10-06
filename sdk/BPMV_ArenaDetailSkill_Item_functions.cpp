#pragma once



// Package: BPMV_ArenaDetailSkill_Item

#include "Basic.hpp"

#include "BPMV_ArenaDetailSkill_Item_classes.hpp"
#include "BPMV_ArenaDetailSkill_Item_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_ArenaDetailSkill_Item.BPMV_ArenaDetailSkill_Item_C.ExecuteUbergraph_BPMV_ArenaDetailSkill_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_ArenaDetailSkill_Item_C::ExecuteUbergraph_BPMV_ArenaDetailSkill_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_Item_C", "ExecuteUbergraph_BPMV_ArenaDetailSkill_Item");

	Params::BPMV_ArenaDetailSkill_Item_C_ExecuteUbergraph_BPMV_ArenaDetailSkill_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_ArenaDetailSkill_Item.BPMV_ArenaDetailSkill_Item_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPMV_ArenaDetailSkill_Item_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_Item_C", "EVT_GamepadShowTips");

	Params::BPMV_ArenaDetailSkill_Item_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_ArenaDetailSkill_Item.BPMV_ArenaDetailSkill_Item_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_ArenaDetailSkill_Item_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_Item_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ArenaDetailSkill_Item.BPMV_ArenaDetailSkill_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_ArenaDetailSkill_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_ArenaDetailSkill_Item.BPMV_ArenaDetailSkill_Item_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_ArenaDetailSkill_Item_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_ArenaDetailSkill_Item_C", "GetToolTipWidget_0");

	Params::BPMV_ArenaDetailSkill_Item_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
