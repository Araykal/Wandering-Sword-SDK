#pragma once



// Package: Quest_31141

#include "Basic.hpp"

#include "Quest_31141_classes.hpp"
#include "Quest_31141_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_31141.Quest_31141_C.ExecuteUbergraph_Quest_31141
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31141_C::ExecuteUbergraph_Quest_31141(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31141_C", "ExecuteUbergraph_Quest_31141");

	Params::Quest_31141_C_ExecuteUbergraph_Quest_31141 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31141.Quest_31141_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31141_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31141_C", "HandleFinishing");

	Params::Quest_31141_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31141.Quest_31141_C.OnFinished_50FB941341035D47355422BD2CEE944D
// (BlueprintCallable, BlueprintEvent)

void UQuest_31141_C::OnFinished_50FB941341035D47355422BD2CEE944D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31141_C", "OnFinished_50FB941341035D47355422BD2CEE944D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_31141.Quest_31141_C.OnStop_50FB941341035D47355422BD2CEE944D
// (BlueprintCallable, BlueprintEvent)

void UQuest_31141_C::OnStop_50FB941341035D47355422BD2CEE944D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31141_C", "OnStop_50FB941341035D47355422BD2CEE944D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_31141.Quest_31141_C.OnDlgClosed_3515DBF844BE94BDE9F48891366D5ED7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31141_C::OnDlgClosed_3515DBF844BE94BDE9F48891366D5ED7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31141_C", "OnDlgClosed_3515DBF844BE94BDE9F48891366D5ED7");

	Params::Quest_31141_C_OnDlgClosed_3515DBF844BE94BDE9F48891366D5ED7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31141.Quest_31141_C.OnDlgSelectedOption_3515DBF844BE94BDE9F48891366D5ED7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31141_C::OnDlgSelectedOption_3515DBF844BE94BDE9F48891366D5ED7(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31141_C", "OnDlgSelectedOption_3515DBF844BE94BDE9F48891366D5ED7");

	Params::Quest_31141_C_OnDlgSelectedOption_3515DBF844BE94BDE9F48891366D5ED7 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
