#pragma once



// Package: Quest_5426

#include "Basic.hpp"

#include "Quest_5426_classes.hpp"
#include "Quest_5426_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5426.Quest_5426_C.ExecuteUbergraph_Quest_5426
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5426_C::ExecuteUbergraph_Quest_5426(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5426_C", "ExecuteUbergraph_Quest_5426");

	Params::Quest_5426_C_ExecuteUbergraph_Quest_5426 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5426.Quest_5426_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5426_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5426_C", "HandleFinishing");

	Params::Quest_5426_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5426.Quest_5426_C.OnFinished_324DCD5441275E3693682C9953EB8A69
// (BlueprintCallable, BlueprintEvent)

void UQuest_5426_C::OnFinished_324DCD5441275E3693682C9953EB8A69()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5426_C", "OnFinished_324DCD5441275E3693682C9953EB8A69");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5426.Quest_5426_C.OnStop_324DCD5441275E3693682C9953EB8A69
// (BlueprintCallable, BlueprintEvent)

void UQuest_5426_C::OnStop_324DCD5441275E3693682C9953EB8A69()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5426_C", "OnStop_324DCD5441275E3693682C9953EB8A69");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5426.Quest_5426_C.OnDlgClosed_64D908C24F2BA14B9BE92BA05BD1C043
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5426_C::OnDlgClosed_64D908C24F2BA14B9BE92BA05BD1C043(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5426_C", "OnDlgClosed_64D908C24F2BA14B9BE92BA05BD1C043");

	Params::Quest_5426_C_OnDlgClosed_64D908C24F2BA14B9BE92BA05BD1C043 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5426.Quest_5426_C.OnDlgSelectedOption_64D908C24F2BA14B9BE92BA05BD1C043
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5426_C::OnDlgSelectedOption_64D908C24F2BA14B9BE92BA05BD1C043(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5426_C", "OnDlgSelectedOption_64D908C24F2BA14B9BE92BA05BD1C043");

	Params::Quest_5426_C_OnDlgSelectedOption_64D908C24F2BA14B9BE92BA05BD1C043 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
