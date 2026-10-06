#pragma once



// Package: Quest_5552

#include "Basic.hpp"

#include "Quest_5552_classes.hpp"
#include "Quest_5552_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5552.Quest_5552_C.ExecuteUbergraph_Quest_5552
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5552_C::ExecuteUbergraph_Quest_5552(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5552_C", "ExecuteUbergraph_Quest_5552");

	Params::Quest_5552_C_ExecuteUbergraph_Quest_5552 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5552.Quest_5552_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5552_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5552_C", "HandleFinishing");

	Params::Quest_5552_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5552.Quest_5552_C.OnSuccess_8AD2474E4493A67D8FC9CAA5ED62826B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5552_C::OnSuccess_8AD2474E4493A67D8FC9CAA5ED62826B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5552_C", "OnSuccess_8AD2474E4493A67D8FC9CAA5ED62826B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5552.Quest_5552_C.OnFinished_A2D4AC3741CA9D443A40CBB6A203F593
// (BlueprintCallable, BlueprintEvent)

void UQuest_5552_C::OnFinished_A2D4AC3741CA9D443A40CBB6A203F593()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5552_C", "OnFinished_A2D4AC3741CA9D443A40CBB6A203F593");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5552.Quest_5552_C.OnStop_A2D4AC3741CA9D443A40CBB6A203F593
// (BlueprintCallable, BlueprintEvent)

void UQuest_5552_C::OnStop_A2D4AC3741CA9D443A40CBB6A203F593()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5552_C", "OnStop_A2D4AC3741CA9D443A40CBB6A203F593");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5552.Quest_5552_C.OnDlgClosed_911B9BDD418407A3110E88B445AEAA46
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5552_C::OnDlgClosed_911B9BDD418407A3110E88B445AEAA46(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5552_C", "OnDlgClosed_911B9BDD418407A3110E88B445AEAA46");

	Params::Quest_5552_C_OnDlgClosed_911B9BDD418407A3110E88B445AEAA46 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5552.Quest_5552_C.OnDlgSelectedOption_911B9BDD418407A3110E88B445AEAA46
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5552_C::OnDlgSelectedOption_911B9BDD418407A3110E88B445AEAA46(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5552_C", "OnDlgSelectedOption_911B9BDD418407A3110E88B445AEAA46");

	Params::Quest_5552_C_OnDlgSelectedOption_911B9BDD418407A3110E88B445AEAA46 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
