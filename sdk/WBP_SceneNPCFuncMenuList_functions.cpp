#pragma once



// Package: WBP_SceneNPCFuncMenuList

#include "Basic.hpp"

#include "WBP_SceneNPCFuncMenuList_classes.hpp"
#include "WBP_SceneNPCFuncMenuList_parameters.hpp"


SDK_NAMESPACE_START

// Function WBP_SceneNPCFuncMenuList.WBP_SceneNPCFuncMenuList_C.ExecuteUbergraph_WBP_SceneNPCFuncMenuList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SceneNPCFuncMenuList_C::ExecuteUbergraph_WBP_SceneNPCFuncMenuList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenuList_C", "ExecuteUbergraph_WBP_SceneNPCFuncMenuList");

	Params::WBP_SceneNPCFuncMenuList_C_ExecuteUbergraph_WBP_SceneNPCFuncMenuList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SceneNPCFuncMenuList.WBP_SceneNPCFuncMenuList_C.EVT_FocusFirst
// (Event, Public, BlueprintEvent)

void UWBP_SceneNPCFuncMenuList_C::EVT_FocusFirst()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenuList_C", "EVT_FocusFirst");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SceneNPCFuncMenuList.WBP_SceneNPCFuncMenuList_C.HandleAddSubWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCacheListSubWidget*              Row                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SceneNPCFuncMenuList_C::HandleAddSubWidget(class UCacheListSubWidget* Row)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenuList_C", "HandleAddSubWidget");

	Params::WBP_SceneNPCFuncMenuList_C_HandleAddSubWidget Parms{};

	Parms.Row = Row;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SceneNPCFuncMenuList.WBP_SceneNPCFuncMenuList_C.HandleClear
// (Event, Public, BlueprintEvent)

void UWBP_SceneNPCFuncMenuList_C::HandleClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenuList_C", "HandleClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SceneNPCFuncMenuList.WBP_SceneNPCFuncMenuList_C.HandleGenerateSubWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCacheListSubWidget*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCacheListSubWidget* UWBP_SceneNPCFuncMenuList_C::HandleGenerateSubWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SceneNPCFuncMenuList_C", "HandleGenerateSubWidget");

	Params::WBP_SceneNPCFuncMenuList_C_HandleGenerateSubWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
