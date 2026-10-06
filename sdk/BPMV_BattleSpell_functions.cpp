#pragma once



// Package: BPMV_BattleSpell

#include "Basic.hpp"

#include "BPMV_BattleSpell_classes.hpp"
#include "BPMV_BattleSpell_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_BattleSpell.BPMV_BattleSpell_C.ExecuteUbergraph_BPMV_BattleSpell
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleSpell_C::ExecuteUbergraph_BPMV_BattleSpell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "ExecuteUbergraph_BPMV_BattleSpell");

	Params::BPMV_BattleSpell_C_ExecuteUbergraph_BPMV_BattleSpell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.BndEvt__BPMV_BattleSpell_BTN_Giveup_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleSpell_C::BndEvt__BPMV_BattleSpell_BTN_Giveup_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "BndEvt__BPMV_BattleSpell_BTN_Giveup_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_BattleSpell_C_BndEvt__BPMV_BattleSpell_BTN_Giveup_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UBPMV_BattleSpell_C::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPMV_BattleSpell_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.EVT_HideAllExcept_UltimateSkill
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    HideFlag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_BattleSpell_C::EVT_HideAllExcept_UltimateSkill(bool HideFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "EVT_HideAllExcept_UltimateSkill");

	Params::BPMV_BattleSpell_C_EVT_HideAllExcept_UltimateSkill Parms{};

	Parms.HideFlag = HideFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.EVT_FocusColumn
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   ColumnIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleSpell_C::EVT_FocusColumn(int32 ColumnIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "EVT_FocusColumn");

	Params::BPMV_BattleSpell_C_EVT_FocusColumn Parms{};

	Parms.ColumnIndex = ColumnIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.CT_UltraSkillAnim_CN_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNeoUICanvasPanelBase*            CT_UltraSkillAnim_CN_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleSpell_C::CT_UltraSkillAnim_CN_Event_0(class UNeoUICanvasPanelBase* CT_UltraSkillAnim_CN_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "CT_UltraSkillAnim_CN_Event_0");

	Params::BPMV_BattleSpell_C_CT_UltraSkillAnim_CN_Event_0 Parms{};

	Parms.CT_UltraSkillAnim_CN_0 = CT_UltraSkillAnim_CN_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.EVT_RetrieveControlFromArena
// (Event, Public, BlueprintEvent)

void UBPMV_BattleSpell_C::EVT_RetrieveControlFromArena()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "EVT_RetrieveControlFromArena");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.EVT_GiveControlToArena
// (Event, Public, BlueprintEvent)

void UBPMV_BattleSpell_C::EVT_GiveControlToArena()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "EVT_GiveControlToArena");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.BndEvt__BPMV_BattleSpell_BTN_Arena_Retreat_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleSpell_C::BndEvt__BPMV_BattleSpell_BTN_Arena_Retreat_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "BndEvt__BPMV_BattleSpell_BTN_Arena_Retreat_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_BattleSpell_C_BndEvt__BPMV_BattleSpell_BTN_Arena_Retreat_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.BndEvt__BPMV_BattleSpell_BTN_Arena_Rest_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UJHNeoUIGamepadConfirmButton*     Btn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleSpell_C::BndEvt__BPMV_BattleSpell_BTN_Arena_Rest_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "BndEvt__BPMV_BattleSpell_BTN_Arena_Rest_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature");

	Params::BPMV_BattleSpell_C_BndEvt__BPMV_BattleSpell_BTN_Arena_Rest_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature Parms{};

	Parms.Btn = Btn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.EVT_HideAllAnim
// (Event, Public, BlueprintEvent)

