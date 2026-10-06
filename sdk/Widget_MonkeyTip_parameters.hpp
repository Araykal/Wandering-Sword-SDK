#pragma once



// Package: Widget_MonkeyTip

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function Widget_MonkeyTip.Widget_MonkeyTip_C.ExecuteUbergraph_Widget_MonkeyTip
// 0x0044 (0x0044 - 0x0000)
struct Widget_MonkeyTip_C_ExecuteUbergraph_Widget_MonkeyTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Widget_MonkeyTip_C_ExecuteUbergraph_Widget_MonkeyTip;

// Function Widget_MonkeyTip.Widget_MonkeyTip_C.Tick
// 0x003C (0x003C - 0x0000)
struct Widget_MonkeyTip_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_Widget_MonkeyTip_C_Tick;

// Function Widget_MonkeyTip.Widget_MonkeyTip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Widget_MonkeyTip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Widget_MonkeyTip_C_PreConstruct;

// Function Widget_MonkeyTip.Widget_MonkeyTip_C.Set Dance Step Index
// 0x0002 (0x0002 - 0x0000)
struct Widget_MonkeyTip_C_Set_Dance_Step_Index final
{
public:
	EDanceType                                    DanceType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_Widget_MonkeyTip_C_Set_Dance_Step_Index;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
