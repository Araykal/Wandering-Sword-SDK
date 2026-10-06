#pragma once



// Package: WBP_NPCTopName

#include "Basic.hpp"

#include "WBP_NPCTopName_classes.hpp"
#include "WBP_NPCTopName_parameters.hpp"


SDK_NAMESPACE_START

// Function WBP_NPCTopName.WBP_NPCTopName_C.ExecuteUbergraph_WBP_NPCTopName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPCTopName_C::ExecuteUbergraph_WBP_NPCTopName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NPCTopName_C", "ExecuteUbergraph_WBP_NPCTopName");

	Params::WBP_NPCTopName_C_ExecuteUbergraph_WBP_NPCTopName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NPCTopName.WBP_NPCTopName_C.BP_SetNPCQuestStateImg
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D*                       IMG                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPCTopName_C::BP_SetNPCQuestStateImg(class UTexture2D* IMG)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NPCTopName_C", "BP_SetNPCQuestStateImg");

	Params::WBP_NPCTopName_C_BP_SetNPCQuestStateImg Parms{};

	Parms.IMG = IMG;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NPCTopName.WBP_NPCTopName_C.SetColor
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              NewColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPCTopName_C::SetColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NPCTopName_C", "SetColor");

	Params::WBP_NPCTopName_C_SetColor Parms{};

	Parms.NewColor = std::move(NewColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NPCTopName.WBP_NPCTopName_C.ShowName
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      InName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTexture2D*                       FunctionImage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPCTopName_C::ShowName(const class FText& InName, class UTexture2D* FunctionImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NPCTopName_C", "ShowName");

	Params::WBP_NPCTopName_C_ShowName Parms{};

	Parms.InName = std::move(InName);
	Parms.FunctionImage = FunctionImage;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
