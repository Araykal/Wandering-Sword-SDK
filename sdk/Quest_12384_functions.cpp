#pragma once



// Package: Quest_12384

#include "Basic.hpp"

#include "Quest_12384_classes.hpp"
#include "Quest_12384_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12384.Quest_12384_C.ExecuteUbergraph_Quest_12384
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12384_C::ExecuteUbergraph_Quest_12384(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12384_C", "ExecuteUbergraph_Quest_12384");

	Params::Quest_12384_C_ExecuteUbergraph_Quest_12384 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12384.Quest_12384_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12384_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12384_C", "HandleFinishing");

	Params::Quest_12384_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12384.Quest_12384_C.OnSuccess_5D6577D24499FBB1CB2EADB0294804C7
// (BlueprintCallable, BlueprintEvent)

void UQuest_12384_C::OnSuccess_5D6577D24499FBB1CB2EADB0294804C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12384_C", "OnSuccess_5D6577D24499FBB1CB2EADB0294804C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12384.Quest_12384_C.OnFinished_90B247504373F9EFCDD55B89D480EF3E
// (BlueprintCallable, BlueprintEvent)

void UQuest_12384_C::OnFinished_90B247504373F9EFCDD55B89D480EF3E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12384_C", "OnFinished_90B247504373F9EFCDD55B89D480EF3E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12384.Quest_12384_C.OnStop_90B247504373F9EFCDD55B89D480EF3E
// (BlueprintCallable, BlueprintEvent)

void UQuest_12384_C::OnStop_90B247504373F9EFCDD55B89D480EF3E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12384_C", "OnStop_90B247504373F9EFCDD55B89D480EF3E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12384.Quest_12384_C.OnDlgClosed_B703F1D44DBC67717C0DED8ADBC5E8F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12384_C::OnDlgClosed_B703F1D44DBC67717C0DED8ADBC5E8F6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12384_C", "OnDlgClosed_B703F1D44DBC67717C0DED8ADBC5E8F6");

	Params::Quest_12384_C_OnDlgClosed_B703F1D44DBC67717C0DED8ADBC5E8F6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12384.Quest_12384_C.OnDlgSelectedOption_B703F1D44DBC67717C0DED8ADBC5E8F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12384_C::OnDlgSelectedOption_B703F1D44DBC67717C0DED8ADBC5E8F6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12384_C", "OnDlgSelectedOption_B703F1D44DBC67717C0DED8ADBC5E8F6");

	Params::Quest_12384_C_OnDlgSelectedOption_B703F1D44DBC67717C0DED8ADBC5E8F6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
