#pragma once



// Package: Quest_30093

#include "Basic.hpp"

#include "Quest_30093_classes.hpp"
#include "Quest_30093_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30093.Quest_30093_C.ExecuteUbergraph_Quest_30093
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30093_C::ExecuteUbergraph_Quest_30093(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30093_C", "ExecuteUbergraph_Quest_30093");

	Params::Quest_30093_C_ExecuteUbergraph_Quest_30093 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30093.Quest_30093_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30093_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30093_C", "HandleFinishing");

	Params::Quest_30093_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30093.Quest_30093_C.OnSuccess_9928D4B74DF7E8571D9328AE1085A60F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30093_C::OnSuccess_9928D4B74DF7E8571D9328AE1085A60F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30093_C", "OnSuccess_9928D4B74DF7E8571D9328AE1085A60F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30093.Quest_30093_C.OnFinished_A37F532542C4BE7B512E1FB391165C3C
// (BlueprintCallable, BlueprintEvent)

void UQuest_30093_C::OnFinished_A37F532542C4BE7B512E1FB391165C3C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30093_C", "OnFinished_A37F532542C4BE7B512E1FB391165C3C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30093.Quest_30093_C.OnStop_A37F532542C4BE7B512E1FB391165C3C
// (BlueprintCallable, BlueprintEvent)

void UQuest_30093_C::OnStop_A37F532542C4BE7B512E1FB391165C3C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30093_C", "OnStop_A37F532542C4BE7B512E1FB391165C3C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30093.Quest_30093_C.OnDlgClosed_B3DE6972474467D84C234AA8757EBEAF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30093_C::OnDlgClosed_B3DE6972474467D84C234AA8757EBEAF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30093_C", "OnDlgClosed_B3DE6972474467D84C234AA8757EBEAF");

	Params::Quest_30093_C_OnDlgClosed_B3DE6972474467D84C234AA8757EBEAF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30093.Quest_30093_C.OnDlgSelectedOption_B3DE6972474467D84C234AA8757EBEAF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30093_C::OnDlgSelectedOption_B3DE6972474467D84C234AA8757EBEAF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30093_C", "OnDlgSelectedOption_B3DE6972474467D84C234AA8757EBEAF");

	Params::Quest_30093_C_OnDlgSelectedOption_B3DE6972474467D84C234AA8757EBEAF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
