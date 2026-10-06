#pragma once



// Package: Quest_31115

#include "Basic.hpp"

#include "Quest_31115_classes.hpp"
#include "Quest_31115_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_31115.Quest_31115_C.ExecuteUbergraph_Quest_31115
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31115_C::ExecuteUbergraph_Quest_31115(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31115_C", "ExecuteUbergraph_Quest_31115");

	Params::Quest_31115_C_ExecuteUbergraph_Quest_31115 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31115.Quest_31115_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31115_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31115_C", "HandleFinishing");

	Params::Quest_31115_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31115.Quest_31115_C.OnDlgClosed_64BA784E44EA47B2CF30E88DBBC475BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31115_C::OnDlgClosed_64BA784E44EA47B2CF30E88DBBC475BB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31115_C", "OnDlgClosed_64BA784E44EA47B2CF30E88DBBC475BB");

	Params::Quest_31115_C_OnDlgClosed_64BA784E44EA47B2CF30E88DBBC475BB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31115.Quest_31115_C.OnDlgSelectedOption_64BA784E44EA47B2CF30E88DBBC475BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31115_C::OnDlgSelectedOption_64BA784E44EA47B2CF30E88DBBC475BB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31115_C", "OnDlgSelectedOption_64BA784E44EA47B2CF30E88DBBC475BB");

	Params::Quest_31115_C_OnDlgSelectedOption_64BA784E44EA47B2CF30E88DBBC475BB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31115.Quest_31115_C.OnFinished_74ABA73C43851C5F16A77CBA860C68E5
// (BlueprintCallable, BlueprintEvent)

void UQuest_31115_C::OnFinished_74ABA73C43851C5F16A77CBA860C68E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31115_C", "OnFinished_74ABA73C43851C5F16A77CBA860C68E5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_31115.Quest_31115_C.OnStop_74ABA73C43851C5F16A77CBA860C68E5
// (BlueprintCallable, BlueprintEvent)

void UQuest_31115_C::OnStop_74ABA73C43851C5F16A77CBA860C68E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31115_C", "OnStop_74ABA73C43851C5F16A77CBA860C68E5");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
