#pragma once



// Package: GridRuntime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "GridRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function GridRuntime.GridPainter.UpdateGridState
// 0x0008 (0x0008 - 0x0000)
struct GridPainter_UpdateGridState final
{
public:
	class UGrid*                                  Grid;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridPainter_UpdateGridState;

// Function GridRuntime.GridDecalPainter.GetDecalMaterial
// 0x0010 (0x0010 - 0x0000)
struct GridDecalPainter_GetDecalMaterial final
{
public:
	class UGrid*                                  Grid;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridDecalPainter_GetDecalMaterial;

// Function GridRuntime.GridNavigationAgent.Check
// 0x0020 (0x0020 - 0x0000)
struct GridNavigationAgent_Check final
{
public:
	class APawn*                                  Pawn;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGrid*                                  From;                                              // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGrid*                                  To;                                                // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_GridNavigationAgent_Check;

// Function GridRuntime.GridNavigationAgent.RequestMove
// 0x0020 (0x0020 - 0x0000)
struct GridNavigationAgent_RequestMove final
{
public:
	class APawn*                                  Pawn;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGrid*                                  From;                                              // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGrid*                                  To;                                                // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_GridNavigationAgent_RequestMove;

// Function GridRuntime.GridManager.FindPath
// 0x0048 (0x0048 - 0x0000)
struct GridManager_FindPath final
{
public:
	struct FGridPathFindingRequest                Request;                                           // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UGrid*>                          Result;                                            // 0x0030(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_GridManager_FindPath;

// Function GridRuntime.GridManager.GetDistance
// 0x0018 (0x0018 - 0x0000)
struct GridManager_GetDistance final
{
public:
	const class UGrid*                            Start;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UGrid*                            Dest;                                              // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_GridManager_GetDistance;

// Function GridRuntime.GridManager.GetGridByCoord
// 0x0018 (0x0018 - 0x0000)
struct GridManager_GetGridByCoord final
{
public:
	struct FIntVector                             Coord;                                             // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGrid*                                  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridManager_GetGridByCoord;

// Function GridRuntime.GridManager.GetGridByPosition
// 0x0018 (0x0018 - 0x0000)
struct GridManager_GetGridByPosition final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGrid*                                  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridManager_GetGridByPosition;

// Function GridRuntime.GridManager.GetGridsByBound
// 0x0030 (0x0030 - 0x0000)
struct GridManager_GetGridsByBound final
{
public:
	struct FBox                                   Bound;                                             // 0x0000(0x001C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGrid*>                          Grids;                                             // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridManager_GetGridsByBound;

// Function GridRuntime.GridManager.GetGridsByCoord
// 0x0020 (0x0020 - 0x0000)
struct GridManager_GetGridsByCoord final
{
public:
	struct FIntVector                             Coord;                                             // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGrid*>                          Grids;                                             // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridManager_GetGridsByCoord;

// Function GridRuntime.GridManager.GetGridsByMoveRange
// 0x0020 (0x0020 - 0x0000)
struct GridManager_GetGridsByMoveRange final
{
public:
	class UGrid*                                  Center;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MoveRange;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGrid*>                          Grids;                                             // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridManager_GetGridsByMoveRange;

// Function GridRuntime.GridManager.GetGridsByRange
// 0x0020 (0x0020 - 0x0000)
struct GridManager_GetGridsByRange final
{
public:
	class UGrid*                                  Center;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Range;                                             // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGrid*>                          Grids;                                             // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridManager_GetGridsByRange;

// Function GridRuntime.GridManager.GetNeighbors
// 0x0018 (0x0018 - 0x0000)
struct GridManager_GetNeighbors final
{
public:
	class UGrid*                                  Center;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGrid*>                          Grids;                                             // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridManager_GetNeighbors;

// Function GridRuntime.GridManager.SaveGrids
// 0x0008 (0x0008 - 0x0000)
struct GridManager_SaveGrids final
{
public:
	class UFightLevelSetting*                     Setting;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridManager_SaveGrids;

// Function GridRuntime.GridManager.SetGrids
// 0x0008 (0x0008 - 0x0000)
struct GridManager_SetGrids final
{
public:
	class UFightLevelSetting*                     Setting;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridManager_SetGrids;

// Function GridRuntime.GridManager.SetGridSize
// 0x0004 (0x0004 - 0x0000)
struct GridManager_SetGridSize final
{
public:
	float                                         NewGridSize;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridManager_SetGridSize;

// Function GridRuntime.GridManager.GetGridSize
// 0x0004 (0x0004 - 0x0000)
struct GridManager_GetGridSize final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridManager_GetGridSize;

// Function GridRuntime.DefaultGridNavigationAgent.OnAIControllerMoveCompeleted
// 0x0008 (0x0008 - 0x0000)
struct DefaultGridNavigationAgent_OnAIControllerMoveCompeleted final
{
public:
	struct FAIRequestID                           RequestID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPathFollowingResult                          Result;                                            // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_DefaultGridNavigationAgent_OnAIControllerMoveCompeleted;

// Function GridRuntime.Grid.GetCost
// 0x0018 (0x0018 - 0x0000)
struct Grid_GetCost final
{
public:
	class UGrid*                                  SourceGrid;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 SourceActor;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGridCost                                     ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_Grid_GetCost;

// Function GridRuntime.Grid.SetGridSize
// 0x0004 (0x0004 - 0x0000)
struct Grid_SetGridSize final
{
public:
	float                                         NewSize;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_Grid_SetGridSize;

// Function GridRuntime.Grid.SetOriginCost
// 0x0001 (0x0001 - 0x0000)
struct Grid_SetOriginCost final
{
public:
	EGridCost                                     NewCost;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_Grid_SetOriginCost;

// Function GridRuntime.Grid.SetOriginState
// 0x0001 (0x0001 - 0x0000)
struct Grid_SetOriginState final
{
public:
	EGridState                                    NewState;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_Grid_SetOriginState;

// Function GridRuntime.Grid.SetVisibility
// 0x0001 (0x0001 - 0x0000)
struct Grid_SetVisibility final
{
public:
	bool                                          NewVisibility;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_Grid_SetVisibility;

// Function GridRuntime.Grid.Equal
// 0x0010 (0x0010 - 0x0000)
struct Grid_Equal final
{
public:
	const class UGrid*                            R;                                                 // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_Grid_Equal;

// Function GridRuntime.Grid.GetCenter
// 0x000C (0x000C - 0x0000)
struct Grid_GetCenter final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_Grid_GetCenter;

// Function GridRuntime.Grid.GetGridSize
// 0x0004 (0x0004 - 0x0000)
struct Grid_GetGridSize final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_Grid_GetGridSize;

// Function GridRuntime.Grid.GetLocationOffset
// 0x000C (0x000C - 0x0000)
struct Grid_GetLocationOffset final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_Grid_GetLocationOffset;

// Function GridRuntime.Grid.GetOriginCost
// 0x0001 (0x0001 - 0x0000)
struct Grid_GetOriginCost final
{
public:
	EGridCost                                     ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_Grid_GetOriginCost;

// Function GridRuntime.Grid.GetOriginState
// 0x0001 (0x0001 - 0x0000)
struct Grid_GetOriginState final
{
public:
	EGridState                                    ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_Grid_GetOriginState;

// Function GridRuntime.Grid.GetVisibility
// 0x0001 (0x0001 - 0x0000)
struct Grid_GetVisibility final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_Grid_GetVisibility;

// Function GridRuntime.Grid.IsEmpty
// 0x0001 (0x0001 - 0x0000)
struct Grid_IsEmpty final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_Grid_IsEmpty;

// Function GridRuntime.GridNavigationComponent.IsMoving
// 0x0001 (0x0001 - 0x0000)
struct GridNavigationComponent_IsMoving final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridNavigationComponent_IsMoving;

// Function GridRuntime.GridNavigationComponent.OnMoveCompleted
// 0x0010 (0x0010 - 0x0000)
struct GridNavigationComponent_OnMoveCompleted final
{
public:
	class APawn*                                  Pawn;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Succ;                                              // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_GridNavigationComponent_OnMoveCompleted;

// Function GridRuntime.GridNavigationComponent.RequestMove
// 0x0010 (0x0010 - 0x0000)
struct GridNavigationComponent_RequestMove final
{
public:
	class UGrid*                                  DestGrid;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxStep;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_GridNavigationComponent_RequestMove;

// Function GridRuntime.GridPathFinder.GetCost
// 0x0018 (0x0018 - 0x0000)
struct GridPathFinder_GetCost final
{
public:
	class UGrid*                                  From;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGrid*                                  To;                                                // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_GridPathFinder_GetCost;

// Function GridRuntime.GridPathFinder.GetDestGrid
// 0x0008 (0x0008 - 0x0000)
struct GridPathFinder_GetDestGrid final
{
public:
	class UGrid*                                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridPathFinder_GetDestGrid;

// Function GridRuntime.GridPathFinder.GetSender
// 0x0008 (0x0008 - 0x0000)
struct GridPathFinder_GetSender final
{
public:
	class AActor*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridPathFinder_GetSender;

// Function GridRuntime.GridPathFinder.GetStartGrid
// 0x0008 (0x0008 - 0x0000)
struct GridPathFinder_GetStartGrid final
{
public:
	class UGrid*                                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridPathFinder_GetStartGrid;

// Function GridRuntime.GridPathFinder.Heuristic
// 0x0018 (0x0018 - 0x0000)
struct GridPathFinder_Heuristic final
{
public:
	class UGrid*                                  From;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGrid*                                  To;                                                // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_GridPathFinder_Heuristic;

// Function GridRuntime.GridPathFinder.IsReachable
// 0x0018 (0x0018 - 0x0000)
struct GridPathFinder_IsReachable final
{
public:
	class UGrid*                                  Start;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGrid*                                  Dest;                                              // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_GridPathFinder_IsReachable;

// Function GridRuntime.GridPawnInterface.GetGridManager
// 0x0008 (0x0008 - 0x0000)
struct GridPawnInterface_GetGridManager final
{
public:
	class AGridManager*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridPawnInterface_GetGridManager;

// Function GridRuntime.GridRuntimeBPLibrary.GridRuntimeSampleFunction
// 0x0008 (0x0008 - 0x0000)
struct GridRuntimeBPLibrary_GridRuntimeSampleFunction final
{
public:
	float                                         Param;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridRuntimeBPLibrary_GridRuntimeSampleFunction;

// Function GridRuntime.GridUtilities.Add_IntVectorIntVector
// 0x0024 (0x0024 - 0x0000)
struct GridUtilities_Add_IntVectorIntVector final
{
public:
	struct FIntVector                             L;                                                 // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             R;                                                 // 0x000C(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             ReturnValue;                                       // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridUtilities_Add_IntVectorIntVector;

// Function GridRuntime.GridUtilities.EqualEqual_GridGrid
// 0x0018 (0x0018 - 0x0000)
struct GridUtilities_EqualEqual_GridGrid final
{
public:
	const class UGrid*                            A;                                                 // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UGrid*                            B;                                                 // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_GridUtilities_EqualEqual_GridGrid;

// Function GridRuntime.GridUtilities.GridTraceSingleForObjects
// 0x00F8 (0x00F8 - 0x0000)
struct GridUtilities_GridTraceSingleForObjects final
{
public:
	class UGrid*                                  Grid;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TraceDistance;                                     // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      ObjectTypes;                                       // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bTraceComplex;                                     // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ActorsToIgnore;                                    // 0x0028(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	EDrawDebugTrace                               DrawDebugType;                                     // 0x0038(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             OutHit;                                            // 0x003C(0x008C)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          bIgnoreSelf;                                       // 0x00C8(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           TraceColor;                                        // 0x00CC(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           TraceHitColor;                                     // 0x00DC(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DrawTime;                                          // 0x00EC(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_GridUtilities_GridTraceSingleForObjects;

// Function GridRuntime.GridUtilities.Multiply_IntVectorInt
// 0x001C (0x001C - 0x0000)
struct GridUtilities_Multiply_IntVectorInt final
{
public:
	struct FIntVector                             L;                                                 // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         R;                                                 // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             ReturnValue;                                       // 0x0010(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridUtilities_Multiply_IntVectorInt;

// Function GridRuntime.GridUtilities.Subtract_IntVectorIntVector
// 0x0024 (0x0024 - 0x0000)
struct GridUtilities_Subtract_IntVectorIntVector final
{
public:
	struct FIntVector                             L;                                                 // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             R;                                                 // 0x000C(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             ReturnValue;                                       // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_GridUtilities_Subtract_IntVectorIntVector;

// Function GridRuntime.SquareGridManager.GetSquareGridByPosition
// 0x0018 (0x0018 - 0x0000)
struct SquareGridManager_GetSquareGridByPosition final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGrid*                                  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_SquareGridManager_GetSquareGridByPosition;

// Function GridRuntime.SquareGridManager.GetSquareGridsByCoord
// 0x0020 (0x0020 - 0x0000)
struct SquareGridManager_GetSquareGridsByCoord final
{
public:
	struct FIntVector                             Coord;                                             // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGrid*>                          Grids;                                             // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_SquareGridManager_GetSquareGridsByCoord;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
