#pragma once



// Package: GridRuntime

#include "Basic.hpp"

#include "GridRuntime_classes.hpp"
#include "GridRuntime_parameters.hpp"


SDK_NAMESPACE_START

// Function GridRuntime.GridPainter.UpdateGridState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGrid*                            Grid                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridPainter::UpdateGridState(class UGrid* Grid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridPainter", "UpdateGridState");

	Params::GridPainter_UpdateGridState Parms{};

	Parms.Grid = Grid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.GridDecalPainter.GetDecalMaterial
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGrid*                            Grid                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UGridDecalPainter::GetDecalMaterial(class UGrid* Grid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridDecalPainter", "GetDecalMaterial");

	Params::GridDecalPainter_GetDecalMaterial Parms{};

	Parms.Grid = Grid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridNavigationAgent.Check
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            Pawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGrid*                            From                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGrid*                            To                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGridNavigationAgent::Check(class APawn* Pawn, class UGrid* From, class UGrid* To)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridNavigationAgent", "Check");

	Params::GridNavigationAgent_Check Parms{};

	Parms.Pawn = Pawn;
	Parms.From = From;
	Parms.To = To;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridNavigationAgent.RequestMove
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            Pawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGrid*                            From                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGrid*                            To                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGridNavigationAgent::RequestMove(class APawn* Pawn, class UGrid* From, class UGrid* To)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridNavigationAgent", "RequestMove");

	Params::GridNavigationAgent_RequestMove Parms{};

	Parms.Pawn = Pawn;
	Parms.From = From;
	Parms.To = To;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridManager.ClearAllGridInfo
// (Native, Public, BlueprintCallable)

void AGridManager::ClearAllGridInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "ClearAllGridInfo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.GridManager.FindPath
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FGridPathFindingRequest&   Request                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UGrid*>*                   Result                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGridManager::FindPath(const struct FGridPathFindingRequest& Request, TArray<class UGrid*>* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "FindPath");

	Params::GridManager_FindPath Parms{};

	Parms.Request = std::move(Request);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	return Parms.ReturnValue;
}


// Function GridRuntime.GridManager.GetDistance
// (Native, Public, BlueprintCallable)
// Parameters:
// const class UGrid*                      Start                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UGrid*                      Dest                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AGridManager::GetDistance(const class UGrid* Start, const class UGrid* Dest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "GetDistance");

	Params::GridManager_GetDistance Parms{};

	Parms.Start = Start;
	Parms.Dest = Dest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridManager.GetGridByCoord
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FIntVector&                Coord                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGrid*                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGrid* AGridManager::GetGridByCoord(const struct FIntVector& Coord)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "GetGridByCoord");

	Params::GridManager_GetGridByCoord Parms{};

	Parms.Coord = std::move(Coord);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridManager.GetGridByPosition
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FVector&                   Position                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGrid*                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGrid* AGridManager::GetGridByPosition(const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "GetGridByPosition");

	Params::GridManager_GetGridByPosition Parms{};

	Parms.Position = std::move(Position);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridManager.GetGridsByBound
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FBox&                      Bound                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UGrid*>*                   Grids                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void AGridManager::GetGridsByBound(const struct FBox& Bound, TArray<class UGrid*>* Grids)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "GetGridsByBound");

	Params::GridManager_GetGridsByBound Parms{};

	Parms.Bound = std::move(Bound);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Grids != nullptr)
		*Grids = std::move(Parms.Grids);
}


// Function GridRuntime.GridManager.GetGridsByCoord
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FIntVector&                Coord                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UGrid*>*                   Grids                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void AGridManager::GetGridsByCoord(const struct FIntVector& Coord, TArray<class UGrid*>* Grids)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "GetGridsByCoord");

	Params::GridManager_GetGridsByCoord Parms{};

	Parms.Coord = std::move(Coord);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Grids != nullptr)
		*Grids = std::move(Parms.Grids);
}


