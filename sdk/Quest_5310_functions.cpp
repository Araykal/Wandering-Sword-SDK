#pragma once



// Package: Quest_5310

#include "Basic.hpp"

#include "Quest_5310_classes.hpp"
#include "Quest_5310_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5310.Quest_5310_C.ExecuteUbergraph_Quest_5310
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5310_C::ExecuteUbergraph_Quest_5310(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5310_C", "ExecuteUbergraph_Quest_5310");

	Params::Quest_5310_C_ExecuteUbergraph_Quest_5310 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5310.Quest_5310_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5310_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5310_C", "HandleFinishing");

	Params::Quest_5310_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5310.Quest_5310_C.OnSuccess_846BB56748993D81069D53B637AB1233
// (BlueprintCallable, BlueprintEvent)

void UQuest_5310_C::OnSuccess_846BB56748993D81069D53B637AB1233()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5310_C", "OnSuccess_846BB56748993D81069D53B637AB1233");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5310.Quest_5310_C.OnFinished_B39281EA4D0C9AAFAC85BCA921AF94FD
// (BlueprintCallable, BlueprintEvent)

void UQuest_5310_C::OnFinished_B39281EA4D0C9AAFAC85BCA921AF94FD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5310_C", "OnFinished_B39281EA4D0C9AAFAC85BCA921AF94FD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5310.Quest_5310_C.OnStop_B39281EA4D0C9AAFAC85BCA921AF94FD
// (BlueprintCallable, BlueprintEvent)

void UQuest_5310_C::OnStop_B39281EA4D0C9AAFAC85BCA921AF94FD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5310_C", "OnStop_B39281EA4D0C9AAFAC85BCA921AF94FD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5310.Quest_5310_C.OnDlgClosed_23ECEC5C48C9945170EE5D8C498397B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5310_C::OnDlgClosed_23ECEC5C48C9945170EE5D8C498397B6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5310_C", "OnDlgClosed_23ECEC5C48C9945170EE5D8C498397B6");

	Params::Quest_5310_C_OnDlgClosed_23ECEC5C48C9945170EE5D8C498397B6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5310.Quest_5310_C.OnDlgSelectedOption_23ECEC5C48C9945170EE5D8C498397B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5310_C::OnDlgSelectedOption_23ECEC5C48C9945170EE5D8C498397B6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5310_C", "OnDlgSelectedOption_23ECEC5C48C9945170EE5D8C498397B6");

	Params::Quest_5310_C_OnDlgSelectedOption_23ECEC5C48C9945170EE5D8C498397B6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
