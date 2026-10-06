#pragma once



// Package: Quest_5022

#include "Basic.hpp"

#include "Quest_5022_classes.hpp"
#include "Quest_5022_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5022.Quest_5022_C.ExecuteUbergraph_Quest_5022
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5022_C::ExecuteUbergraph_Quest_5022(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5022_C", "ExecuteUbergraph_Quest_5022");

	Params::Quest_5022_C_ExecuteUbergraph_Quest_5022 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5022.Quest_5022_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_5022_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5022_C", "End");

	Params::Quest_5022_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5022.Quest_5022_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5022_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5022_C", "HandleFinishing");

	Params::Quest_5022_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5022.Quest_5022_C.OnFinished_8FD19C674AD6A38939CD06BA570CBD2B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5022_C::OnFinished_8FD19C674AD6A38939CD06BA570CBD2B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5022_C", "OnFinished_8FD19C674AD6A38939CD06BA570CBD2B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5022.Quest_5022_C.OnStop_8FD19C674AD6A38939CD06BA570CBD2B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5022_C::OnStop_8FD19C674AD6A38939CD06BA570CBD2B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5022_C", "OnStop_8FD19C674AD6A38939CD06BA570CBD2B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5022.Quest_5022_C.OnDlgClosed_4997B88D4281332FD70A7F82E647E799
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5022_C::OnDlgClosed_4997B88D4281332FD70A7F82E647E799(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5022_C", "OnDlgClosed_4997B88D4281332FD70A7F82E647E799");

	Params::Quest_5022_C_OnDlgClosed_4997B88D4281332FD70A7F82E647E799 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5022.Quest_5022_C.OnDlgSelectedOption_4997B88D4281332FD70A7F82E647E799
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5022_C::OnDlgSelectedOption_4997B88D4281332FD70A7F82E647E799(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5022_C", "OnDlgSelectedOption_4997B88D4281332FD70A7F82E647E799");

	Params::Quest_5022_C_OnDlgSelectedOption_4997B88D4281332FD70A7F82E647E799 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