// Function GridRuntime.GridManager.GetGridsByMoveRange
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGrid*                            Center                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   MoveRange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UGrid*>*                   Grids                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void AGridManager::GetGridsByMoveRange(class UGrid* Center, int32 MoveRange, TArray<class UGrid*>* Grids)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "GetGridsByMoveRange");

	Params::GridManager_GetGridsByMoveRange Parms{};

	Parms.Center = Center;
	Parms.MoveRange = MoveRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Grids != nullptr)
		*Grids = std::move(Parms.Grids);
}


// Function GridRuntime.GridManager.GetGridsByRange
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGrid*                            Center                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Range                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UGrid*>*                   Grids                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void AGridManager::GetGridsByRange(class UGrid* Center, int32 Range, TArray<class UGrid*>* Grids)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "GetGridsByRange");

	Params::GridManager_GetGridsByRange Parms{};

	Parms.Center = Center;
	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Grids != nullptr)
		*Grids = std::move(Parms.Grids);
}


// Function GridRuntime.GridManager.GetNeighbors
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGrid*                            Center                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UGrid*>*                   Grids                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void AGridManager::GetNeighbors(class UGrid* Center, TArray<class UGrid*>* Grids)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "GetNeighbors");

	Params::GridManager_GetNeighbors Parms{};

	Parms.Center = Center;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Grids != nullptr)
		*Grids = std::move(Parms.Grids);
}


// Function GridRuntime.GridManager.SaveGrids
// (Native, Public, BlueprintCallable)
// Parameters:
// class UFightLevelSetting*               Setting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGridManager::SaveGrids(class UFightLevelSetting* Setting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "SaveGrids");

	Params::GridManager_SaveGrids Parms{};

	Parms.Setting = Setting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.GridManager.SetGrids
// (Native, Public, BlueprintCallable)
// Parameters:
// class UFightLevelSetting*               Setting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGridManager::SetGrids(class UFightLevelSetting* Setting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "SetGrids");

	Params::GridManager_SetGrids Parms{};

	Parms.Setting = Setting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.GridManager.SetGridSize
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewGridSize                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGridManager::SetGridSize(float NewGridSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "SetGridSize");

	Params::GridManager_SetGridSize Parms{};

	Parms.NewGridSize = NewGridSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.GridManager.GetGridSize
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AGridManager::GetGridSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridManager", "GetGridSize");

	Params::GridManager_GetGridSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.DefaultGridNavigationAgent.OnAIControllerMoveCompeleted
// (Native, Protected)
// Parameters:
// const struct FAIRequestID&              RequestID                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EPathFollowingResult                    Result                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDefaultGridNavigationAgent::OnAIControllerMoveCompeleted(const struct FAIRequestID& RequestID, EPathFollowingResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultGridNavigationAgent", "OnAIControllerMoveCompeleted");

	Params::DefaultGridNavigationAgent_OnAIControllerMoveCompeleted Parms{};

	Parms.RequestID = std::move(RequestID);
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.Grid.Clear
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrid::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "Clear");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.Grid.GetCost
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGrid*                            SourceGrid                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           SourceActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGridCost                               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGridCost UGrid::GetCost(class UGrid* SourceGrid, class AActor* SourceActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "GetCost");

	Params::Grid_GetCost Parms{};

	Parms.SourceGrid = SourceGrid;
	Parms.SourceActor = SourceActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.Grid.SetGridSize
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGrid::SetGridSize(float NewSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "SetGridSize");

	Params::Grid_SetGridSize Parms{};

	Parms.NewSize = NewSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.Grid.SetOriginCost
// (Native, Public, BlueprintCallable)
// Parameters:
// EGridCost                               NewCost                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGrid::SetOriginCost(EGridCost NewCost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "SetOriginCost");

	Params::Grid_SetOriginCost Parms{};

	Parms.NewCost = NewCost;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.Grid.SetOriginState
