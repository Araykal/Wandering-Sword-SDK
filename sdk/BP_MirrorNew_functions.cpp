#pragma once



// Package: BP_MirrorNew

#include "Basic.hpp"

#include "BP_MirrorNew_classes.hpp"
#include "BP_MirrorNew_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_MirrorNew.BP_MirrorNew_C.ExecuteUbergraph_BP_MirrorNew
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MirrorNew_C::ExecuteUbergraph_BP_MirrorNew(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "ExecuteUbergraph_BP_MirrorNew");

	Params::BP_MirrorNew_C_ExecuteUbergraph_BP_MirrorNew Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MirrorNew.BP_MirrorNew_C.HandleInteract
// (Event, Public, BlueprintEvent)

void ABP_MirrorNew_C::HandleInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "HandleInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MirrorNew.BP_MirrorNew_C.HideUI
// (BlueprintCallable, BlueprintEvent)

void ABP_MirrorNew_C::HideUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "HideUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MirrorNew.BP_MirrorNew_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MirrorNew_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MirrorNew.BP_MirrorNew_C.BndEvt__BP_MirrorNew_Box1_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MirrorNew_C::BndEvt__BP_MirrorNew_Box1_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "BndEvt__BP_MirrorNew_Box1_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_MirrorNew_C_BndEvt__BP_MirrorNew_Box1_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MirrorNew.BP_MirrorNew_C.HandleTipItemclicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BtnIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MirrorNew_C::HandleTipItemclicked(int32 BtnIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "HandleTipItemclicked");

	Params::BP_MirrorNew_C_HandleTipItemclicked Parms{};

	Parms.BtnIndex = BtnIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MirrorNew.BP_MirrorNew_C.BndEvt__BP_MirrorNew_Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_MirrorNew_C::BndEvt__BP_MirrorNew_Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "BndEvt__BP_MirrorNew_Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_MirrorNew_C_BndEvt__BP_MirrorNew_Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MirrorNew.BP_MirrorNew_C.Rotation__UpdateFunc
// (BlueprintEvent)

void ABP_MirrorNew_C::Rotation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "Rotation__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MirrorNew.BP_MirrorNew_C.Rotation__FinishedFunc
// (BlueprintEvent)

void ABP_MirrorNew_C::Rotation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "Rotation__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MirrorNew.BP_MirrorNew_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_MirrorNew_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MirrorNew.BP_MirrorNew_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_MirrorNew_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MirrorNew.BP_MirrorNew_C.AddRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FRotator&                  DeltaRotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MirrorNew_C::AddRotation(const struct FRotator& DeltaRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "AddRotation");

	Params::BP_MirrorNew_C_AddRotation Parms{};

	Parms.DeltaRotation = std::move(DeltaRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MirrorNew.BP_MirrorNew_C.SetPlayerAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FlipbookIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAutoReset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MirrorNew_C::SetPlayerAnim(int32 FlipbookIndex, bool bLoop, bool bAutoReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MirrorNew_C", "SetPlayerAnim");

	Params::BP_MirrorNew_C_SetPlayerAnim Parms{};

	Parms.FlipbookIndex = FlipbookIndex;
	Parms.bLoop = bLoop;
	Parms.bAutoReset = bAutoReset;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
