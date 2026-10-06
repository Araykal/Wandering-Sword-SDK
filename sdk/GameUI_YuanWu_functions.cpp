#pragma once



// Package: GameUI_YuanWu

#include "Basic.hpp"

#include "GameUI_YuanWu_classes.hpp"
#include "GameUI_YuanWu_parameters.hpp"


SDK_NAMESPACE_START

// Function GameUI_YuanWu.GameUI_YuanWu_C.ExecuteUbergraph_GameUI_YuanWu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameUI_YuanWu_C::ExecuteUbergraph_GameUI_YuanWu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_YuanWu_C", "ExecuteUbergraph_GameUI_YuanWu");

	Params::GameUI_YuanWu_C_ExecuteUbergraph_GameUI_YuanWu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameUI_YuanWu.GameUI_YuanWu_C.EVT_VisualConstruct
// (Event, Public, BlueprintEvent)

void UGameUI_YuanWu_C::EVT_VisualConstruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_YuanWu_C", "EVT_VisualConstruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GameUI_YuanWu.GameUI_YuanWu_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UGameUI_YuanWu_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_YuanWu_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
