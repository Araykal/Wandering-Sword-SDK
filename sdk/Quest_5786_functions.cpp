#pragma once



// Package: Quest_5786

#include "Basic.hpp"

#include "Quest_5786_classes.hpp"
#include "Quest_5786_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5786.Quest_5786_C.ExecuteUbergraph_Quest_5786
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5786_C::ExecuteUbergraph_Quest_5786(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5786_C", "ExecuteUbergraph_Quest_5786");

	Params::Quest_5786_C_ExecuteUbergraph_Quest_5786 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5786.Quest_5786_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5786_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5786_C", "HandleFinishing");

	Params::Quest_5786_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5786.Quest_5786_C.OnSuccess_D488BE614DEEB794EC57A6B99BDEF75A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5786_C::OnSuccess_D488BE614DEEB794EC57A6B99BDEF75A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5786_C", "OnSuccess_D488BE614DEEB794EC57A6B99BDEF75A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5786.Quest_5786_C.OnFinished_22475E9641A1F2BD3EB0DB9A1AF67105
// (BlueprintCallable, BlueprintEvent)

void UQuest_5786_C::OnFinished_22475E9641A1F2BD3EB0DB9A1AF67105()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5786_C", "OnFinished_22475E9641A1F2BD3EB0DB9A1AF67105");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5786.Quest_5786_C.OnStop_22475E9641A1F2BD3EB0DB9A1AF67105
// (BlueprintCallable, BlueprintEvent)

void UQuest_5786_C::OnStop_22475E9641A1F2BD3EB0DB9A1AF67105()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5786_C", "OnStop_22475E9641A1F2BD3EB0DB9A1AF67105");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5786.Quest_5786_C.OnDlgClosed_F663BF4543746D8ED2902EAB43B6B1EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5786_C::OnDlgClosed_F663BF4543746D8ED2902EAB43B6B1EB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5786_C", "OnDlgClosed_F663BF4543746D8ED2902EAB43B6B1EB");

	Params::Quest_5786_C_OnDlgClosed_F663BF4543746D8ED2902EAB43B6B1EB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5786.Quest_5786_C.OnDlgSelectedOption_F663BF4543746D8ED2902EAB43B6B1EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5786_C::OnDlgSelectedOption_F663BF4543746D8ED2902EAB43B6B1EB(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5786_C", "OnDlgSelectedOption_F663BF4543746D8ED2902EAB43B6B1EB");

	Params::Quest_5786_C_OnDlgSelectedOption_F663BF4543746D8ED2902EAB43B6B1EB Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
