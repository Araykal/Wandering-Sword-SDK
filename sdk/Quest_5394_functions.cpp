#pragma once



// Package: Quest_5394

#include "Basic.hpp"

#include "Quest_5394_classes.hpp"
#include "Quest_5394_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5394.Quest_5394_C.ExecuteUbergraph_Quest_5394
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5394_C::ExecuteUbergraph_Quest_5394(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5394_C", "ExecuteUbergraph_Quest_5394");

	Params::Quest_5394_C_ExecuteUbergraph_Quest_5394 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5394.Quest_5394_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5394_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5394_C", "HandleFinishing");

	Params::Quest_5394_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5394.Quest_5394_C.OnFinished_DF90966B4B8B287FCE24E994DCE475E6
// (BlueprintCallable, BlueprintEvent)

void UQuest_5394_C::OnFinished_DF90966B4B8B287FCE24E994DCE475E6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5394_C", "OnFinished_DF90966B4B8B287FCE24E994DCE475E6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5394.Quest_5394_C.OnStop_DF90966B4B8B287FCE24E994DCE475E6
// (BlueprintCallable, BlueprintEvent)

void UQuest_5394_C::OnStop_DF90966B4B8B287FCE24E994DCE475E6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5394_C", "OnStop_DF90966B4B8B287FCE24E994DCE475E6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5394.Quest_5394_C.OnDlgClosed_6A17C2E345130EE1D3207DACB33FC101
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5394_C::OnDlgClosed_6A17C2E345130EE1D3207DACB33FC101(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5394_C", "OnDlgClosed_6A17C2E345130EE1D3207DACB33FC101");

	Params::Quest_5394_C_OnDlgClosed_6A17C2E345130EE1D3207DACB33FC101 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5394.Quest_5394_C.OnDlgSelectedOption_6A17C2E345130EE1D3207DACB33FC101
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5394_C::OnDlgSelectedOption_6A17C2E345130EE1D3207DACB33FC101(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5394_C", "OnDlgSelectedOption_6A17C2E345130EE1D3207DACB33FC101");

	Params::Quest_5394_C_OnDlgSelectedOption_6A17C2E345130EE1D3207DACB33FC101 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
