#pragma once



// Package: Quest_7007

#include "Basic.hpp"

#include "Quest_7007_classes.hpp"
#include "Quest_7007_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_7007.Quest_7007_C.ExecuteUbergraph_Quest_7007
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7007_C::ExecuteUbergraph_Quest_7007(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7007_C", "ExecuteUbergraph_Quest_7007");

	Params::Quest_7007_C_ExecuteUbergraph_Quest_7007 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7007.Quest_7007_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7007_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7007_C", "HandleFinishing");

	Params::Quest_7007_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7007.Quest_7007_C.OnFinished_F0190BC949F2B9DF1D81CF9A5E6B564E
// (BlueprintCallable, BlueprintEvent)

void UQuest_7007_C::OnFinished_F0190BC949F2B9DF1D81CF9A5E6B564E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7007_C", "OnFinished_F0190BC949F2B9DF1D81CF9A5E6B564E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7007.Quest_7007_C.OnStop_F0190BC949F2B9DF1D81CF9A5E6B564E
// (BlueprintCallable, BlueprintEvent)

void UQuest_7007_C::OnStop_F0190BC949F2B9DF1D81CF9A5E6B564E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7007_C", "OnStop_F0190BC949F2B9DF1D81CF9A5E6B564E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_7007.Quest_7007_C.OnDlgClosed_0F83C4F24E042856D1A6FEA439BB7036
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7007_C::OnDlgClosed_0F83C4F24E042856D1A6FEA439BB7036(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7007_C", "OnDlgClosed_0F83C4F24E042856D1A6FEA439BB7036");

	Params::Quest_7007_C_OnDlgClosed_0F83C4F24E042856D1A6FEA439BB7036 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_7007.Quest_7007_C.OnDlgSelectedOption_0F83C4F24E042856D1A6FEA439BB7036
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_7007_C::OnDlgSelectedOption_0F83C4F24E042856D1A6FEA439BB7036(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_7007_C", "OnDlgSelectedOption_0F83C4F24E042856D1A6FEA439BB7036");

	Params::Quest_7007_C_OnDlgSelectedOption_0F83C4F24E042856D1A6FEA439BB7036 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
