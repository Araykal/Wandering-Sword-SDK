#pragma once



// Package: BP_PlayerController

#include "Basic.hpp"

#include "BP_PlayerController_classes.hpp"
#include "BP_PlayerController_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ExecuteUbergraph_BP_PlayerController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "ExecuteUbergraph_BP_PlayerController");

	Params::BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController.BP_PlayerController_C.OnPossesMoved
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            InPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnPossesMoved(class APawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "OnPossesMoved");

	Params::BP_PlayerController_C_OnPossesMoved Parms{};

	Parms.InPawn = InPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController.BP_PlayerController_C.BP_HandleOpenMiniMap
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::BP_HandleOpenMiniMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "BP_HandleOpenMiniMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_6_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::InpActEvt_Battle_Skill_6_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "InpActEvt_Battle_Skill_6_K2Node_InputActionEvent_0");

	Params::BP_PlayerController_C_InpActEvt_Battle_Skill_6_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_5_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::InpActEvt_Battle_Skill_5_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "InpActEvt_Battle_Skill_5_K2Node_InputActionEvent_1");

	Params::BP_PlayerController_C_InpActEvt_Battle_Skill_5_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_4_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::InpActEvt_Battle_Skill_4_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "InpActEvt_Battle_Skill_4_K2Node_InputActionEvent_2");

	Params::BP_PlayerController_C_InpActEvt_Battle_Skill_4_K2Node_InputActionEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_3_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::InpActEvt_Battle_Skill_3_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "InpActEvt_Battle_Skill_3_K2Node_InputActionEvent_3");

	Params::BP_PlayerController_C_InpActEvt_Battle_Skill_3_K2Node_InputActionEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_2_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::InpActEvt_Battle_Skill_2_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "InpActEvt_Battle_Skill_2_K2Node_InputActionEvent_4");

	Params::BP_PlayerController_C_InpActEvt_Battle_Skill_2_K2Node_InputActionEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Battle_Skill_1_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::InpActEvt_Battle_Skill_1_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "InpActEvt_Battle_Skill_1_K2Node_InputActionEvent_5");

	Params::BP_PlayerController_C_InpActEvt_Battle_Skill_1_K2Node_InputActionEvent_5 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "InpActEvt_LeftControl_K2Node_InputKeyEvent_0");

	Params::BP_PlayerController_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::InpActEvt_Nine_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "InpActEvt_Nine_K2Node_InputKeyEvent_1");

	Params::BP_PlayerController_C_InpActEvt_Nine_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::InpActEvt_Zero_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_C", "InpActEvt_Zero_K2Node_InputKeyEvent_2");

	Params::BP_PlayerController_C_InpActEvt_Zero_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
