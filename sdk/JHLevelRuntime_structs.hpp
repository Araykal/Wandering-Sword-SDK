#pragma once



// Package: JHLevelRuntime

#include "Basic.hpp"


SDK_NAMESPACE_START

// Enum JHLevelRuntime.EJHLevelInstanceType
// NumValues: 0x0006
enum class EJHLevelInstanceType : uint8
{
	None                                     = 0,
	Ground                                   = 1,
	SquareCliff                              = 2,
	TriangleCliff                            = 3,
	SlopeGround                              = 4,
	EJHLevelInstanceType_MAX                 = 5,
};

// ScriptStruct JHLevelRuntime.JHLevelActorInstance
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x10) FJHLevelActorInstance final
{
public:
	uint8                                         Pad_0[0x40];                                       // 0x0000(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHLevelActorInstance;

SDK_NAMESPACE_END
