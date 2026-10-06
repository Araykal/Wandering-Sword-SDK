#pragma once



// Package: Quest_5302

#include "Basic.hpp"

#include "Quest_5302_classes.hpp"
#include "Quest_5302_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5302.Quest_5302_C.ExecuteUbergraph_Quest_5302
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5302_C::ExecuteUbergraph_Quest_5302(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5302_C", "ExecuteUbergraph_Quest_5302");

	Params::Quest_5302_C_ExecuteUbergraph_Quest_5302 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5302.Quest_5302_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5302_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5302_C", "HandleFinishing");

	Params::Quest_5302_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5302.Quest_5302_C.OnSuccess_A395664247CFF15E1925C2A65A54602B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5302_C::OnSuccess_A395664247CFF15E1925C2A65A54602B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5302_C", "OnSuccess_A395664247CFF15E1925C2A65A54602B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5302.Quest_5302_C.OnFinished_B8E4AF74435B6560B9351E90D206EB05
// (BlueprintCallable, BlueprintEvent)

void UQuest_5302_C::OnFinished_B8E4AF74435B6560B9351E90D206EB05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5302_C", "OnFinished_B8E4AF74435B6560B9351E90D206EB05");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5302.Quest_5302_C.OnStop_B8E4AF74435B6560B9351E90D206EB05
// (BlueprintCallable, BlueprintEvent)

void UQuest_5302_C::OnStop_B8E4AF74435B6560B9351E90D206EB05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5302_C", "OnStop_B8E4AF74435B6560B9351E90D206EB05");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5302.Quest_5302_C.OnDlgClosed_3BECBE6748062957F616DBB6E7F3C5A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5302_C::OnDlgClosed_3BECBE6748062957F616DBB6E7F3C5A3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5302_C", "OnDlgClosed_3BECBE6748062957F616DBB6E7F3C5A3");

	Params::Quest_5302_C_OnDlgClosed_3BECBE6748062957F616DBB6E7F3C5A3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5302.Quest_5302_C.OnDlgSelectedOption_3BECBE6748062957F616DBB6E7F3C5A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5302_C::OnDlgSelectedOption_3BECBE6748062957F616DBB6E7F3C5A3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5302_C", "OnDlgSelectedOption_3BECBE6748062957F616DBB6E7F3C5A3");

	Params::Quest_5302_C_OnDlgSelectedOption_3BECBE6748062957F616DBB6E7F3C5A3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
