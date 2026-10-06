#pragma once



// Package: BPMV_HUDLow

#include "Basic.hpp"

#include "BPMV_HUDLow_classes.hpp"
#include "BPMV_HUDLow_parameters.hpp"


SDK_NAMESPACE_START

// Function BPMV_HUDLow.BPMV_HUDLow_C.ExecuteUbergraph_BPMV_HUDLow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_HUDLow_C::ExecuteUbergraph_BPMV_HUDLow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "ExecuteUbergraph_BPMV_HUDLow");

	Params::BPMV_HUDLow_C_ExecuteUbergraph_BPMV_HUDLow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_HUDLow.BPMV_HUDLow_C.BndEvt__BPMV_HUDLow_IMG_EDBHint_K2Node_ComponentBoundEvent_1_OnHintMouseLeftDown__DelegateSignature
// (BlueprintEvent)

void UBPMV_HUDLow_C::BndEvt__BPMV_HUDLow_IMG_EDBHint_K2Node_ComponentBoundEvent_1_OnHintMouseLeftDown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "BndEvt__BPMV_HUDLow_IMG_EDBHint_K2Node_ComponentBoundEvent_1_OnHintMouseLeftDown__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_HUDLow.BPMV_HUDLow_C.EVT_ShowQuestFailedBadge
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      QuestName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPMV_HUDLow_C::EVT_ShowQuestFailedBadge(const class FText& QuestName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "EVT_ShowQuestFailedBadge");

	Params::BPMV_HUDLow_C_EVT_ShowQuestFailedBadge Parms{};

	Parms.QuestName = std::move(QuestName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_HUDLow.BPMV_HUDLow_C.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UBPMV_HUDLow_C::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_HUDLow.BPMV_HUDLow_C.ReceiveModuleMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             MessageHeader                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnyTypeUniversalPointerBase*     MessageBody                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPMV_HUDLow_C::ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "ReceiveModuleMessage");

	Params::BPMV_HUDLow_C_ReceiveModuleMessage Parms{};

	Parms.MessageHeader = MessageHeader;
	Parms.MessageBody = MessageBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_HUDLow.BPMV_HUDLow_C.EVT_ShowItemChangeMessage
// (Event, Public, BlueprintEvent)

void UBPMV_HUDLow_C::EVT_ShowItemChangeMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "EVT_ShowItemChangeMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_HUDLow.BPMV_HUDLow_C.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UBPMV_HUDLow_C::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_HUDLow.BPMV_HUDLow_C.EVT_ShowQuestStatusBadge
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      QuestName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPMV_HUDLow_C::EVT_ShowQuestStatusBadge(const class FText& QuestName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "EVT_ShowQuestStatusBadge");

	Params::BPMV_HUDLow_C_EVT_ShowQuestStatusBadge Parms{};

	Parms.QuestName = std::move(QuestName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_HUDLow.BPMV_HUDLow_C.EVT_ShowQuestFinishBadge
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      QuestName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPMV_HUDLow_C::EVT_ShowQuestFinishBadge(const class FText& QuestName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "EVT_ShowQuestFinishBadge");

	Params::BPMV_HUDLow_C_EVT_ShowQuestFinishBadge Parms{};

	Parms.QuestName = std::move(QuestName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPMV_HUDLow.BPMV_HUDLow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPMV_HUDLow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_HUDLow.BPMV_HUDLow_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UBPMV_HUDLow_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPMV_HUDLow.BPMV_HUDLow_C.SequenceEvent__ENTRYPOINTBPMV_HUDLow_0
// (Public, BlueprintCallable, BlueprintEvent)

void UBPMV_HUDLow_C::SequenceEvent__ENTRYPOINTBPMV_HUDLow_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPMV_HUDLow_C", "SequenceEvent__ENTRYPOINTBPMV_HUDLow_0");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
