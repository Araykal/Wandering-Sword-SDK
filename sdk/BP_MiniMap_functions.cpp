#pragma once



// Package: BP_MiniMap

#include "Basic.hpp"

#include "BP_MiniMap_classes.hpp"
#include "BP_MiniMap_parameters.hpp"


SDK_NAMESPACE_START

// Function BP_MiniMap.BP_MiniMap_C.ExecuteUbergraph_BP_MiniMap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MiniMap_C::ExecuteUbergraph_BP_MiniMap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "ExecuteUbergraph_BP_MiniMap");

	Params::BP_MiniMap_C_ExecuteUbergraph_BP_MiniMap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MiniMap.BP_MiniMap_C.MoveCameraboom
// (Event, Public, BlueprintEvent)
// Parameters:
// EGridDirect                             Dir                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bOnOff                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiniMap_C::MoveCameraboom(EGridDirect Dir, bool bOnOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "MoveCameraboom");

	Params::BP_MiniMap_C_MoveCameraboom Parms{};

	Parms.Dir = Dir;
	Parms.bOnOff = bOnOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MiniMap.BP_MiniMap_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MiniMap_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "ReceiveEndPlay");

	Params::BP_MiniMap_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MiniMap.BP_MiniMap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniMap_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMap.BP_MiniMap_C.归位
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniMap_C::归位()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "归位");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMap.BP_MiniMap_C.Time_Move
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniMap_C::Time_Move()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "Time_Move");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMap.BP_MiniMap_C.屏幕移动
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGridDirect                             方向                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Off                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiniMap_C::屏幕移动(EGridDirect 方向, bool Off)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "屏幕移动");

	Params::BP_MiniMap_C_屏幕移动 Parms{};

	Parms.方向 = 方向;
	Parms.Off = Off;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MiniMap.BP_MiniMap_C.开关全局
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniMap_C::开关全局()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "开关全局");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMap.BP_MiniMap_C.2S__UpdateFunc
// (BlueprintEvent)

void ABP_MiniMap_C::TwoS__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "2S__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMap.BP_MiniMap_C.2S__FinishedFunc
// (BlueprintEvent)

void ABP_MiniMap_C::TwoS__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "2S__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMap.BP_MiniMap_C.ClearTimerHandle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniMap_C::ClearTimerHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "ClearTimerHandle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMap.BP_MiniMap_C.ShowCityName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniMap_C::ShowCityName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "ShowCityName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMap.BP_MiniMap_C.HideCityName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniMap_C::HideCityName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "HideCityName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMap.BP_MiniMap_C.CreateAndShowMoveWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniMap_C::CreateAndShowMoveWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "CreateAndShowMoveWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMap.BP_MiniMap_C.HideAndDestroyMoveWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniMap_C::HideAndDestroyMoveWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMap_C", "HideAndDestroyMoveWidget");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
