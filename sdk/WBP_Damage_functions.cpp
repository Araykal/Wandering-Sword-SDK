#pragma once



// Package: WBP_Damage

#include "Basic.hpp"

#include "WBP_Damage_classes.hpp"
#include "WBP_Damage_parameters.hpp"


SDK_NAMESPACE_START

// Function WBP_Damage.WBP_Damage_C.ExecuteUbergraph_WBP_Damage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Damage_C::ExecuteUbergraph_WBP_Damage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Damage_C", "ExecuteUbergraph_WBP_Damage");

	Params::WBP_Damage_C_ExecuteUbergraph_WBP_Damage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Damage.WBP_Damage_C.UpdateRenderingWords
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const TArray<class UTexture2D*>&        InWords                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   TypeMaskBits                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Damage_C::UpdateRenderingWords(const TArray<class UTexture2D*>& InWords, int32 TypeMaskBits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Damage_C", "UpdateRenderingWords");

	Params::WBP_Damage_C_UpdateRenderingWords Parms{};

	Parms.InWords = std::move(InWords);
	Parms.TypeMaskBits = TypeMaskBits;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
