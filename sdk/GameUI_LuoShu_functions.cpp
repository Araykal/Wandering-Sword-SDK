#pragma once



// Package: GameUI_LuoShu

#include "Basic.hpp"

#include "GameUI_LuoShu_classes.hpp"
#include "GameUI_LuoShu_parameters.hpp"


SDK_NAMESPACE_START

// Function GameUI_LuoShu.GameUI_LuoShu_C.ExecuteUbergraph_GameUI_LuoShu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameUI_LuoShu_C::ExecuteUbergraph_GameUI_LuoShu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_LuoShu_C", "ExecuteUbergraph_GameUI_LuoShu");

	Params::GameUI_LuoShu_C_ExecuteUbergraph_GameUI_LuoShu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameUI_LuoShu.GameUI_LuoShu_C.EVT_UpdateTutorialBtnHighlight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHighlight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameUI_LuoShu_C::EVT_UpdateTutorialBtnHighlight(bool bHighlight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_LuoShu_C", "EVT_UpdateTutorialBtnHighlight");

	Params::GameUI_LuoShu_C_EVT_UpdateTutorialBtnHighlight Parms{};

	Parms.bHighlight = bHighlight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameUI_LuoShu.GameUI_LuoShu_C.BndEvt__GameUI_LuoShu_JHGPCBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameUI_LuoShu_C::BndEvt__GameUI_LuoShu_JHGPCBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_LuoShu_C", "BndEvt__GameUI_LuoShu_JHGPCBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::GameUI_LuoShu_C_BndEvt__GameUI_LuoShu_JHGPCBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameUI_LuoShu.GameUI_LuoShu_C.BndEvt__GameUI_LuoShu_JHCommon_Btn_Free_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UGameUI_LuoShu_C::BndEvt__GameUI_LuoShu_JHCommon_Btn_Free_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_LuoShu_C", "BndEvt__GameUI_LuoShu_JHCommon_Btn_Free_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GameUI_LuoShu.GameUI_LuoShu_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UGameUI_LuoShu_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_LuoShu_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GameUI_LuoShu.GameUI_LuoShu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameUI_LuoShu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_LuoShu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
