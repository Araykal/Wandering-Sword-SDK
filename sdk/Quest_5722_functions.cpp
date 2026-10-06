#pragma once



// Package: Quest_5722

#include "Basic.hpp"

#include "Quest_5722_classes.hpp"
#include "Quest_5722_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5722.Quest_5722_C.ExecuteUbergraph_Quest_5722
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5722_C::ExecuteUbergraph_Quest_5722(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5722_C", "ExecuteUbergraph_Quest_5722");

	Params::Quest_5722_C_ExecuteUbergraph_Quest_5722 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5722.Quest_5722_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5722_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5722_C", "HandleFinishing");

	Params::Quest_5722_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5722.Quest_5722_C.OnSuccess_9FDCE55E4752766EB4954C906DF6057A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5722_C::OnSuccess_9FDCE55E4752766EB4954C906DF6057A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5722_C", "OnSuccess_9FDCE55E4752766EB4954C906DF6057A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5722.Quest_5722_C.OnFinished_45D42A4F4A7E44F95F8D318C140CCA98
// (BlueprintCallable, BlueprintEvent)

void UQuest_5722_C::OnFinished_45D42A4F4A7E44F95F8D318C140CCA98()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5722_C", "OnFinished_45D42A4F4A7E44F95F8D318C140CCA98");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5722.Quest_5722_C.OnStop_45D42A4F4A7E44F95F8D318C140CCA98
// (BlueprintCallable, BlueprintEvent)

void UQuest_5722_C::OnStop_45D42A4F4A7E44F95F8D318C140CCA98()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5722_C", "OnStop_45D42A4F4A7E44F95F8D318C140CCA98");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5722.Quest_5722_C.OnDlgClosed_AEEEBF294E44C606BBCA9CA36694CC0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5722_C::OnDlgClosed_AEEEBF294E44C606BBCA9CA36694CC0F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5722_C", "OnDlgClosed_AEEEBF294E44C606BBCA9CA36694CC0F");

	Params::Quest_5722_C_OnDlgClosed_AEEEBF294E44C606BBCA9CA36694CC0F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5722.Quest_5722_C.OnDlgSelectedOption_AEEEBF294E44C606BBCA9CA36694CC0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5722_C::OnDlgSelectedOption_AEEEBF294E44C606BBCA9CA36694CC0F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5722_C", "OnDlgSelectedOption_AEEEBF294E44C606BBCA9CA36694CC0F");

	Params::Quest_5722_C_OnDlgSelectedOption_AEEEBF294E44C606BBCA9CA36694CC0F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
