#pragma once



// Package: BPCMP_AlertBTN_GamepadTip

#include "Basic.hpp"

#include "BPCMP_AlertBTN_GamepadTip_classes.hpp"


SDK_NAMESPACE_START

// Function BPCMP_AlertBTN_GamepadTip.BPCMP_AlertBTN_GamepadTip_C.GotoSingleMode
// (Public, BlueprintCallable, BlueprintEvent)

void UBPCMP_AlertBTN_GamepadTip_C::GotoSingleMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_AlertBTN_GamepadTip_C", "GotoSingleMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPCMP_AlertBTN_GamepadTip.BPCMP_AlertBTN_GamepadTip_C.GotoDoubleMode
// (Public, BlueprintCallable, BlueprintEvent)

void UBPCMP_AlertBTN_GamepadTip_C::GotoDoubleMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPCMP_AlertBTN_GamepadTip_C", "GotoDoubleMode");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
