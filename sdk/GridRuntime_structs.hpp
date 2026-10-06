#pragma once



// Package: GridRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


SDK_NAMESPACE_START

// Enum GridRuntime.EFightActionType
// NumValues: 0x0007
enum class EFightActionType : uint8
{
	Win                                      = 0,
	Lose                                     = 1,
	EndGame                                  = 2,
	Escape                                   = 3,
	Continue                                 = 4,
	GotoMainMenu                             = 5,
	EFightActionType_MAX                     = 6,
};

// Enum GridRuntime.EFightTriggerType
// NumValues: 0x0004
enum class EFightTriggerType : uint8
{
	OnDied                                   = 0,
	OnBeAttacked                             = 1,
	OnTurnStarted                            = 1,
	EFightTriggerType_MAX                    = 2,
};

// Enum GridRuntime.EFightRequirementType
// NumValues: 0x0007
enum class EFightRequirementType : uint8
{
	TeamAllDied                              = 0,
	HealthLow                                = 1,
	HealthUp                                 = 2,
	TurnNumLow                               = 3,
	TurnNumUp                                = 4,
	Died                                     = 5,
	EFightRequirementType_MAX                = 6,
};

// Enum GridRuntime.EGridDirect
// NumValues: 0x0005
enum class EGridDirect : uint8
{
	Left                                     = 0,
	Up                                       = 1,
	Right                                    = 2,
	Down                                     = 3,
	EGridDirect_MAX                          = 4,
};

// Enum GridRuntime.EGridEditType
// NumValues: 0x0006
enum class EGridEditType : uint8
{
	None                                     = 0,
	GridEdit                                 = 1,
	PainterCost                              = 2,
	PainterState                             = 3,
	PainterPawn                              = 4,
	EGridEditType_MAX                        = 5,
};

// Enum GridRuntime.EGridState
// NumValues: 0x0008
enum class EGridState : uint8
{
	None                                     = 0,
	EnemySpawnPoint                          = 1,
	FriendlySpawnPoint                       = 2,
	InitCameraPoint                          = 3,
	EscapePoint                              = 4,
	HeroSpawnPoint                           = 5,
	InitCameraPointFixed                     = 6,
	EGridState_MAX                           = 7,
};

// Enum GridRuntime.EGridCost
// NumValues: 0x000B
enum class EGridCost : uint8
{
	None                                     = 0,
	C1                                       = 1,
	C2                                       = 2,
	C3                                       = 3,
	C4                                       = 4,
	C5                                       = 5,
	C6                                       = 6,
	ZOC                                      = 99,
	Block                                    = 254,
	Boundary                                 = 255,
	EGridCost_MAX                            = 256,
};

// Enum GridRuntime.EGridType
// NumValues: 0x0004
enum class EGridType : uint8
{
	Unknown                                  = 0,
	Square                                   = 1,
	Hexagon                                  = 2,
	EGridType_MAX                            = 3,
};

// ScriptStruct GridRuntime.FightRequirementSetting
// 0x000C (0x000C - 0x0000)
struct FFightRequirementSetting final
{
public:
	EFightRequirementType                         Type;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Num;                                               // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FFightRequirementSetting;

// ScriptStruct GridRuntime.FightWinLoseSetting
// 0x0020 (0x0020 - 0x0000)
struct FFightWinLoseSetting final
{
public:
	EFightTriggerType                             TriggerType;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFightRequirementSetting>       RequirementSettings;                               // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	EFightActionType                              ActionType;                                        // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FFightWinLoseSetting;

// ScriptStruct GridRuntime.PawnSetting
// 0x001C (0x001C - 0x0000)
struct FPawnSetting final
{
public:
	int32                                         PawnId;                                            // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGridDirect                                   Direct;                                            // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TeamId;                                            // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x000C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanController;                                    // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanController1;                                   // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FPawnSetting;

// ScriptStruct GridRuntime.GridSetting
// 0x0014 (0x0014 - 0x0000)
struct FGridSetting final
{
public:
	EGridCost                                     GridCost;                                          // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGridState                                    GridState;                                         // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Height;                                            // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             Coord;                                             // 0x0008(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FGridSetting;

// ScriptStruct GridRuntime.GridPathFindingRequest
// 0x0030 (0x0030 - 0x0000)
struct FGridPathFindingRequest final
{
public:
	class AActor*                                 Sender;                                            // 0x0000(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                StartPos;                                          // 0x0008(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                DestPos;                                           // 0x0014(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxStep;                                           // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxSearchStep;                                     // 0x0024(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRemoveDest;                                       // 0x0028(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ExtraFlags;                                        // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FGridPathFindingRequest;

// ScriptStruct GridRuntime.GridArray
// 0x0010 (0x0010 - 0x0000)
struct FGridArray final
{
public:
	TArray<class UGrid*>                          Grids;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FGridArray;

SDK_NAMESPACE_END
