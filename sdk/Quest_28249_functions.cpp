#pragma once



// Package: Quest_28249

#include "Basic.hpp"

#include "Quest_28249_classes.hpp"
#include "Quest_28249_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28249.Quest_28249_C.ExecuteUbergraph_Quest_28249
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28249_C::ExecuteUbergraph_Quest_28249(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28249_C", "ExecuteUbergraph_Quest_28249");

	Params::Quest_28249_C_ExecuteUbergraph_Quest_28249 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28249.Quest_28249_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28249_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28249_C", "HandleFinishing");

	Params::Quest_28249_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28249.Quest_28249_C.OnFinished_57DC33674771B765EE6D52A6C040D371
// (BlueprintCallable, BlueprintEvent)

void UQuest_28249_C::OnFinished_57DC33674771B765EE6D52A6C040D371()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28249_C", "OnFinished_57DC33674771B765EE6D52A6C040D371");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28249.Quest_28249_C.OnStop_57DC33674771B765EE6D52A6C040D371
// (BlueprintCallable, BlueprintEvent)

void UQuest_28249_C::OnStop_57DC33674771B765EE6D52A6C040D371()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28249_C", "OnStop_57DC33674771B765EE6D52A6C040D371");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28249.Quest_28249_C.OnDlgClosed_6EBBDF6C45159E0F553025852A7E094B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28249_C::OnDlgClosed_6EBBDF6C45159E0F553025852A7E094B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28249_C", "OnDlgClosed_6EBBDF6C45159E0F553025852A7E094B");

	Params::Quest_28249_C_OnDlgClosed_6EBBDF6C45159E0F553025852A7E094B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28249.Quest_28249_C.OnDlgSelectedOption_6EBBDF6C45159E0F553025852A7E094B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28249_C::OnDlgSelectedOption_6EBBDF6C45159E0F553025852A7E094B(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28249_C", "OnDlgSelectedOption_6EBBDF6C45159E0F553025852A7E094B");

	Params::Quest_28249_C_OnDlgSelectedOption_6EBBDF6C45159E0F553025852A7E094B Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
