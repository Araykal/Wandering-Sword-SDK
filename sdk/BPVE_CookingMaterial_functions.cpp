#pragma once



// Package: BPVE_CookingMaterial

#include "Basic.hpp"

#include "BPVE_CookingMaterial_classes.hpp"
#include "BPVE_CookingMaterial_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_CookingMaterial.BPVE_CookingMaterial_C.ExecuteUbergraph_BPVE_CookingMaterial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_CookingMaterial_C::ExecuteUbergraph_BPVE_CookingMaterial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_CookingMaterial_C", "ExecuteUbergraph_BPVE_CookingMaterial");

	Params::BPVE_CookingMaterial_C_ExecuteUbergraph_BPVE_CookingMaterial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_CookingMaterial.BPVE_CookingMaterial_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_CookingMaterial_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_CookingMaterial_C", "EVT_GamepadShowTips");

	Params::BPVE_CookingMaterial_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_CookingMaterial.BPVE_CookingMaterial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_CookingMaterial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_CookingMaterial_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_CookingMaterial.BPVE_CookingMaterial_C.Get_HotArea_ToolTip_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_CookingMaterial_C::Get_HotArea_ToolTip_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_CookingMaterial_C", "Get_HotArea_ToolTip_ToolTipWidget_0");

	Params::BPVE_CookingMaterial_C_Get_HotArea_ToolTip_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
