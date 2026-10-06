#pragma once



// Package: BTS_CacheHeroPoint

#include "Basic.hpp"

#include "BTS_CacheHeroPoint_classes.hpp"
#include "BTS_CacheHeroPoint_parameters.hpp"


SDK_NAMESPACE_START

// Function BTS_CacheHeroPoint.BTS_CacheHeroPoint_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController_ReceiveActivationAI                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn_ReceiveActivationAI                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_CacheHeroPoint_C::ReceiveActivationAI(class AAIController* OwnerController_ReceiveActivationAI, class APawn* ControlledPawn_ReceiveActivationAI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_CacheHeroPoint_C", "ReceiveActivationAI");

	Params::BTS_CacheHeroPoint_C_ReceiveActivationAI Parms{};

	Parms.OwnerController_ReceiveActivationAI = OwnerController_ReceiveActivationAI;
	Parms.ControlledPawn_ReceiveActivationAI = ControlledPawn_ReceiveActivationAI;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_CacheHeroPoint.BTS_CacheHeroPoint_C.ExecuteUbergraph_BTS_CacheHeroPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_CacheHeroPoint_C::ExecuteUbergraph_BTS_CacheHeroPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_CacheHeroPoint_C", "ExecuteUbergraph_BTS_CacheHeroPoint");

	Params::BTS_CacheHeroPoint_C_ExecuteUbergraph_BTS_CacheHeroPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_CacheHeroPoint.BTS_CacheHeroPoint_C.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_CacheHeroPoint_C::ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_CacheHeroPoint_C", "ReceiveSearchStartAI");

	Params::BTS_CacheHeroPoint_C_ReceiveSearchStartAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
