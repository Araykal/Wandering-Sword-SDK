#pragma once



// Package: Quest_28939

#include "Basic.hpp"

#include "Quest_28939_classes.hpp"
#include "Quest_28939_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28939.Quest_28939_C.ExecuteUbergraph_Quest_28939
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28939_C::ExecuteUbergraph_Quest_28939(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28939_C", "ExecuteUbergraph_Quest_28939");

	Params::Quest_28939_C_ExecuteUbergraph_Quest_28939 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28939.Quest_28939_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28939_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28939_C", "HandleFinishing");

	Params::Quest_28939_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28939.Quest_28939_C.OnSuccess_E9F957CE4A78805939F093B18F956EAB
// (BlueprintCallable, BlueprintEvent)

void UQuest_28939_C::OnSuccess_E9F957CE4A78805939F093B18F956EAB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28939_C", "OnSuccess_E9F957CE4A78805939F093B18F956EAB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28939.Quest_28939_C.OnFinished_94B782DB449750E87FD9A1AC6573FFBE
// (BlueprintCallable, BlueprintEvent)

void UQuest_28939_C::OnFinished_94B782DB449750E87FD9A1AC6573FFBE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28939_C", "OnFinished_94B782DB449750E87FD9A1AC6573FFBE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28939.Quest_28939_C.OnStop_94B782DB449750E87FD9A1AC6573FFBE
// (BlueprintCallable, BlueprintEvent)

void UQuest_28939_C::OnStop_94B782DB449750E87FD9A1AC6573FFBE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28939_C", "OnStop_94B782DB449750E87FD9A1AC6573FFBE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28939.Quest_28939_C.OnDlgClosed_4E73C4894913E1FF7F994C94F46C1234
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28939_C::OnDlgClosed_4E73C4894913E1FF7F994C94F46C1234(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28939_C", "OnDlgClosed_4E73C4894913E1FF7F994C94F46C1234");

	Params::Quest_28939_C_OnDlgClosed_4E73C4894913E1FF7F994C94F46C1234 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28939.Quest_28939_C.OnDlgSelectedOption_4E73C4894913E1FF7F994C94F46C1234
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28939_C::OnDlgSelectedOption_4E73C4894913E1FF7F994C94F46C1234(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28939_C", "OnDlgSelectedOption_4E73C4894913E1FF7F994C94F46C1234");

	Params::Quest_28939_C_OnDlgSelectedOption_4E73C4894913E1FF7F994C94F46C1234 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