// (Native, Public, BlueprintCallable)
// Parameters:
// EGridState                              NewState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGrid::SetOriginState(EGridState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "SetOriginState");

	Params::Grid_SetOriginState Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.Grid.SetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    NewVisibility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGrid::SetVisibility(bool NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "SetVisibility");

	Params::Grid_SetVisibility Parms{};

	Parms.NewVisibility = NewVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.Grid.Equal
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const class UGrid*                      R                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGrid::Equal(const class UGrid* R) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "Equal");

	Params::Grid_Equal Parms{};

	Parms.R = R;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.Grid.GetCenter
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UGrid::GetCenter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "GetCenter");

	Params::Grid_GetCenter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.Grid.GetGridSize
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGrid::GetGridSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "GetGridSize");

	Params::Grid_GetGridSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.Grid.GetLocationOffset
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UGrid::GetLocationOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "GetLocationOffset");

	Params::Grid_GetLocationOffset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.Grid.GetOriginCost
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGridCost                               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGridCost UGrid::GetOriginCost() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "GetOriginCost");

	Params::Grid_GetOriginCost Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.Grid.GetOriginState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGridState                              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EGridState UGrid::GetOriginState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "GetOriginState");

	Params::Grid_GetOriginState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.Grid.GetVisibility
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGrid::GetVisibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "GetVisibility");

	Params::Grid_GetVisibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.Grid.IsEmpty
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGrid::IsEmpty() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grid", "IsEmpty");

	Params::Grid_IsEmpty Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridNavigationComponent.IsMoving
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGridNavigationComponent::IsMoving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridNavigationComponent", "IsMoving");

	Params::GridNavigationComponent_IsMoving Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridNavigationComponent.OnMoveCompleted
