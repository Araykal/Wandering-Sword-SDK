#pragma once



// Package: Quest_5531

#include "Basic.hpp"

#include "Quest_5531_classes.hpp"
#include "Quest_5531_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5531.Quest_5531_C.ExecuteUbergraph_Quest_5531
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5531_C::ExecuteUbergraph_Quest_5531(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5531_C", "ExecuteUbergraph_Quest_5531");

	Params::Quest_5531_C_ExecuteUbergraph_Quest_5531 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5531.Quest_5531_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5531_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5531_C", "HandleFinishing");

	Params::Quest_5531_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5531.Quest_5531_C.OnSuccess_A811420048EECD8EA19BA3A305B875D2
// (BlueprintCallable, BlueprintEvent)

void UQuest_5531_C::OnSuccess_A811420048EECD8EA19BA3A305B875D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5531_C", "OnSuccess_A811420048EECD8EA19BA3A305B875D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5531.Quest_5531_C.OnFinished_53A7F10648C7658DB0D31FB3A0839075
// (BlueprintCallable, BlueprintEvent)

void UQuest_5531_C::OnFinished_53A7F10648C7658DB0D31FB3A0839075()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5531_C", "OnFinished_53A7F10648C7658DB0D31FB3A0839075");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5531.Quest_5531_C.OnStop_53A7F10648C7658DB0D31FB3A0839075
// (BlueprintCallable, BlueprintEvent)

void UQuest_5531_C::OnStop_53A7F10648C7658DB0D31FB3A0839075()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5531_C", "OnStop_53A7F10648C7658DB0D31FB3A0839075");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5531.Quest_5531_C.OnDlgClosed_1F00F4594F65ADFC6F21EBB672924308
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5531_C::OnDlgClosed_1F00F4594F65ADFC6F21EBB672924308(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5531_C", "OnDlgClosed_1F00F4594F65ADFC6F21EBB672924308");

	Params::Quest_5531_C_OnDlgClosed_1F00F4594F65ADFC6F21EBB672924308 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5531.Quest_5531_C.OnDlgSelectedOption_1F00F4594F65ADFC6F21EBB672924308
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5531_C::OnDlgSelectedOption_1F00F4594F65ADFC6F21EBB672924308(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5531_C", "OnDlgSelectedOption_1F00F4594F65ADFC6F21EBB672924308");

	Params::Quest_5531_C_OnDlgSelectedOption_1F00F4594F65ADFC6F21EBB672924308 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
