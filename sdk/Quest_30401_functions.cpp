#pragma once



// Package: Quest_30401

#include "Basic.hpp"

#include "Quest_30401_classes.hpp"
#include "Quest_30401_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30401.Quest_30401_C.ExecuteUbergraph_Quest_30401
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30401_C::ExecuteUbergraph_Quest_30401(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30401_C", "ExecuteUbergraph_Quest_30401");

	Params::Quest_30401_C_ExecuteUbergraph_Quest_30401 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30401.Quest_30401_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30401_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30401_C", "HandleFinishing");

	Params::Quest_30401_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30401.Quest_30401_C.OnSuccess_508188A14D8D79D625B32FACE850BC44
// (BlueprintCallable, BlueprintEvent)

void UQuest_30401_C::OnSuccess_508188A14D8D79D625B32FACE850BC44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30401_C", "OnSuccess_508188A14D8D79D625B32FACE850BC44");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30401.Quest_30401_C.OnFinished_3866CE7F44A33CE78EFEDAB9A75BB3F9
// (BlueprintCallable, BlueprintEvent)

void UQuest_30401_C::OnFinished_3866CE7F44A33CE78EFEDAB9A75BB3F9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30401_C", "OnFinished_3866CE7F44A33CE78EFEDAB9A75BB3F9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30401.Quest_30401_C.OnStop_3866CE7F44A33CE78EFEDAB9A75BB3F9
// (BlueprintCallable, BlueprintEvent)

void UQuest_30401_C::OnStop_3866CE7F44A33CE78EFEDAB9A75BB3F9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30401_C", "OnStop_3866CE7F44A33CE78EFEDAB9A75BB3F9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30401.Quest_30401_C.OnDlgClosed_0896D44F453C7AE8EDF8F981E9D6679D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30401_C::OnDlgClosed_0896D44F453C7AE8EDF8F981E9D6679D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30401_C", "OnDlgClosed_0896D44F453C7AE8EDF8F981E9D6679D");

	Params::Quest_30401_C_OnDlgClosed_0896D44F453C7AE8EDF8F981E9D6679D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30401.Quest_30401_C.OnDlgSelectedOption_0896D44F453C7AE8EDF8F981E9D6679D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30401_C::OnDlgSelectedOption_0896D44F453C7AE8EDF8F981E9D6679D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30401_C", "OnDlgSelectedOption_0896D44F453C7AE8EDF8F981E9D6679D");

	Params::Quest_30401_C_OnDlgSelectedOption_0896D44F453C7AE8EDF8F981E9D6679D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
