#pragma once



// Package: BPMV_JHSystem

#include "Basic.hpp"

#include "BPMV_JHSystem_classes.hpp"
#include "BPMV_JHSystem_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHSystem.BPMV_JHSystem_C.ExecuteUbergraph_BPMV_JHSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHSystem_C::ExecuteUbergraph_BPMV_JHSystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "ExecuteUbergraph_BPMV_JHSystem");

	Params::BPMV_JHSystem_C_ExecuteUbergraph_BPMV_JHSystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_JHSystem_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_JHSystem_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_LINE_Continue_K2Node_ComponentBoundEvent_1_EVT_BTN_CLICK__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_LINE_Continue_K2Node_ComponentBoundEvent_1_EVT_BTN_CLICK__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_LINE_Continue_K2Node_ComponentBoundEvent_1_EVT_BTN_CLICK__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_JHSystem_C::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "EVT_FocusWidgetForScenario");

	Params::BPMV_JHSystem_C_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.EVT_AppendActiveAreaArr
// (Event, Public, BlueprintEvent)

void UBPMV_JHSystem_C::EVT_AppendActiveAreaArr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "EVT_AppendActiveAreaArr");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_LineExit_K2Node_ComponentBoundEvent_14_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_BTN_LineExit_K2Node_ComponentBoundEvent_14_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_BTN_LineExit_K2Node_ComponentBoundEvent_14_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_LineExit_K2Node_ComponentBoundEvent_14_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Return_K2Node_ComponentBoundEvent_13_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_BTN_Return_K2Node_ComponentBoundEvent_13_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_BTN_Return_K2Node_ComponentBoundEvent_13_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Return_K2Node_ComponentBoundEvent_13_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Tutorial_K2Node_ComponentBoundEvent_12_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_BTN_Tutorial_K2Node_ComponentBoundEvent_12_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_BTN_Tutorial_K2Node_ComponentBoundEvent_12_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Tutorial_K2Node_ComponentBoundEvent_12_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Setting_K2Node_ComponentBoundEvent_11_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_BTN_Setting_K2Node_ComponentBoundEvent_11_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_BTN_Setting_K2Node_ComponentBoundEvent_11_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Setting_K2Node_ComponentBoundEvent_11_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Load_K2Node_ComponentBoundEvent_10_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_BTN_Load_K2Node_ComponentBoundEvent_10_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_BTN_Load_K2Node_ComponentBoundEvent_10_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Load_K2Node_ComponentBoundEvent_10_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Save_K2Node_ComponentBoundEvent_9_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_BTN_Save_K2Node_ComponentBoundEvent_9_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_BTN_Save_K2Node_ComponentBoundEvent_9_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Save_K2Node_ComponentBoundEvent_9_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_Continue_K2Node_ComponentBoundEvent_8_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_BTN_Continue_K2Node_ComponentBoundEvent_8_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_BTN_Continue_K2Node_ComponentBoundEvent_8_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_JHSystem_C_BndEvt__BPMV_JHSystem_BTN_Continue_K2Node_ComponentBoundEvent_8_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_LINE_Tutorial_K2Node_ComponentBoundEvent_7_EVT_BTN_CLICK__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_LINE_Tutorial_K2Node_ComponentBoundEvent_7_EVT_BTN_CLICK__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_LINE_Tutorial_K2Node_ComponentBoundEvent_7_EVT_BTN_CLICK__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_BTN_EXIT_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_BTN_EXIT_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_BTN_EXIT_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_JHSystem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHSystem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "Tick");

	Params::BPMV_JHSystem_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_LINE_Exit_K2Node_ComponentBoundEvent_0_EVT_BTN_CLICK__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_LINE_Exit_K2Node_ComponentBoundEvent_0_EVT_BTN_CLICK__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_LINE_Exit_K2Node_ComponentBoundEvent_0_EVT_BTN_CLICK__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_LINE_Return_K2Node_ComponentBoundEvent_5_EVT_BTN_CLICK__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_LINE_Return_K2Node_ComponentBoundEvent_5_EVT_BTN_CLICK__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_LINE_Return_K2Node_ComponentBoundEvent_5_EVT_BTN_CLICK__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_LINE_Setting_K2Node_ComponentBoundEvent_4_EVT_BTN_CLICK__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_LINE_Setting_K2Node_ComponentBoundEvent_4_EVT_BTN_CLICK__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_LINE_Setting_K2Node_ComponentBoundEvent_4_EVT_BTN_CLICK__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_LINE_Load_K2Node_ComponentBoundEvent_3_EVT_BTN_CLICK__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_LINE_Load_K2Node_ComponentBoundEvent_3_EVT_BTN_CLICK__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_LINE_Load_K2Node_ComponentBoundEvent_3_EVT_BTN_CLICK__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHSystem.BPMV_JHSystem_C.BndEvt__BPMV_JHSystem_LINE_Save_K2Node_ComponentBoundEvent_2_EVT_BTN_CLICK__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHSystem_C::BndEvt__BPMV_JHSystem_LINE_Save_K2Node_ComponentBoundEvent_2_EVT_BTN_CLICK__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHSystem_C", "BndEvt__BPMV_JHSystem_LINE_Save_K2Node_ComponentBoundEvent_2_EVT_BTN_CLICK__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
