#pragma once



// Package: Quest_12688

#include "Basic.hpp"

#include "Quest_12688_classes.hpp"
#include "Quest_12688_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12688.Quest_12688_C.ExecuteUbergraph_Quest_12688
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12688_C::ExecuteUbergraph_Quest_12688(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12688_C", "ExecuteUbergraph_Quest_12688");

	Params::Quest_12688_C_ExecuteUbergraph_Quest_12688 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12688.Quest_12688_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12688_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12688_C", "HandleFinishing");

	Params::Quest_12688_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12688.Quest_12688_C.OnFinished_7DB8C3F54BDDF9FC62DBCE9D1AD74058
// (BlueprintCallable, BlueprintEvent)

void UQuest_12688_C::OnFinished_7DB8C3F54BDDF9FC62DBCE9D1AD74058()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12688_C", "OnFinished_7DB8C3F54BDDF9FC62DBCE9D1AD74058");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12688.Quest_12688_C.OnStop_7DB8C3F54BDDF9FC62DBCE9D1AD74058
// (BlueprintCallable, BlueprintEvent)

void UQuest_12688_C::OnStop_7DB8C3F54BDDF9FC62DBCE9D1AD74058()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12688_C", "OnStop_7DB8C3F54BDDF9FC62DBCE9D1AD74058");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12688.Quest_12688_C.OnDlgClosed_9DF61EE747277A408DB1BC89CBB6A3B0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12688_C::OnDlgClosed_9DF61EE747277A408DB1BC89CBB6A3B0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12688_C", "OnDlgClosed_9DF61EE747277A408DB1BC89CBB6A3B0");

	Params::Quest_12688_C_OnDlgClosed_9DF61EE747277A408DB1BC89CBB6A3B0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12688.Quest_12688_C.OnDlgSelectedOption_9DF61EE747277A408DB1BC89CBB6A3B0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12688_C::OnDlgSelectedOption_9DF61EE747277A408DB1BC89CBB6A3B0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12688_C", "OnDlgSelectedOption_9DF61EE747277A408DB1BC89CBB6A3B0");

	Params::Quest_12688_C_OnDlgSelectedOption_9DF61EE747277A408DB1BC89CBB6A3B0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
