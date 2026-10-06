#pragma once



// Package: BPVE_RecipeMaterial

#include "Basic.hpp"

#include "BPVE_RecipeMaterial_classes.hpp"
#include "BPVE_RecipeMaterial_parameters.hpp"


SDK_NAMESPACE_START

// Function BPVE_RecipeMaterial.BPVE_RecipeMaterial_C.ExecuteUbergraph_BPVE_RecipeMaterial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPVE_RecipeMaterial_C::ExecuteUbergraph_BPVE_RecipeMaterial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RecipeMaterial_C", "ExecuteUbergraph_BPVE_RecipeMaterial");

	Params::BPVE_RecipeMaterial_C_ExecuteUbergraph_BPVE_RecipeMaterial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_RecipeMaterial.BPVE_RecipeMaterial_C.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    strFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPVE_RecipeMaterial_C::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RecipeMaterial_C", "EVT_GamepadShowTips");

	Params::BPVE_RecipeMaterial_C_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPVE_RecipeMaterial.BPVE_RecipeMaterial_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPVE_RecipeMaterial_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RecipeMaterial_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_RecipeMaterial.BPVE_RecipeMaterial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPVE_RecipeMaterial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RecipeMaterial_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPVE_RecipeMaterial.BPVE_RecipeMaterial_C.Get_HotArea_ToolTip_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPVE_RecipeMaterial_C::Get_HotArea_ToolTip_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPVE_RecipeMaterial_C", "Get_HotArea_ToolTip_ToolTipWidget_0");

	Params::BPVE_RecipeMaterial_C_Get_HotArea_ToolTip_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
