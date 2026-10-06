#pragma once



// Package: BPVE_BattleInfoProficiency

#include "Basic.hpp"

#include "BPVE_BattleInfoProficiency_classes.hpp"
#include "BPVE_BattleInfoProficiency_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_BattleInfoProficiency.BPVE_BattleInfoProficiency_C.SetIconImg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_BattleInfoProficiency_C::SetIconImg(class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleInfoProficiency_C", "SetIconImg");

	Params::BPVE_BattleInfoProficiency_C_SetIconImg Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_BattleInfoProficiency.BPVE_BattleInfoProficiency_C.Get Tool Tip Widget 0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_BattleInfoProficiency_C::Get_Tool_Tip_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_BattleInfoProficiency_C", "Get Tool Tip Widget 0");

	Params::BPVE_BattleInfoProficiency_C_Get_Tool_Tip_Widget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