// (Native, Protected)
// Parameters:
// class APawn*                            Pawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Succ                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridNavigationComponent::OnMoveCompleted(class APawn* Pawn, bool Succ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridNavigationComponent", "OnMoveCompleted");

	Params::GridNavigationComponent_OnMoveCompleted Parms{};

	Parms.Pawn = Pawn;
	Parms.Succ = Succ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.GridNavigationComponent.RequestMove
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGrid*                            DestGrid                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   MaxStep                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGridNavigationComponent::RequestMove(class UGrid* DestGrid, int32 MaxStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridNavigationComponent", "RequestMove");

	Params::GridNavigationComponent_RequestMove Parms{};

	Parms.DestGrid = DestGrid;
	Parms.MaxStep = MaxStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridNavigationComponent.StopMove
// (Native, Public, BlueprintCallable)

void UGridNavigationComponent::StopMove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridNavigationComponent", "StopMove");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GridRuntime.GridPathFinder.GetCost
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGrid*                            From                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGrid*                            To                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGridPathFinder::GetCost(class UGrid* From, class UGrid* To)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridPathFinder", "GetCost");

	Params::GridPathFinder_GetCost Parms{};

	Parms.From = From;
	Parms.To = To;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridPathFinder.GetDestGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGrid*                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGrid* UGridPathFinder::GetDestGrid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridPathFinder", "GetDestGrid");

	Params::GridPathFinder_GetDestGrid Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridPathFinder.GetSender
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UGridPathFinder::GetSender()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridPathFinder", "GetSender");

	Params::GridPathFinder_GetSender Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridPathFinder.GetStartGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGrid*                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGrid* UGridPathFinder::GetStartGrid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridPathFinder", "GetStartGrid");

	Params::GridPathFinder_GetStartGrid Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridPathFinder.Heuristic
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGrid*                            From                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGrid*                            To                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGridPathFinder::Heuristic(class UGrid* From, class UGrid* To)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridPathFinder", "Heuristic");

	Params::GridPathFinder_Heuristic Parms{};

	Parms.From = From;
	Parms.To = To;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridPathFinder.IsReachable
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGrid*                            Start                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGrid*                            Dest                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGridPathFinder::IsReachable(class UGrid* Start, class UGrid* Dest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GridPathFinder", "IsReachable");

	Params::GridPathFinder_IsReachable Parms{};

	Parms.Start = Start;
	Parms.Dest = Dest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridPawnInterface.GetGridManager
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGridManager*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AGridManager* IGridPawnInterface::GetGridManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("GridPawnInterface", "GetGridManager");

	Params::GridPawnInterface_GetGridManager Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	AsUObject()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridRuntimeBPLibrary.GridRuntimeSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   Param                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGridRuntimeBPLibrary::GridRuntimeSampleFunction(float Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GridRuntimeBPLibrary", "GridRuntimeSampleFunction");

	Params::GridRuntimeBPLibrary_GridRuntimeSampleFunction Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridUtilities.Add_IntVectorIntVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// const struct FIntVector&                L                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FIntVector&                R                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntVector                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FIntVector UGridUtilities::Add_IntVectorIntVector(const struct FIntVector& L, const struct FIntVector& R)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GridUtilities", "Add_IntVectorIntVector");

	Params::GridUtilities_Add_IntVectorIntVector Parms{};

	Parms.L = std::move(L);
	Parms.R = std::move(R);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridUtilities.EqualEqual_GridGrid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class UGrid*                      A                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UGrid*                      B                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGridUtilities::EqualEqual_GridGrid(const class UGrid* A, const class UGrid* B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GridUtilities", "EqualEqual_GridGrid");

	Params::GridUtilities_EqualEqual_GridGrid Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridUtilities.GridTraceSingleForObjects
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UGrid*                            Grid                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   TraceDistance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TArray<EObjectTypeQuery>&         ObjectTypes                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bTraceComplex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TArray<class AActor*>&            ActorsToIgnore                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// EDrawDebugTrace                         DrawDebugType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult*                      OutHit                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                                    bIgnoreSelf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FLinearColor&              TraceColor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FLinearColor&              TraceHitColor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   DrawTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGridUtilities::GridTraceSingleForObjects(class UGrid* Grid, float TraceDistance, const TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GridUtilities", "GridTraceSingleForObjects");

	Params::GridUtilities_GridTraceSingleForObjects Parms{};

	Parms.Grid = Grid;
	Parms.TraceDistance = TraceDistance;
	Parms.ObjectTypes = std::move(ObjectTypes);
	Parms.bTraceComplex = bTraceComplex;
	Parms.ActorsToIgnore = std::move(ActorsToIgnore);
	Parms.DrawDebugType = DrawDebugType;
	Parms.bIgnoreSelf = bIgnoreSelf;
	Parms.TraceColor = std::move(TraceColor);
	Parms.TraceHitColor = std::move(TraceHitColor);
	Parms.DrawTime = DrawTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;
}


// Function GridRuntime.GridUtilities.Multiply_IntVectorInt
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// const struct FIntVector&                L                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   R                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntVector                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FIntVector UGridUtilities::Multiply_IntVectorInt(const struct FIntVector& L, int32 R)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GridUtilities", "Multiply_IntVectorInt");

	Params::GridUtilities_Multiply_IntVectorInt Parms{};

	Parms.L = std::move(L);
	Parms.R = R;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.GridUtilities.Subtract_IntVectorIntVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// const struct FIntVector&                L                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FIntVector&                R                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntVector                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FIntVector UGridUtilities::Subtract_IntVectorIntVector(const struct FIntVector& L, const struct FIntVector& R)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GridUtilities", "Subtract_IntVectorIntVector");

	Params::GridUtilities_Subtract_IntVectorIntVector Parms{};

	Parms.L = std::move(L);
	Parms.R = std::move(R);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.SquareGridManager.GetSquareGridByPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FVector&                   Position                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGrid*                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGrid* ASquareGridManager::GetSquareGridByPosition(const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquareGridManager", "GetSquareGridByPosition");

	Params::SquareGridManager_GetSquareGridByPosition Parms{};

	Parms.Position = std::move(Position);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GridRuntime.SquareGridManager.GetSquareGridsByCoord
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FIntVector&                Coord                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UGrid*>*                   Grids                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ASquareGridManager::GetSquareGridsByCoord(const struct FIntVector& Coord, TArray<class UGrid*>* Grids)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquareGridManager", "GetSquareGridsByCoord");

	Params::SquareGridManager_GetSquareGridsByCoord Parms{};

	Parms.Coord = std::move(Coord);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Grids != nullptr)
		*Grids = std::move(Parms.Grids);
}


SDK_NAMESPACE_END
