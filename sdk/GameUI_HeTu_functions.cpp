#pragma once



// Package: GameUI_HeTu

#include "Basic.hpp"

#include "GameUI_HeTu_classes.hpp"
#include "GameUI_HeTu_parameters.hpp"


SDK_NAMESPACE_START

// Function GameUI_HeTu.GameUI_HeTu_C.ExecuteUbergraph_GameUI_HeTu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameUI_HeTu_C::ExecuteUbergraph_GameUI_HeTu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_HeTu_C", "ExecuteUbergraph_GameUI_HeTu");

	Params::GameUI_HeTu_C_ExecuteUbergraph_GameUI_HeTu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameUI_HeTu.GameUI_HeTu_C.BndEvt__GameUI_HeTu_BTN_Right_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGameUI_HeTu_C::BndEvt__GameUI_HeTu_BTN_Right_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_HeTu_C", "BndEvt__GameUI_HeTu_BTN_Right_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GameUI_HeTu.GameUI_HeTu_C.BndEvt__GameUI_HeTu_BTN_Left_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGameUI_HeTu_C::BndEvt__GameUI_HeTu_BTN_Left_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_HeTu_C", "BndEvt__GameUI_HeTu_BTN_Left_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GameUI_HeTu.GameUI_HeTu_C.EVT_UpdateTutorialBtnHighlight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHighlight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameUI_HeTu_C::EVT_UpdateTutorialBtnHighlight(bool bHighlight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_HeTu_C", "EVT_UpdateTutorialBtnHighlight");

	Params::GameUI_HeTu_C_EVT_UpdateTutorialBtnHighlight Parms{};

	Parms.bHighlight = bHighlight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameUI_HeTu.GameUI_HeTu_C.BndEvt__GameUI_HeTu_JHCommon_Btn_Free_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UGameUI_HeTu_C::BndEvt__GameUI_HeTu_JHCommon_Btn_Free_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_HeTu_C", "BndEvt__GameUI_HeTu_JHCommon_Btn_Free_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GameUI_HeTu.GameUI_HeTu_C.BndEvt__GameUI_HeTu_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameUI_HeTu_C::BndEvt__GameUI_HeTu_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_HeTu_C", "BndEvt__GameUI_HeTu_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::GameUI_HeTu_C_BndEvt__GameUI_HeTu_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameUI_HeTu.GameUI_HeTu_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UGameUI_HeTu_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_HeTu_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GameUI_HeTu.GameUI_HeTu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameUI_HeTu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameUI_HeTu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
