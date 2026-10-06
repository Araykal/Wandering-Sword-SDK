#pragma once



// Package: Quest_5512

#include "Basic.hpp"

#include "Quest_5512_classes.hpp"
#include "Quest_5512_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5512.Quest_5512_C.ExecuteUbergraph_Quest_5512
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5512_C::ExecuteUbergraph_Quest_5512(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5512_C", "ExecuteUbergraph_Quest_5512");

	Params::Quest_5512_C_ExecuteUbergraph_Quest_5512 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5512.Quest_5512_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5512_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5512_C", "HandleFinishing");

	Params::Quest_5512_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5512.Quest_5512_C.OnSuccess_FEC3DF8D409755A507A48D8AB5743518
// (BlueprintCallable, BlueprintEvent)

void UQuest_5512_C::OnSuccess_FEC3DF8D409755A507A48D8AB5743518()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5512_C", "OnSuccess_FEC3DF8D409755A507A48D8AB5743518");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5512.Quest_5512_C.OnFinished_D5F4B43B477DB2B6B165B6A34BFE5504
// (BlueprintCallable, BlueprintEvent)

void UQuest_5512_C::OnFinished_D5F4B43B477DB2B6B165B6A34BFE5504()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5512_C", "OnFinished_D5F4B43B477DB2B6B165B6A34BFE5504");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5512.Quest_5512_C.OnStop_D5F4B43B477DB2B6B165B6A34BFE5504
// (BlueprintCallable, BlueprintEvent)

void UQuest_5512_C::OnStop_D5F4B43B477DB2B6B165B6A34BFE5504()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5512_C", "OnStop_D5F4B43B477DB2B6B165B6A34BFE5504");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5512.Quest_5512_C.OnDlgClosed_66038459457E4104D1BBBCBDB1B9FB0A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5512_C::OnDlgClosed_66038459457E4104D1BBBCBDB1B9FB0A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5512_C", "OnDlgClosed_66038459457E4104D1BBBCBDB1B9FB0A");

	Params::Quest_5512_C_OnDlgClosed_66038459457E4104D1BBBCBDB1B9FB0A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5512.Quest_5512_C.OnDlgSelectedOption_66038459457E4104D1BBBCBDB1B9FB0A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5512_C::OnDlgSelectedOption_66038459457E4104D1BBBCBDB1B9FB0A(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5512_C", "OnDlgSelectedOption_66038459457E4104D1BBBCBDB1B9FB0A");

	Params::Quest_5512_C_OnDlgSelectedOption_66038459457E4104D1BBBCBDB1B9FB0A Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
