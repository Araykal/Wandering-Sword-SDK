#pragma once



// Package: Quest_28747

#include "Basic.hpp"

#include "Quest_28747_classes.hpp"
#include "Quest_28747_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28747.Quest_28747_C.ExecuteUbergraph_Quest_28747
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28747_C::ExecuteUbergraph_Quest_28747(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28747_C", "ExecuteUbergraph_Quest_28747");

	Params::Quest_28747_C_ExecuteUbergraph_Quest_28747 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28747.Quest_28747_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28747_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28747_C", "HandleFinishing");

	Params::Quest_28747_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28747.Quest_28747_C.OnSuccess_27AA646648EFFD047C722FB0C7040100
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28747_C::OnSuccess_27AA646648EFFD047C722FB0C7040100(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28747_C", "OnSuccess_27AA646648EFFD047C722FB0C7040100");

	Params::Quest_28747_C_OnSuccess_27AA646648EFFD047C722FB0C7040100 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28747.Quest_28747_C.OnSuccess_773603F04411BBCA407E2F808777C7A7
// (BlueprintCallable, BlueprintEvent)

void UQuest_28747_C::OnSuccess_773603F04411BBCA407E2F808777C7A7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28747_C", "OnSuccess_773603F04411BBCA407E2F808777C7A7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28747.Quest_28747_C.OnSuccess_6F32E80A472BA1B9297E05BF33602088
// (BlueprintCallable, BlueprintEvent)

void UQuest_28747_C::OnSuccess_6F32E80A472BA1B9297E05BF33602088()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28747_C", "OnSuccess_6F32E80A472BA1B9297E05BF33602088");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28747.Quest_28747_C.OnSuccess_8A3EC7F74C1FF74FADC449B15B27C89F
// (BlueprintCallable, BlueprintEvent)

void UQuest_28747_C::OnSuccess_8A3EC7F74C1FF74FADC449B15B27C89F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28747_C", "OnSuccess_8A3EC7F74C1FF74FADC449B15B27C89F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28747.Quest_28747_C.OnFinished_946F4A46491D6CEFC9AF31AF76DF1C7E
// (BlueprintCallable, BlueprintEvent)

void UQuest_28747_C::OnFinished_946F4A46491D6CEFC9AF31AF76DF1C7E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28747_C", "OnFinished_946F4A46491D6CEFC9AF31AF76DF1C7E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28747.Quest_28747_C.OnStop_946F4A46491D6CEFC9AF31AF76DF1C7E
// (BlueprintCallable, BlueprintEvent)

void UQuest_28747_C::OnStop_946F4A46491D6CEFC9AF31AF76DF1C7E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28747_C", "OnStop_946F4A46491D6CEFC9AF31AF76DF1C7E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28747.Quest_28747_C.OnDlgClosed_E7DE56A242F4E01263AB8F865D625417
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28747_C::OnDlgClosed_E7DE56A242F4E01263AB8F865D625417(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28747_C", "OnDlgClosed_E7DE56A242F4E01263AB8F865D625417");

	Params::Quest_28747_C_OnDlgClosed_E7DE56A242F4E01263AB8F865D625417 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28747.Quest_28747_C.OnDlgSelectedOption_E7DE56A242F4E01263AB8F865D625417
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28747_C::OnDlgSelectedOption_E7DE56A242F4E01263AB8F865D625417(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28747_C", "OnDlgSelectedOption_E7DE56A242F4E01263AB8F865D625417");

	Params::Quest_28747_C_OnDlgSelectedOption_E7DE56A242F4E01263AB8F865D625417 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28747.Quest_28747_C.OnSuccess_26D9E37149C71109782DF49CDB6C58FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_28747_C::OnSuccess_26D9E37149C71109782DF49CDB6C58FD(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28747_C", "OnSuccess_26D9E37149C71109782DF49CDB6C58FD");

	Params::Quest_28747_C_OnSuccess_26D9E37149C71109782DF49CDB6C58FD Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
