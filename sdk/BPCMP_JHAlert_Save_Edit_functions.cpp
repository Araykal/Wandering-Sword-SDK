#pragma once



// Package: BPCMP_JHAlert_Save_Edit

#include "Basic.hpp"

#include "BPCMP_JHAlert_Save_Edit_classes.hpp"
#include "BPCMP_JHAlert_Save_Edit_parameters.hpp"


SDK_NAMESPACE_START

// Function BPCMP_JHAlert_Save_Edit.BPCMP_JHAlert_Save_Edit_C.ExecuteUbergraph_BPCMP_JHAlert_Save_Edit
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPCMP_JHAlert_Save_Edit_C::ExecuteUbergraph_BPCMP_JHAlert_Save_Edit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHAlert_Save_Edit_C", "ExecuteUbergraph_BPCMP_JHAlert_Save_Edit");

	Params::BPCMP_JHAlert_Save_Edit_C_ExecuteUbergraph_BPCMP_JHAlert_Save_Edit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_JHAlert_Save_Edit.BPCMP_JHAlert_Save_Edit_C.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UBPCMP_JHAlert_Save_Edit_C::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHAlert_Save_Edit_C", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_JHAlert_Save_Edit.BPCMP_JHAlert_Save_Edit_C.EVT_AlertShow
// (Event, Public, BlueprintEvent)

void UBPCMP_JHAlert_Save_Edit_C::EVT_AlertShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHAlert_Save_Edit_C", "EVT_AlertShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_JHAlert_Save_Edit.BPCMP_JHAlert_Save_Edit_C.EVT_ChangeBtnMode_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    isTwo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPCMP_JHAlert_Save_Edit_C::EVT_ChangeBtnMode_1(bool isTwo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHAlert_Save_Edit_C", "EVT_ChangeBtnMode_1");

	Params::BPCMP_JHAlert_Save_Edit_C_EVT_ChangeBtnMode_1 Parms{};

	Parms.isTwo = isTwo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPCMP_JHAlert_Save_Edit.BPCMP_JHAlert_Save_Edit_C.BndEvt__BPCMP_JHAlert_Simple_GP_Btn1_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPCMP_JHAlert_Save_Edit_C::BndEvt__BPCMP_JHAlert_Simple_GP_Btn1_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHAlert_Save_Edit_C", "BndEvt__BPCMP_JHAlert_Simple_GP_Btn1_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_JHAlert_Save_Edit.BPCMP_JHAlert_Save_Edit_C.EVT_Gamepad_ExitConfirmMode
// (Event, Public, BlueprintEvent)

void UBPCMP_JHAlert_Save_Edit_C::EVT_Gamepad_ExitConfirmMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHAlert_Save_Edit_C", "EVT_Gamepad_ExitConfirmMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_JHAlert_Save_Edit.BPCMP_JHAlert_Save_Edit_C.EVT_Gamepad_EnterConfirmMode
// (Event, Public, BlueprintEvent)

void UBPCMP_JHAlert_Save_Edit_C::EVT_Gamepad_EnterConfirmMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHAlert_Save_Edit_C", "EVT_Gamepad_EnterConfirmMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_JHAlert_Save_Edit.BPCMP_JHAlert_Save_Edit_C.BndEvt__BPCMP_JHAlert_Simple_GP_Btn2_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature
// (BlueprintEvent)

void UBPCMP_JHAlert_Save_Edit_C::BndEvt__BPCMP_JHAlert_Simple_GP_Btn2_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_JHAlert_Save_Edit_C", "BndEvt__BPCMP_JHAlert_Simple_GP_Btn2_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
