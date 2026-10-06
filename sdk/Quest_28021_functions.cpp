#pragma once



// Package: Quest_28021

#include "Basic.hpp"

#include "Quest_28021_classes.hpp"
#include "Quest_28021_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28021.Quest_28021_C.ExecuteUbergraph_Quest_28021
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28021_C::ExecuteUbergraph_Quest_28021(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28021_C", "ExecuteUbergraph_Quest_28021");

	Params::Quest_28021_C_ExecuteUbergraph_Quest_28021 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28021.Quest_28021_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28021_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28021_C", "HandleFinishing");

	Params::Quest_28021_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28021.Quest_28021_C.OnSuccess_B7DA42234C7D7CB396A4CC9864016DD6
// (BlueprintCallable, BlueprintEvent)

void UQuest_28021_C::OnSuccess_B7DA42234C7D7CB396A4CC9864016DD6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28021_C", "OnSuccess_B7DA42234C7D7CB396A4CC9864016DD6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28021.Quest_28021_C.OnFinished_2DE6F3F14F02AE14697E338E5981C636
// (BlueprintCallable, BlueprintEvent)

void UQuest_28021_C::OnFinished_2DE6F3F14F02AE14697E338E5981C636()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28021_C", "OnFinished_2DE6F3F14F02AE14697E338E5981C636");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28021.Quest_28021_C.OnStop_2DE6F3F14F02AE14697E338E5981C636
// (BlueprintCallable, BlueprintEvent)

void UQuest_28021_C::OnStop_2DE6F3F14F02AE14697E338E5981C636()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28021_C", "OnStop_2DE6F3F14F02AE14697E338E5981C636");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28021.Quest_28021_C.OnDlgClosed_5AA6B5364C6966ED8FADF693F7EB99A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28021_C::OnDlgClosed_5AA6B5364C6966ED8FADF693F7EB99A4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28021_C", "OnDlgClosed_5AA6B5364C6966ED8FADF693F7EB99A4");

	Params::Quest_28021_C_OnDlgClosed_5AA6B5364C6966ED8FADF693F7EB99A4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28021.Quest_28021_C.OnDlgSelectedOption_5AA6B5364C6966ED8FADF693F7EB99A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28021_C::OnDlgSelectedOption_5AA6B5364C6966ED8FADF693F7EB99A4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28021_C", "OnDlgSelectedOption_5AA6B5364C6966ED8FADF693F7EB99A4");

	Params::Quest_28021_C_OnDlgSelectedOption_5AA6B5364C6966ED8FADF693F7EB99A4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
