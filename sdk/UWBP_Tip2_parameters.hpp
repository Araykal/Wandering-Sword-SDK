#pragma once



// Package: UWBP_Tip2

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function UWBP_Tip2.UWBP_Tip2_C.ExecuteUbergraph_UWBP_Tip2
// 0x0028 (0x0028 - 0x0000)
struct UWBP_Tip2_C_ExecuteUbergraph_UWBP_Tip2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_UWBP_Tip2_C_ExecuteUbergraph_UWBP_Tip2;

// Function UWBP_Tip2.UWBP_Tip2_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UWBP_Tip2_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_UWBP_Tip2_C_PreConstruct;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
