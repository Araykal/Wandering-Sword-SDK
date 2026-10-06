#pragma once



// Package: GridRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_structs.hpp"
#include "GridRuntime_structs.hpp"


SDK_NAMESPACE_START

// Class GridRuntime.GridPainter
// 0x0018 (0x0040 - 0x0028)
class UGridPainter : public UObject
{
public:
	class AGridManager*                           GridManager;                                       // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGrid*>                          VisibleGrids;                                      // 0x0030(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	void UpdateGridState(class UGrid* Grid);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GridPainter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GridPainter")
	}
	static class UGridPainter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGridPainter>();
	}
};
DUMPER7_ASSERTS_UGridPainter;

// Class GridRuntime.GridDecalPainter
// 0x0058 (0x0098 - 0x0040)
class UGridDecalPainter : public UGridPainter
{
public:
	class UMaterialInterface*                     DefaultDecalMaterial;                              // 0x0040(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class UGrid*, class UDecalComponent*>    Grid2Decal;                                        // 0x0048(0x0050)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	class UMaterialInterface* GetDecalMaterial(class UGrid* Grid);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GridDecalPainter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GridDecalPainter")
	}
	static class UGridDecalPainter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGridDecalPainter>();
	}
};
DUMPER7_ASSERTS_UGridDecalPainter;

// Class GridRuntime.GridNavigationAgent
// 0x0010 (0x0038 - 0x0028)
class UGridNavigationAgent : public UObject
{
public:
	TMulticastInlineDelegate<void(class APawn* Pawn, bool Succ)> OnMoveCompleted;                    // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	bool Check(class APawn* Pawn, class UGrid* From, class UGrid* To);
	bool RequestMove(class APawn* Pawn, class UGrid* From, class UGrid* To);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GridNavigationAgent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GridNavigationAgent")
	}
	static class UGridNavigationAgent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGridNavigationAgent>();
	}
};
DUMPER7_ASSERTS_UGridNavigationAgent;

// Class GridRuntime.GridManager
// 0x0038 (0x0258 - 0x0220)
class AGridManager : public AActor
{
public:
	TSubclassOf<class UGridPathFinder>            PathFinderClass;                                   // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGridPainter>               GridPainterClass;                                  // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGrid>                      GridClass;                                         // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TraceTestDistance;                                 // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GridSize;                                          // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPainter*                           GridPainter;                                       // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_248[0x10];                                     // 0x0248(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClearAllGridInfo();
	bool FindPath(const struct FGridPathFindingRequest& Request, TArray<class UGrid*>* Result);
	int32 GetDistance(const class UGrid* Start, const class UGrid* Dest);
	class UGrid* GetGridByCoord(const struct FIntVector& Coord);
	class UGrid* GetGridByPosition(const struct FVector& Position);
	void GetGridsByBound(const struct FBox& Bound, TArray<class UGrid*>* Grids);
	void GetGridsByCoord(const struct FIntVector& Coord, TArray<class UGrid*>* Grids);
	void GetGridsByMoveRange(class UGrid* Center, int32 MoveRange, TArray<class UGrid*>* Grids);
	void GetGridsByRange(class UGrid* Center, int32 Range, TArray<class UGrid*>* Grids);
	void GetNeighbors(class UGrid* Center, TArray<class UGrid*>* Grids);
	void SaveGrids(class UFightLevelSetting* Setting);
	void SetGrids(class UFightLevelSetting* Setting);
	void SetGridSize(float NewGridSize);

	float GetGridSize() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GridManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GridManager")
	}
	static class AGridManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGridManager>();
	}
};
DUMPER7_ASSERTS_AGridManager;

