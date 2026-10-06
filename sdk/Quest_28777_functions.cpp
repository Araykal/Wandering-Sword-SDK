#pragma once



// Package: Quest_28777

#include "Basic.hpp"

#include "Quest_28777_classes.hpp"
#include "Quest_28777_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28777.Quest_28777_C.ExecuteUbergraph_Quest_28777
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28777_C::ExecuteUbergraph_Quest_28777(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28777_C", "ExecuteUbergraph_Quest_28777");

	Params::Quest_28777_C_ExecuteUbergraph_Quest_28777 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28777.Quest_28777_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28777_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28777_C", "HandleFinishing");

	Params::Quest_28777_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28777.Quest_28777_C.OnSuccess_03D91C864B7B3C2CAAD5A9B54FBD5F72
// (BlueprintCallable, BlueprintEvent)

void UQuest_28777_C::OnSuccess_03D91C864B7B3C2CAAD5A9B54FBD5F72()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28777_C", "OnSuccess_03D91C864B7B3C2CAAD5A9B54FBD5F72");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28777.Quest_28777_C.OnSuccess_F9BF87144456FC7F68C9798B711CF5A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28777_C::OnSuccess_F9BF87144456FC7F68C9798B711CF5A8(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28777_C", "OnSuccess_F9BF87144456FC7F68C9798B711CF5A8");

	Params::Quest_28777_C_OnSuccess_F9BF87144456FC7F68C9798B711CF5A8 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28777.Quest_28777_C.OnSuccess_5F710C2542C71D8D03129CAA65E5EB44
// (BlueprintCallable, BlueprintEvent)

void UQuest_28777_C::OnSuccess_5F710C2542C71D8D03129CAA65E5EB44()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28777_C", "OnSuccess_5F710C2542C71D8D03129CAA65E5EB44");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28777.Quest_28777_C.OnFinished_260BFB164DEB9D6AF28D98B7F6BD314F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28777_C::OnFinished_260BFB164DEB9D6AF28D98B7F6BD314F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28777_C", "OnFinished_260BFB164DEB9D6AF28D98B7F6BD314F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28777.Quest_28777_C.OnStop_260BFB164DEB9D6AF28D98B7F6BD314F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28777_C::OnStop_260BFB164DEB9D6AF28D98B7F6BD314F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28777_C", "OnStop_260BFB164DEB9D6AF28D98B7F6BD314F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28777.Quest_28777_C.OnDlgClosed_308571F44CCE8BC1794865A19B0B8241
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28777_C::OnDlgClosed_308571F44CCE8BC1794865A19B0B8241(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28777_C", "OnDlgClosed_308571F44CCE8BC1794865A19B0B8241");

	Params::Quest_28777_C_OnDlgClosed_308571F44CCE8BC1794865A19B0B8241 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28777.Quest_28777_C.OnDlgSelectedOption_308571F44CCE8BC1794865A19B0B8241
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28777_C::OnDlgSelectedOption_308571F44CCE8BC1794865A19B0B8241(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28777_C", "OnDlgSelectedOption_308571F44CCE8BC1794865A19B0B8241");

	Params::Quest_28777_C_OnDlgSelectedOption_308571F44CCE8BC1794865A19B0B8241 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
