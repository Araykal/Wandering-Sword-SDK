#pragma once



// Package: Quest_5265

#include "Basic.hpp"

#include "Quest_5265_classes.hpp"
#include "Quest_5265_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5265.Quest_5265_C.ExecuteUbergraph_Quest_5265
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5265_C::ExecuteUbergraph_Quest_5265(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5265_C", "ExecuteUbergraph_Quest_5265");

	Params::Quest_5265_C_ExecuteUbergraph_Quest_5265 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5265.Quest_5265_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5265_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5265_C", "HandleFinishing");

	Params::Quest_5265_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5265.Quest_5265_C.OnSuccess_40C44C204364F7E7CE732EB28B070162
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5265_C::OnSuccess_40C44C204364F7E7CE732EB28B070162(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5265_C", "OnSuccess_40C44C204364F7E7CE732EB28B070162");

	Params::Quest_5265_C_OnSuccess_40C44C204364F7E7CE732EB28B070162 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5265.Quest_5265_C.OnSuccess_F738F11640659C69B4D6D196CB5AD512
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5265_C::OnSuccess_F738F11640659C69B4D6D196CB5AD512(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5265_C", "OnSuccess_F738F11640659C69B4D6D196CB5AD512");

	Params::Quest_5265_C_OnSuccess_F738F11640659C69B4D6D196CB5AD512 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5265.Quest_5265_C.OnSuccess_5817D1704B4FD19DA29E4D994610E15A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5265_C::OnSuccess_5817D1704B4FD19DA29E4D994610E15A(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5265_C", "OnSuccess_5817D1704B4FD19DA29E4D994610E15A");

	Params::Quest_5265_C_OnSuccess_5817D1704B4FD19DA29E4D994610E15A Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5265.Quest_5265_C.OnFinished_9846E79D47323B970167F7BAFCBB7073
// (BlueprintCallable, BlueprintEvent)

void UQuest_5265_C::OnFinished_9846E79D47323B970167F7BAFCBB7073()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5265_C", "OnFinished_9846E79D47323B970167F7BAFCBB7073");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5265.Quest_5265_C.OnStop_9846E79D47323B970167F7BAFCBB7073
// (BlueprintCallable, BlueprintEvent)

void UQuest_5265_C::OnStop_9846E79D47323B970167F7BAFCBB7073()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5265_C", "OnStop_9846E79D47323B970167F7BAFCBB7073");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5265.Quest_5265_C.OnDlgClosed_E15DE8384EF2BB3A979A76AFA07A0A47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5265_C::OnDlgClosed_E15DE8384EF2BB3A979A76AFA07A0A47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5265_C", "OnDlgClosed_E15DE8384EF2BB3A979A76AFA07A0A47");

	Params::Quest_5265_C_OnDlgClosed_E15DE8384EF2BB3A979A76AFA07A0A47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5265.Quest_5265_C.OnDlgSelectedOption_E15DE8384EF2BB3A979A76AFA07A0A47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5265_C::OnDlgSelectedOption_E15DE8384EF2BB3A979A76AFA07A0A47(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5265_C", "OnDlgSelectedOption_E15DE8384EF2BB3A979A76AFA07A0A47");

	Params::Quest_5265_C_OnDlgSelectedOption_E15DE8384EF2BB3A979A76AFA07A0A47 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5265.Quest_5265_C.OnSuccess_4E7AC497430D9D9AFD283DA1CB59D588
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_5265_C::OnSuccess_4E7AC497430D9D9AFD283DA1CB59D588(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5265_C", "OnSuccess_4E7AC497430D9D9AFD283DA1CB59D588");

	Params::Quest_5265_C_OnSuccess_4E7AC497430D9D9AFD283DA1CB59D588 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
