#pragma once



// Package: Quest_5254

#include "Basic.hpp"

#include "Quest_5254_classes.hpp"
#include "Quest_5254_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5254.Quest_5254_C.ExecuteUbergraph_Quest_5254
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5254_C::ExecuteUbergraph_Quest_5254(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5254_C", "ExecuteUbergraph_Quest_5254");

	Params::Quest_5254_C_ExecuteUbergraph_Quest_5254 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5254.Quest_5254_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5254_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5254_C", "HandleFinishing");

	Params::Quest_5254_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5254.Quest_5254_C.OnFinished_14D07F534BC36BDC8EE119B3E297DC4F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5254_C::OnFinished_14D07F534BC36BDC8EE119B3E297DC4F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5254_C", "OnFinished_14D07F534BC36BDC8EE119B3E297DC4F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5254.Quest_5254_C.OnStop_14D07F534BC36BDC8EE119B3E297DC4F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5254_C::OnStop_14D07F534BC36BDC8EE119B3E297DC4F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5254_C", "OnStop_14D07F534BC36BDC8EE119B3E297DC4F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5254.Quest_5254_C.OnDlgClosed_3D40D8F64C4D43739407F6AA889AD3A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5254_C::OnDlgClosed_3D40D8F64C4D43739407F6AA889AD3A7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5254_C", "OnDlgClosed_3D40D8F64C4D43739407F6AA889AD3A7");

	Params::Quest_5254_C_OnDlgClosed_3D40D8F64C4D43739407F6AA889AD3A7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5254.Quest_5254_C.OnDlgSelectedOption_3D40D8F64C4D43739407F6AA889AD3A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5254_C::OnDlgSelectedOption_3D40D8F64C4D43739407F6AA889AD3A7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5254_C", "OnDlgSelectedOption_3D40D8F64C4D43739407F6AA889AD3A7");

	Params::Quest_5254_C_OnDlgSelectedOption_3D40D8F64C4D43739407F6AA889AD3A7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
