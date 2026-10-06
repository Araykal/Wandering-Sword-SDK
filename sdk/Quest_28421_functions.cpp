#pragma once



// Package: Quest_28421

#include "Basic.hpp"

#include "Quest_28421_classes.hpp"
#include "Quest_28421_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28421.Quest_28421_C.ExecuteUbergraph_Quest_28421
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28421_C::ExecuteUbergraph_Quest_28421(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28421_C", "ExecuteUbergraph_Quest_28421");

	Params::Quest_28421_C_ExecuteUbergraph_Quest_28421 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28421.Quest_28421_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28421_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28421_C", "HandleFinishing");

	Params::Quest_28421_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28421.Quest_28421_C.OnFinished_1AAF3E974544056B82A3BDA52F149A82
// (BlueprintCallable, BlueprintEvent)

void UQuest_28421_C::OnFinished_1AAF3E974544056B82A3BDA52F149A82()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28421_C", "OnFinished_1AAF3E974544056B82A3BDA52F149A82");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28421.Quest_28421_C.OnStop_1AAF3E974544056B82A3BDA52F149A82
// (BlueprintCallable, BlueprintEvent)

void UQuest_28421_C::OnStop_1AAF3E974544056B82A3BDA52F149A82()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28421_C", "OnStop_1AAF3E974544056B82A3BDA52F149A82");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28421.Quest_28421_C.OnDlgClosed_EBF301514C0B58D64BBB9CA55C261191
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28421_C::OnDlgClosed_EBF301514C0B58D64BBB9CA55C261191(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28421_C", "OnDlgClosed_EBF301514C0B58D64BBB9CA55C261191");

	Params::Quest_28421_C_OnDlgClosed_EBF301514C0B58D64BBB9CA55C261191 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28421.Quest_28421_C.OnDlgSelectedOption_EBF301514C0B58D64BBB9CA55C261191
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28421_C::OnDlgSelectedOption_EBF301514C0B58D64BBB9CA55C261191(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28421_C", "OnDlgSelectedOption_EBF301514C0B58D64BBB9CA55C261191");

	Params::Quest_28421_C_OnDlgSelectedOption_EBF301514C0B58D64BBB9CA55C261191 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
