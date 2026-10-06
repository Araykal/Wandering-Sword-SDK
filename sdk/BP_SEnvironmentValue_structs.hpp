#pragma once



// Package: BP_SEnvironmentValue

#include "Basic.hpp"

#include "BP_EEnvironmentValueType_structs.hpp"


SDK_NAMESPACE_START

// UserDefinedStruct BP_SEnvironmentValue.BP_SEnvironmentValue
// 0x0008 (0x0008 - 0x0000)
struct FBP_SEnvironmentValue final
{
public:
	EBP_EEnvironmentValueType                     Type_2_41A19706420CD695311707809739351D;           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Value_5_105039494113293B3148429A9068BD58;          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_FBP_SEnvironmentValue;

SDK_NAMESPACE_END
