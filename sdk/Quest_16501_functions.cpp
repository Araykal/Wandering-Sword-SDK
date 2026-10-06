#pragma once



// Package: Quest_16501

#include "Basic.hpp"

#include "Quest_16501_classes.hpp"
#include "Quest_16501_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16501.Quest_16501_C.ExecuteUbergraph_Quest_16501
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16501_C::ExecuteUbergraph_Quest_16501(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16501_C", "ExecuteUbergraph_Quest_16501");

	Params::Quest_16501_C_ExecuteUbergraph_Quest_16501 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16501.Quest_16501_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16501_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16501_C", "HandleFinishing");

	Params::Quest_16501_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16501.Quest_16501_C.OnSuccess_87F7FDEE4C57E7C4D8F925BA6090DEAE
// (BlueprintCallable, BlueprintEvent)

void UQuest_16501_C::OnSuccess_87F7FDEE4C57E7C4D8F925BA6090DEAE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16501_C", "OnSuccess_87F7FDEE4C57E7C4D8F925BA6090DEAE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16501.Quest_16501_C.OnFinished_ABC9EF3741C4B19DE6226391DD4DE27A
// (BlueprintCallable, BlueprintEvent)

void UQuest_16501_C::OnFinished_ABC9EF3741C4B19DE6226391DD4DE27A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16501_C", "OnFinished_ABC9EF3741C4B19DE6226391DD4DE27A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16501.Quest_16501_C.OnStop_ABC9EF3741C4B19DE6226391DD4DE27A
// (BlueprintCallable, BlueprintEvent)

void UQuest_16501_C::OnStop_ABC9EF3741C4B19DE6226391DD4DE27A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16501_C", "OnStop_ABC9EF3741C4B19DE6226391DD4DE27A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16501.Quest_16501_C.OnDlgClosed_3E8B897E4A90CA5B50B9F19588772A61
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16501_C::OnDlgClosed_3E8B897E4A90CA5B50B9F19588772A61(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16501_C", "OnDlgClosed_3E8B897E4A90CA5B50B9F19588772A61");

	Params::Quest_16501_C_OnDlgClosed_3E8B897E4A90CA5B50B9F19588772A61 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16501.Quest_16501_C.OnDlgSelectedOption_3E8B897E4A90CA5B50B9F19588772A61
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16501_C::OnDlgSelectedOption_3E8B897E4A90CA5B50B9F19588772A61(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16501_C", "OnDlgSelectedOption_3E8B897E4A90CA5B50B9F19588772A61");

	Params::Quest_16501_C_OnDlgSelectedOption_3E8B897E4A90CA5B50B9F19588772A61 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
