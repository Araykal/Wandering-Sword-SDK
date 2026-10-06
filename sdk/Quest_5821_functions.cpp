#pragma once



// Package: Quest_5821

#include "Basic.hpp"

#include "Quest_5821_classes.hpp"
#include "Quest_5821_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5821.Quest_5821_C.ExecuteUbergraph_Quest_5821
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5821_C::ExecuteUbergraph_Quest_5821(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5821_C", "ExecuteUbergraph_Quest_5821");

	Params::Quest_5821_C_ExecuteUbergraph_Quest_5821 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5821.Quest_5821_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5821_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5821_C", "HandleFinishing");

	Params::Quest_5821_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5821.Quest_5821_C.OnFinished_A2084E0848FC65E8B54C1A945F02AEE5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5821_C::OnFinished_A2084E0848FC65E8B54C1A945F02AEE5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5821_C", "OnFinished_A2084E0848FC65E8B54C1A945F02AEE5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5821.Quest_5821_C.OnStop_A2084E0848FC65E8B54C1A945F02AEE5
// (BlueprintCallable, BlueprintEvent)

void UQuest_5821_C::OnStop_A2084E0848FC65E8B54C1A945F02AEE5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5821_C", "OnStop_A2084E0848FC65E8B54C1A945F02AEE5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5821.Quest_5821_C.OnDlgClosed_9D7E31364C3C8DBF8DF1C590B5D61BE7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5821_C::OnDlgClosed_9D7E31364C3C8DBF8DF1C590B5D61BE7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5821_C", "OnDlgClosed_9D7E31364C3C8DBF8DF1C590B5D61BE7");

	Params::Quest_5821_C_OnDlgClosed_9D7E31364C3C8DBF8DF1C590B5D61BE7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5821.Quest_5821_C.OnDlgSelectedOption_9D7E31364C3C8DBF8DF1C590B5D61BE7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5821_C::OnDlgSelectedOption_9D7E31364C3C8DBF8DF1C590B5D61BE7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5821_C", "OnDlgSelectedOption_9D7E31364C3C8DBF8DF1C590B5D61BE7");

	Params::Quest_5821_C_OnDlgSelectedOption_9D7E31364C3C8DBF8DF1C590B5D61BE7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