// Class GridRuntime.DefaultGridNavigationAgent
// 0x0018 (0x0050 - 0x0038)
class UDefaultGridNavigationAgent final : public UGridNavigationAgent
{
public:
	float                                         AcceptanceRadius;                                  // 0x0038(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CurrPawn;                                          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                          CurrController;                                    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void OnAIControllerMoveCompeleted(const struct FAIRequestID& RequestID, EPathFollowingResult Result);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DefaultGridNavigationAgent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DefaultGridNavigationAgent")
	}
	static class UDefaultGridNavigationAgent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultGridNavigationAgent>();
	}
};
DUMPER7_ASSERTS_UDefaultGridNavigationAgent;

// Class GridRuntime.FightLevelActor
// 0x0000 (0x0220 - 0x0220)
class AFightLevelActor : public AActor
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("FightLevelActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"FightLevelActor")
	}
	static class AFightLevelActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFightLevelActor>();
	}
};
DUMPER7_ASSERTS_AFightLevelActor;

// Class GridRuntime.FightLevelSetting
// 0x00D8 (0x0100 - 0x0028)
class UFightLevelSetting final : public UObject
{
public:
	TSoftObjectPtr<class UWorld>                  Level;                                             // 0x0028(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GridSize;                                          // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGridSetting>                   Grids;                                             // 0x0058(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	EGridDirect                                   FaceDirect;                                        // 0x0068(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGridDirect                                   EnemyFaceDirect;                                   // 0x0069(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFightWinLoseSetting>           FightWinLoseSettings;                              // 0x0070(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class USoundBase>>      BackgroundMusics;                                  // 0x0080(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   FightBlueprint;                                    // 0x0090(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   VictoryCondition;                                  // 0x00B8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   DefeatCondition;                                   // 0x00D0(0x0018)(Edit, NativeAccessSpecifierPublic)
	int32                                         TowerClimbingLevel;                                // 0x00E8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPawnSetting>                   Pawns;                                             // 0x00F0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("FightLevelSetting")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"FightLevelSetting")
	}
	static class UFightLevelSetting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFightLevelSetting>();
	}
};
DUMPER7_ASSERTS_UFightLevelSetting;

// Class GridRuntime.Grid
// 0x00B0 (0x00D8 - 0x0028)
class UGrid : public UObject
{
public:
	float                                         Height;                                            // 0x0028(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             Coord;                                             // 0x002C(0x000C)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGridCost                                     OriginCost;                                        // 0x0038(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGridState                                    OriginState;                                       // 0x0039(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGridManager*                           GridManager;                                       // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             HitResult;                                         // 0x0048(0x008C)(BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Clear();
	EGridCost GetCost(class UGrid* SourceGrid, class AActor* SourceActor);
	void SetGridSize(float NewSize);
	void SetOriginCost(EGridCost NewCost);
	void SetOriginState(EGridState NewState);
	void SetVisibility(bool NewVisibility);

	bool Equal(const class UGrid* R) const;
	struct FVector GetCenter() const;
	float GetGridSize() const;
	struct FVector GetLocationOffset() const;
	EGridCost GetOriginCost() const;
	EGridState GetOriginState() const;
	bool GetVisibility() const;
	bool IsEmpty() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Grid")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Grid")
	}
	static class UGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGrid>();
	}
};
DUMPER7_ASSERTS_UGrid;

// Class GridRuntime.GridNavigationComponent
// 0x0088 (0x0138 - 0x00B0)
class UGridNavigationComponent : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(class UGridNavigationComponent* Component)> OnPreMoveNextGrid;     // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class UGridNavigationComponent* Component)> OnArrivalNewGrid;      // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class UGridNavigationComponent* Component)> OnArrivalGoal;         // 0x00D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class UGridNavigationComponent* Component)> OnMoveFail;            // 0x00E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGridNavigationAgent>> AgentClasses;                                    // 0x00F0(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class APawn*                                  OwnerPawn;                                         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                          OwnerController;                                   // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_110[0x8];                                      // 0x0110(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGrid*>                          CurrentFollowingPath;                              // 0x0118(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UGridNavigationAgent*>           Agents;                                            // 0x0128(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	bool IsMoving();
	void OnMoveCompleted(class APawn* Pawn, bool Succ);
	bool RequestMove(class UGrid* DestGrid, int32 MaxStep);
	void StopMove();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GridNavigationComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GridNavigationComponent")
	}
	static class UGridNavigationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGridNavigationComponent>();
	}
};
DUMPER7_ASSERTS_UGridNavigationComponent;

