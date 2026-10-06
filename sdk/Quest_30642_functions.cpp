#pragma once



// Package: Quest_30642

#include "Basic.hpp"

#include "Quest_30642_classes.hpp"
#include "Quest_30642_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30642.Quest_30642_C.ExecuteUbergraph_Quest_30642
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30642_C::ExecuteUbergraph_Quest_30642(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30642_C", "ExecuteUbergraph_Quest_30642");

	Params::Quest_30642_C_ExecuteUbergraph_Quest_30642 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30642.Quest_30642_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30642_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30642_C", "HandleFinishing");

	Params::Quest_30642_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30642.Quest_30642_C.OnSuccess_4B90C2314C7FC77E7436BCA51B3AA59C
// (BlueprintCallable, BlueprintEvent)

void UQuest_30642_C::OnSuccess_4B90C2314C7FC77E7436BCA51B3AA59C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30642_C", "OnSuccess_4B90C2314C7FC77E7436BCA51B3AA59C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30642.Quest_30642_C.OnFinished_6174350549B9F101FAD3868502C29584
// (BlueprintCallable, BlueprintEvent)

void UQuest_30642_C::OnFinished_6174350549B9F101FAD3868502C29584()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30642_C", "OnFinished_6174350549B9F101FAD3868502C29584");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30642.Quest_30642_C.OnStop_6174350549B9F101FAD3868502C29584
// (BlueprintCallable, BlueprintEvent)

void UQuest_30642_C::OnStop_6174350549B9F101FAD3868502C29584()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30642_C", "OnStop_6174350549B9F101FAD3868502C29584");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30642.Quest_30642_C.OnDlgClosed_5CDF08CE484FB091022C5E84902D414C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30642_C::OnDlgClosed_5CDF08CE484FB091022C5E84902D414C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30642_C", "OnDlgClosed_5CDF08CE484FB091022C5E84902D414C");

	Params::Quest_30642_C_OnDlgClosed_5CDF08CE484FB091022C5E84902D414C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30642.Quest_30642_C.OnDlgSelectedOption_5CDF08CE484FB091022C5E84902D414C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30642_C::OnDlgSelectedOption_5CDF08CE484FB091022C5E84902D414C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30642_C", "OnDlgSelectedOption_5CDF08CE484FB091022C5E84902D414C");

	Params::Quest_30642_C_OnDlgSelectedOption_5CDF08CE484FB091022C5E84902D414C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