void UBPMV_BattleSpell_C::EVT_HideAllAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "EVT_HideAllAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.EVT_ShowUltraSkillAnim
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D*                       ImgTexture                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    isCN                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPMV_BattleSpell_C::EVT_ShowUltraSkillAnim(class UTexture2D* ImgTexture, bool isCN)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "EVT_ShowUltraSkillAnim");

	Params::BPMV_BattleSpell_C_EVT_ShowUltraSkillAnim Parms{};

	Parms.ImgTexture = ImgTexture;
	Parms.isCN = isCN;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.ReceiveModuleMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             MessageHeader                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnyTypeUniversalPointerBase*     MessageBody                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleSpell_C::ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "ReceiveModuleMessage");

	Params::BPMV_BattleSpell_C_ReceiveModuleMessage Parms{};

	Parms.MessageHeader = MessageHeader;
	Parms.MessageBody = MessageBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.EVT_ShowMessage
// (Event, Public, BlueprintEvent)

void UBPMV_BattleSpell_C::EVT_ShowMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "EVT_ShowMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.CT_UltraSkillAnim_EN_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNeoUICanvasPanelBase*            CT_UltraSkillAnim_EN_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleSpell_C::CT_UltraSkillAnim_EN_Event_0(class UNeoUICanvasPanelBase* CT_UltraSkillAnim_EN_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "CT_UltraSkillAnim_EN_Event_0");

	Params::BPMV_BattleSpell_C_CT_UltraSkillAnim_EN_Event_0 Parms{};

	Parms.CT_UltraSkillAnim_EN_0 = CT_UltraSkillAnim_EN_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UBPMV_BattleSpell_C::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_BattleSpell_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_BattleSpell_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_BattleSpell_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "OnMouseButtonDown");

	Params::BPMV_BattleSpell_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_BattleSpell_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "OnMouseButtonUp");

	Params::BPMV_BattleSpell_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPMV_BattleSpell_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "OnMouseMove");

	Params::BPMV_BattleSpell_C_OnMouseMove Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.Get_IMG_TaoPaoMask_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_BattleSpell_C::Get_IMG_TaoPaoMask_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "Get_IMG_TaoPaoMask_ToolTipWidget_0");

	Params::BPMV_BattleSpell_C_Get_IMG_TaoPaoMask_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.Get_BTN_Rest_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_BattleSpell_C::Get_BTN_Rest_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "Get_BTN_Rest_ToolTipWidget_0");

	Params::BPMV_BattleSpell_C_Get_BTN_Rest_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.FocusWidgetForScenario_Direct
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_BattleSpell_C::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "FocusWidgetForScenario_Direct");

	Params::BPMV_BattleSpell_C_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.GotoBtn_Neigong
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPMV_BattleSpell_C::GotoBtn_Neigong(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "GotoBtn_Neigong");

	Params::BPMV_BattleSpell_C_GotoBtn_Neigong Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.SequenceEvent__ENTRYPOINTBPMV_BattleSpell_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNeoUICanvasPanelBase*            CT_UltraSkillAnim_CN_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleSpell_C::SequenceEvent__ENTRYPOINTBPMV_BattleSpell_0(class UNeoUICanvasPanelBase* CT_UltraSkillAnim_CN_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "SequenceEvent__ENTRYPOINTBPMV_BattleSpell_0");

	Params::BPMV_BattleSpell_C_SequenceEvent__ENTRYPOINTBPMV_BattleSpell_0 Parms{};

	Parms.CT_UltraSkillAnim_CN_0 = CT_UltraSkillAnim_CN_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_BattleSpell.BPMV_BattleSpell_C.SequenceEvent__ENTRYPOINTBPMV_BattleSpell_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNeoUICanvasPanelBase*            CT_UltraSkillAnim_EN_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_BattleSpell_C::SequenceEvent__ENTRYPOINTBPMV_BattleSpell_1(class UNeoUICanvasPanelBase* CT_UltraSkillAnim_EN_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_BattleSpell_C", "SequenceEvent__ENTRYPOINTBPMV_BattleSpell_1");

	Params::BPMV_BattleSpell_C_SequenceEvent__ENTRYPOINTBPMV_BattleSpell_1 Parms{};

	Parms.CT_UltraSkillAnim_EN_0 = CT_UltraSkillAnim_EN_0;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
