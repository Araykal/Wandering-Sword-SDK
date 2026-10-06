#pragma once



// Package: BPI_SetState

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPI_SetState.BPI_SetState_C.ToggleState
// 0x0001 (0x0001 - 0x0000)
struct BPI_SetState_C_ToggleState final
{
public:
	bool                                          bOn;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPI_SetState_C_ToggleState;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
