#pragma once



// Package: BP_MonkeyDance

#include "Basic.hpp"

#include "BP_MonkeyDance_classes.hpp"
#include "BP_MonkeyDance_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_MonkeyDance.BP_MonkeyDance_C.ExecuteUbergraph_BP_MonkeyDance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonkeyDance_C::ExecuteUbergraph_BP_MonkeyDance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonkeyDance_C", "ExecuteUbergraph_BP_MonkeyDance");

	Params::BP_MonkeyDance_C_ExecuteUbergraph_BP_MonkeyDance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonkeyDance.BP_MonkeyDance_C.BP_PopUpOptions
// (Event, Public, BlueprintEvent)

void ABP_MonkeyDance_C::BP_PopUpOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonkeyDance_C", "BP_PopUpOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonkeyDance.BP_MonkeyDance_C.BP_ToIdldAnim
// (Event, Public, BlueprintEvent)

void ABP_MonkeyDance_C::BP_ToIdldAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonkeyDance_C", "BP_ToIdldAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonkeyDance.BP_MonkeyDance_C.BP_MonkeyFailAction
// (Event, Public, BlueprintEvent)

void ABP_MonkeyDance_C::BP_MonkeyFailAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonkeyDance_C", "BP_MonkeyFailAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonkeyDance.BP_MonkeyDance_C.BP_MonkeySussAction
// (Event, Public, BlueprintEvent)

void ABP_MonkeyDance_C::BP_MonkeySussAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonkeyDance_C", "BP_MonkeySussAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonkeyDance.BP_MonkeyDance_C.OnDlgClosed_ECA344A044C65D126420B192586DC656
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonkeyDance_C::OnDlgClosed_ECA344A044C65D126420B192586DC656(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonkeyDance_C", "OnDlgClosed_ECA344A044C65D126420B192586DC656");

	Params::BP_MonkeyDance_C_OnDlgClosed_ECA344A044C65D126420B192586DC656 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonkeyDance.BP_MonkeyDance_C.OnDlgSelectedOption_ECA344A044C65D126420B192586DC656
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonkeyDance_C::OnDlgSelectedOption_ECA344A044C65D126420B192586DC656(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonkeyDance_C", "OnDlgSelectedOption_ECA344A044C65D126420B192586DC656");

	Params::BP_MonkeyDance_C_OnDlgSelectedOption_ECA344A044C65D126420B192586DC656 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonkeyDance.BP_MonkeyDance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MonkeyDance_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonkeyDance_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
