#pragma once



// Package: BP_LittleGameCharacter

#include "Basic.hpp"

#include "BP_LittleGameCharacter_classes.hpp"
#include "BP_LittleGameCharacter_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.ExecuteUbergraph_BP_LittleGameCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LittleGameCharacter_C::ExecuteUbergraph_BP_LittleGameCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "ExecuteUbergraph_BP_LittleGameCharacter");

	Params::BP_LittleGameCharacter_C_ExecuteUbergraph_BP_LittleGameCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.BP_SetCommonMaterial
// (Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LittleGameCharacter_C::BP_SetCommonMaterial(class UStaticMeshComponent* MeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "BP_SetCommonMaterial");

	Params::BP_LittleGameCharacter_C_BP_SetCommonMaterial Parms{};

	Parms.MeshComponent = MeshComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.BP_SetOulineMaterial
// (Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LittleGameCharacter_C::BP_SetOulineMaterial(class UStaticMeshComponent* MeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "BP_SetOulineMaterial");

	Params::BP_LittleGameCharacter_C_BP_SetOulineMaterial Parms{};

	Parms.MeshComponent = MeshComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LittleGameCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.BP_AddArrowUIW
// (Event, Public, BlueprintEvent)

void ABP_LittleGameCharacter_C::BP_AddArrowUIW()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "BP_AddArrowUIW");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.BP_RemoveMonkeyUi
// (Event, Public, BlueprintEvent)

void ABP_LittleGameCharacter_C::BP_RemoveMonkeyUi()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "BP_RemoveMonkeyUi");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.BP_RotateWaiQuanMesh
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             MeshTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRotator&                  CurrentRotation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FRotator&                  TargetRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LittleGameCharacter_C::BP_RotateWaiQuanMesh(class UStaticMeshComponent* MeshTo, const struct FRotator& CurrentRotation, const struct FRotator& TargetRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "BP_RotateWaiQuanMesh");

	Params::BP_LittleGameCharacter_C_BP_RotateWaiQuanMesh Parms{};

	Parms.MeshTo = MeshTo;
	Parms.CurrentRotation = std::move(CurrentRotation);
	Parms.TargetRotation = std::move(TargetRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.BP_RotateNeiQuanMesh
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             MeshTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRotator&                  CurrentRotation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FRotator&                  TargetRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LittleGameCharacter_C::BP_RotateNeiQuanMesh(class UStaticMeshComponent* MeshTo, const struct FRotator& CurrentRotation, const struct FRotator& TargetRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "BP_RotateNeiQuanMesh");

	Params::BP_LittleGameCharacter_C_BP_RotateNeiQuanMesh Parms{};

	Parms.MeshTo = MeshTo;
	Parms.CurrentRotation = std::move(CurrentRotation);
	Parms.TargetRotation = std::move(TargetRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.BP_RotateZhongQuanMesh
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             MeshTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRotator&                  CurrentRotation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FRotator&                  TargetRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LittleGameCharacter_C::BP_RotateZhongQuanMesh(class UStaticMeshComponent* MeshTo, const struct FRotator& CurrentRotation, const struct FRotator& TargetRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "BP_RotateZhongQuanMesh");

	Params::BP_LittleGameCharacter_C_BP_RotateZhongQuanMesh Parms{};

	Parms.MeshTo = MeshTo;
	Parms.CurrentRotation = std::move(CurrentRotation);
	Parms.TargetRotation = std::move(TargetRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.BP_AddArrowUID
// (Event, Public, BlueprintEvent)

void ABP_LittleGameCharacter_C::BP_AddArrowUID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "BP_AddArrowUID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.BP_AddArrowUIS
// (Event, Public, BlueprintEvent)

void ABP_LittleGameCharacter_C::BP_AddArrowUIS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "BP_AddArrowUIS");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.BP_AddArrowUIA
// (Event, Public, BlueprintEvent)

void ABP_LittleGameCharacter_C::BP_AddArrowUIA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "BP_AddArrowUIA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_LittleGameCharacter_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "Timeline_2__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_LittleGameCharacter_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "Timeline_2__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_LittleGameCharacter_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_LittleGameCharacter_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_LittleGameCharacter_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_LittleGameCharacter_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.时间轴_0__UpdateFunc
// (BlueprintEvent)

void ABP_LittleGameCharacter_C::时间轴_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "时间轴_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.时间轴_0__FinishedFunc
// (BlueprintEvent)

void ABP_LittleGameCharacter_C::时间轴_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "时间轴_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.Judge Suss
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LittleGameCharacter_C::Judge_Suss(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "Judge Suss");

	Params::BP_LittleGameCharacter_C_Judge_Suss Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.ShowSuss
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LittleGameCharacter_C::ShowSuss()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "ShowSuss");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LittleGameCharacter.BP_LittleGameCharacter_C.SwitchEnum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<EUIDirection>*                   Directions_0                                           (Parm, OutParm)

void ABP_LittleGameCharacter_C::SwitchEnum(TArray<EUIDirection>* Directions_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LittleGameCharacter_C", "SwitchEnum");

	Params::BP_LittleGameCharacter_C_SwitchEnum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Directions_0 != nullptr)
		*Directions_0 = std::move(Parms.Directions_0);
}


SDK_NAMESPACE_END
