#pragma once



// Package: BPMV_JHBattleModule

#include "Basic.hpp"

#include "BPMV_JHBattleModule_classes.hpp"
#include "BPMV_JHBattleModule_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.ExecuteUbergraph_BPMV_JHBattleModule
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHBattleModule_C::ExecuteUbergraph_BPMV_JHBattleModule(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "ExecuteUbergraph_BPMV_JHBattleModule");

	Params::BPMV_JHBattleModule_C_ExecuteUbergraph_BPMV_JHBattleModule Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.BndEvt__BPMV_JHBattleModule_BTN_SkipArena_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBattleModule_C::BndEvt__BPMV_JHBattleModule_BTN_SkipArena_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "BndEvt__BPMV_JHBattleModule_BTN_SkipArena_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.EVT_UpdateSkipButtonVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_JHBattleModule_C::EVT_UpdateSkipButtonVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "EVT_UpdateSkipButtonVisibility");

	Params::BPMV_JHBattleModule_C_EVT_UpdateSkipButtonVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_JHBattleModule_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_JHBattleModule_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.EVT_UpdateTowerVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_JHBattleModule_C::EVT_UpdateTowerVisibility(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "EVT_UpdateTowerVisibility");

	Params::BPMV_JHBattleModule_C_EVT_UpdateTowerVisibility Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.EVT_SetArenaControlPanelVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_JHBattleModule_C::EVT_SetArenaControlPanelVisibility(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "EVT_SetArenaControlPanelVisibility");

	Params::BPMV_JHBattleModule_C_EVT_SetArenaControlPanelVisibility Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.EVT_UpdateAutoBattleBtnStatus
// (Event, Public, BlueprintEvent)

void UBPMV_JHBattleModule_C::EVT_UpdateAutoBattleBtnStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "EVT_UpdateAutoBattleBtnStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.BndEvt__BPMV_JHBattleModule_BTN_AutoBattle_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBattleModule_C::BndEvt__BPMV_JHBattleModule_BTN_AutoBattle_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "BndEvt__BPMV_JHBattleModule_BTN_AutoBattle_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.BndEvt__BPMV_JHBattleModule_BTN_AutoBattle_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBattleModule_C::BndEvt__BPMV_JHBattleModule_BTN_AutoBattle_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "BndEvt__BPMV_JHBattleModule_BTN_AutoBattle_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.EVT_UpdateSpeedUpBtnStatus
// (Event, Public, BlueprintEvent)

void UBPMV_JHBattleModule_C::EVT_UpdateSpeedUpBtnStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "EVT_UpdateSpeedUpBtnStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.BndEvt__BPMV_JHBattleModule_BTN_SpeedUp1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBattleModule_C::BndEvt__BPMV_JHBattleModule_BTN_SpeedUp1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "BndEvt__BPMV_JHBattleModule_BTN_SpeedUp1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.BndEvt__BPMV_JHBattleModule_NeoUIButtonBase_59_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBattleModule_C::BndEvt__BPMV_JHBattleModule_NeoUIButtonBase_59_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "BndEvt__BPMV_JHBattleModule_NeoUIButtonBase_59_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.EVT_PrintKeyMsg
// (BlueprintEvent)
// Parameters:
// const ENeoUIGamepadButtonType           BType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   EvtType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHBattleModule_C::EVT_PrintKeyMsg(const ENeoUIGamepadButtonType BType, int32 EvtType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "EVT_PrintKeyMsg");

	Params::BPMV_JHBattleModule_C_EVT_PrintKeyMsg Parms{};

	Parms.BType = BType;
	Parms.EvtType = EvtType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.EVT_HideAllExcept_UltimateSkill
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    HideFlag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_JHBattleModule_C::EVT_HideAllExcept_UltimateSkill(bool HideFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "EVT_HideAllExcept_UltimateSkill");

	Params::BPMV_JHBattleModule_C_EVT_HideAllExcept_UltimateSkill Parms{};

	Parms.HideFlag = HideFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.EVT_UpdateGamepadActiveBGStatus
// (Event, Public, BlueprintEvent)

void UBPMV_JHBattleModule_C::EVT_UpdateGamepadActiveBGStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "EVT_UpdateGamepadActiveBGStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_JHBattleModule_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.BndEvt__BPMV_JHBattleModule_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBattleModule_C::BndEvt__BPMV_JHBattleModule_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "BndEvt__BPMV_JHBattleModule_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.BndEvt__BPMV_JHBattleModule_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHBattleModule_C::BndEvt__BPMV_JHBattleModule_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "BndEvt__BPMV_JHBattleModule_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.ReceiveModuleMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             MessageHeader                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnyTypeUniversalPointerBase*     MessageBody                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHBattleModule_C::ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "ReceiveModuleMessage");

	Params::BPMV_JHBattleModule_C_ReceiveModuleMessage Parms{};

	Parms.MessageHeader = MessageHeader;
	Parms.MessageBody = MessageBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_JHBattleModule_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHBattleModule.BPMV_JHBattleModule_C.On_DisableMask_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_JHBattleModule_C::On_DisableMask_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHBattleModule_C", "On_DisableMask_MouseButtonDown_0");

	Params::BPMV_JHBattleModule_C_On_DisableMask_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
