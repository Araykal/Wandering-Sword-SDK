#pragma once



// Package: JHGHC_Region_NPC

#include "Basic.hpp"

#include "JHGHC_Region_NPC_classes.hpp"
#include "JHGHC_Region_NPC_parameters.hpp"


SDK_NAMESPACE_START

// Function JHGHC_Region_NPC.JHGHC_Region_NPC_C.ExecuteUbergraph_JHGHC_Region_NPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJHGHC_Region_NPC_C::ExecuteUbergraph_JHGHC_Region_NPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_Region_NPC_C", "ExecuteUbergraph_JHGHC_Region_NPC");

	Params::JHGHC_Region_NPC_C_ExecuteUbergraph_JHGHC_Region_NPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JHGHC_Region_NPC.JHGHC_Region_NPC_C.BndEvt__JHGHC_Region_NPC_VE_Title_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UJHGHC_Region_NPC_C::BndEvt__JHGHC_Region_NPC_VE_Title_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_Region_NPC_C", "BndEvt__JHGHC_Region_NPC_VE_Title_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JHGHC_Region_NPC.JHGHC_Region_NPC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJHGHC_Region_NPC_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JHGHC_Region_NPC_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