// Class GridRuntime.GridPathFinder
// 0x0038 (0x0060 - 0x0028)
class UGridPathFinder : public UObject
{
public:
	class AGridManager*                           GridManager;                                       // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGridPathFindingRequest                Request;                                           // 0x0030(0x0030)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

public:
	int32 GetCost(class UGrid* From, class UGrid* To);
	class UGrid* GetDestGrid();
	class AActor* GetSender();
	class UGrid* GetStartGrid();
	int32 Heuristic(class UGrid* From, class UGrid* To);
	bool IsReachable(class UGrid* Start, class UGrid* Dest);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GridPathFinder")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GridPathFinder")
	}
	static class UGridPathFinder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGridPathFinder>();
	}
};
DUMPER7_ASSERTS_UGridPathFinder;

// Class GridRuntime.GridPawnInterface
// 0x0000 (0x0000 - 0x0000)
class IGridPawnInterface final
{
public:
	class AGridManager* GetGridManager();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GridPawnInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GridPawnInterface")
	}
	static class IGridPawnInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGridPawnInterface>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
DUMPER7_ASSERTS_IGridPawnInterface;

// Class GridRuntime.GridRuntimeBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UGridRuntimeBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	static float GridRuntimeSampleFunction(float Param);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GridRuntimeBPLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GridRuntimeBPLibrary")
	}
	static class UGridRuntimeBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGridRuntimeBPLibrary>();
	}
};
DUMPER7_ASSERTS_UGridRuntimeBPLibrary;

// Class GridRuntime.GridUtilities
// 0x0000 (0x0028 - 0x0028)
class UGridUtilities final : public UBlueprintFunctionLibrary
{
public:
	static struct FIntVector Add_IntVectorIntVector(const struct FIntVector& L, const struct FIntVector& R);
	static bool EqualEqual_GridGrid(const class UGrid* A, const class UGrid* B);
	static bool GridTraceSingleForObjects(class UGrid* Grid, float TraceDistance, const TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static struct FIntVector Multiply_IntVectorInt(const struct FIntVector& L, int32 R);
	static struct FIntVector Subtract_IntVectorIntVector(const struct FIntVector& L, const struct FIntVector& R);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GridUtilities")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GridUtilities")
	}
	static class UGridUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGridUtilities>();
	}
};
DUMPER7_ASSERTS_UGridUtilities;

// Class GridRuntime.SquareGrid
// 0x0000 (0x00D8 - 0x00D8)
class USquareGrid : public UGrid
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SquareGrid")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SquareGrid")
	}
	static class USquareGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquareGrid>();
	}
};
DUMPER7_ASSERTS_USquareGrid;

// Class GridRuntime.SquareGridManager
// 0x0058 (0x02B0 - 0x0258)
class ASquareGridManager : public AGridManager
{
public:
	TMap<uint64, struct FGridArray>               GridsPool;                                         // 0x0258(0x0050)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_2A8[0x8];                                      // 0x02A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UGrid* GetSquareGridByPosition(const struct FVector& Position);
	void GetSquareGridsByCoord(const struct FIntVector& Coord, TArray<class UGrid*>* Grids);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SquareGridManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SquareGridManager")
	}
	static class ASquareGridManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASquareGridManager>();
	}
};
DUMPER7_ASSERTS_ASquareGridManager;

// Class GridRuntime.SquareGridPathFinder
// 0x0000 (0x0060 - 0x0060)
class USquareGridPathFinder : public UGridPathFinder
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SquareGridPathFinder")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SquareGridPathFinder")
	}
	static class USquareGridPathFinder* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquareGridPathFinder>();
	}
};
DUMPER7_ASSERTS_USquareGridPathFinder;

SDK_NAMESPACE_END
