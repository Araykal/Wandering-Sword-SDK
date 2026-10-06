#pragma once



// Package: BPMV_BattleInfo_Right

#include "Basic.hpp"

#include "BPMV_BattleInfo_Right_classes.hpp"
#include "BPMV_BattleInfo_Right_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_BattleInfo_Right.BPMV_BattleInfo_Right_C.ExecuteUbergraph_BPMV_BattleInfo_Right
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleInfo_Right_C::ExecuteUbergraph_BPMV_BattleInfo_Right(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleInfo_Right_C", "ExecuteUbergraph_BPMV_BattleInfo_Right");

	Params::BPMV_BattleInfo_Right_C_ExecuteUbergraph_BPMV_BattleInfo_Right Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleInfo_Right.BPMV_BattleInfo_Right_C.BndEvt__BPMV_BattleInfo_Left_IMG_InfoShow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_BattleInfo_Right_C::BndEvt__BPMV_BattleInfo_Left_IMG_InfoShow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleInfo_Right_C", "BndEvt__BPMV_BattleInfo_Left_IMG_InfoShow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleInfo_Right.BPMV_BattleInfo_Right_C.BndEvt__BPMV_BattleInfo_Left_IMG_D_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_BattleInfo_Right_C::BndEvt__BPMV_BattleInfo_Left_IMG_D_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleInfo_Right_C", "BndEvt__BPMV_BattleInfo_Left_IMG_D_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleInfo_Right.BPMV_BattleInfo_Right_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_BattleInfo_Right_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleInfo_Right_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleInfo_Right.BPMV_BattleInfo_Right_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_BattleInfo_Right_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleInfo_Right_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
