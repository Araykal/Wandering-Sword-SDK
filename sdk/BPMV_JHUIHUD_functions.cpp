#pragma once



// Package: BPMV_JHUIHUD

#include "Basic.hpp"

#include "BPMV_JHUIHUD_classes.hpp"
#include "BPMV_JHUIHUD_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.ExecuteUbergraph_BPMV_JHUIHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::ExecuteUbergraph_BPMV_JHUIHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "ExecuteUbergraph_BPMV_JHUIHUD");

	Params::BPMV_JHUIHUD_C_ExecuteUbergraph_BPMV_JHUIHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.HandleFSModuleHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StyleFlag                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::HandleFSModuleHide(int32 StyleFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "HandleFSModuleHide");

	Params::BPMV_JHUIHUD_C_HandleFSModuleHide Parms{};

	Parms.StyleFlag = StyleFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnClusterFinished_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::OnClusterFinished_Event_0(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "OnClusterFinished_Event_0");

	Params::BPMV_JHUIHUD_C_OnClusterFinished_Event_0 Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnProgressEnd_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::OnProgressEnd_Event_0(int32 Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "OnProgressEnd_Event_0");

	Params::BPMV_JHUIHUD_C_OnProgressEnd_Event_0 Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_JHUIHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnPortraitChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             NewAvatarName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::OnPortraitChanged_Event_0(int32 NPCId, bool bNext, class FName NewAvatarName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "OnPortraitChanged_Event_0");

	Params::BPMV_JHUIHUD_C_OnPortraitChanged_Event_0 Parms{};

	Parms.NPCId = NPCId;
	Parms.bNext = bNext;
	Parms.NewAvatarName = NewAvatarName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.GuidanceEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::GuidanceEnd(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "GuidanceEnd");

	Params::BPMV_JHUIHUD_C_GuidanceEnd Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_JHUIHUD_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnGamepadKeyPressed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ENeoUIGamepadButtonType                 ButtonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::OnGamepadKeyPressed_Event_0(ENeoUIGamepadButtonType ButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "OnGamepadKeyPressed_Event_0");

	Params::BPMV_JHUIHUD_C_OnGamepadKeyPressed_Event_0 Parms{};

	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.BndEvt__BPMV_JHUIHUD_Button_72_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHUIHUD_C::BndEvt__BPMV_JHUIHUD_Button_72_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "BndEvt__BPMV_JHUIHUD_Button_72_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnDialogueVisibilityChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::OnDialogueVisibilityChanged_Event_0(int32 Status, int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "OnDialogueVisibilityChanged_Event_0");

	Params::BPMV_JHUIHUD_C_OnDialogueVisibilityChanged_Event_0 Parms{};

	Parms.Status = Status;
	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.ReceiveModuleMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             MessageHeader                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnyTypeUniversalPointerBase*     MessageBody                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "ReceiveModuleMessage");

	Params::BPMV_JHUIHUD_C_ReceiveModuleMessage Parms{};

	Parms.MessageHeader = MessageHeader;
	Parms.MessageBody = MessageBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.FullscreenScrollHideEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ContentFlag                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::FullscreenScrollHideEvent(int32 ContentFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "FullscreenScrollHideEvent");

	Params::BPMV_JHUIHUD_C_FullscreenScrollHideEvent Parms{};

	Parms.ContentFlag = ContentFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.EVT_SetCursor_Selling
// (Event, Public, BlueprintEvent)

void UBPMV_JHUIHUD_C::EVT_SetCursor_Selling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "EVT_SetCursor_Selling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.EVT_SetCursor_Decompo
// (Event, Public, BlueprintEvent)

void UBPMV_JHUIHUD_C::EVT_SetCursor_Decompo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "EVT_SetCursor_Decompo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.NeoUI_DisableInteraction
// (Event, Public, BlueprintEvent)

void UBPMV_JHUIHUD_C::NeoUI_DisableInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "NeoUI_DisableInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.NeoUI_EnableInteraction
// (Event, Public, BlueprintEvent)

void UBPMV_JHUIHUD_C::NeoUI_EnableInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "NeoUI_EnableInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.EVT_VisualConstructOnce
// (Event, Public, BlueprintEvent)

void UBPMV_JHUIHUD_C::EVT_VisualConstructOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "EVT_VisualConstructOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.BndEvt__BPMV_JHUIHUD_BTN_HUD_Debug_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHUIHUD_C::BndEvt__BPMV_JHUIHUD_BTN_HUD_Debug_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "BndEvt__BPMV_JHUIHUD_BTN_HUD_Debug_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnNGPDeparture_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FJHNeoUINGP_InheritanceResult&DepartureConfig                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPMV_JHUIHUD_C::OnNGPDeparture_Event_0(const struct FJHNeoUINGP_InheritanceResult& DepartureConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "OnNGPDeparture_Event_0");

	Params::BPMV_JHUIHUD_C_OnNGPDeparture_Event_0 Parms{};

	Parms.DepartureConfig = std::move(DepartureConfig);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnNGPModuleClosing_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::OnNGPModuleClosing_Event_0(int32 Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "OnNGPModuleClosing_Event_0");

	Params::BPMV_JHUIHUD_C_OnNGPModuleClosing_Event_0 Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.EVT_SetCursor_SkillUpgrading
// (Event, Public, BlueprintEvent)

void UBPMV_JHUIHUD_C::EVT_SetCursor_SkillUpgrading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "EVT_SetCursor_SkillUpgrading");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.BndEvt__BPMV_JHUIHUD_BTN_HUD_Debug_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPMV_JHUIHUD_C::BndEvt__BPMV_JHUIHUD_BTN_HUD_Debug_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "BndEvt__BPMV_JHUIHUD_BTN_HUD_Debug_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_JHUIHUD.BPMV_JHUIHUD_C.OnNGPSettlementModuleClosing_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_JHUIHUD_C::OnNGPSettlementModuleClosing_Event_0(int32 Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_JHUIHUD_C", "OnNGPSettlementModuleClosing_Event_0");

	Params::BPMV_JHUIHUD_C_OnNGPSettlementModuleClosing_Event_0 Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
