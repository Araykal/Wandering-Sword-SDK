#pragma once



// Package: BP_LuoShu

#include "Basic.hpp"

#include "BP_LuoShu_classes.hpp"
#include "BP_LuoShu_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_LuoShu.BP_LuoShu_C.ExecuteUbergraph_BP_LuoShu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LuoShu_C::ExecuteUbergraph_BP_LuoShu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "ExecuteUbergraph_BP_LuoShu");

	Params::BP_LuoShu_C_ExecuteUbergraph_BP_LuoShu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LuoShu.BP_LuoShu_C.BP_GameCompleted
// (Event, Public, BlueprintEvent)

void ABP_LuoShu_C::BP_GameCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "BP_GameCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.BP_SetWidgetHor
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LuoShu_C::BP_SetWidgetHor(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "BP_SetWidgetHor");

	Params::BP_LuoShu_C_BP_SetWidgetHor Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LuoShu.BP_LuoShu_C.BP_Reset
// (Event, Public, BlueprintEvent)

void ABP_LuoShu_C::BP_Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "BP_Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.BP_Start
// (Event, Public, BlueprintEvent)

void ABP_LuoShu_C::BP_Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "BP_Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.BP_Exit
// (Event, Public, BlueprintEvent)

void ABP_LuoShu_C::BP_Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "BP_Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.BP_MoveCube
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LuoShu_C::BP_MoveCube(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "BP_MoveCube");

	Params::BP_LuoShu_C_BP_MoveCube Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LuoShu.BP_LuoShu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LuoShu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_7__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_7__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_7__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_7__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_7__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_7__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_6__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_6__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_6__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_6__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_6__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_6__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.ReverseThirdLineAnim__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::ReverseThirdLineAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "ReverseThirdLineAnim__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.ReverseThirdLineAnim__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::ReverseThirdLineAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "ReverseThirdLineAnim__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.ReverseSecondLineAnim__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::ReverseSecondLineAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "ReverseSecondLineAnim__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.ReverseSecondLineAnim__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::ReverseSecondLineAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "ReverseSecondLineAnim__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.ReverseFirstLineAnim__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::ReverseFirstLineAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "ReverseFirstLineAnim__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.ReverseFirstLineAnim__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::ReverseFirstLineAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "ReverseFirstLineAnim__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_5__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_5__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_5__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_5__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_5__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_5__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_4__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_4__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_4__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_4__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_4__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_4__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_3__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_3__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_2__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Timeline_2__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.SecondLineAnim__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::SecondLineAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "SecondLineAnim__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.SecondLineAnim__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::SecondLineAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "SecondLineAnim__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.FirstLineAnim__UpdateFunc
// (BlueprintEvent)

void ABP_LuoShu_C::FirstLineAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "FirstLineAnim__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.FirstLineAnim__FinishedFunc
// (BlueprintEvent)

void ABP_LuoShu_C::FirstLineAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "FirstLineAnim__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LuoShu_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.SetStyleNormal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LuoShu_C::SetStyleNormal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "SetStyleNormal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.Set Button Hor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LuoShu_C::Set_Button_Hor(int32 NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "Set Button Hor");

	Params::BP_LuoShu_C_Set_Button_Hor Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LuoShu.BP_LuoShu_C.InitWidgetRotation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LuoShu_C::InitWidgetRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "InitWidgetRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LuoShu.BP_LuoShu_C.InitStaticMeshAndWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LuoShu_C::InitStaticMeshAndWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LuoShu_C", "InitStaticMeshAndWidget");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
