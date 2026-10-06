#pragma once



// Package: Quest_30317

#include "Basic.hpp"

#include "Quest_30317_classes.hpp"
#include "Quest_30317_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30317.Quest_30317_C.ExecuteUbergraph_Quest_30317
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30317_C::ExecuteUbergraph_Quest_30317(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30317_C", "ExecuteUbergraph_Quest_30317");

	Params::Quest_30317_C_ExecuteUbergraph_Quest_30317 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30317.Quest_30317_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30317_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30317_C", "HandleFinishing");

	Params::Quest_30317_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30317.Quest_30317_C.OnFinished_56B7D98F48B9652D431AB8AE95E63BC6
// (BlueprintCallable, BlueprintEvent)

void UQuest_30317_C::OnFinished_56B7D98F48B9652D431AB8AE95E63BC6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30317_C", "OnFinished_56B7D98F48B9652D431AB8AE95E63BC6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30317.Quest_30317_C.OnStop_56B7D98F48B9652D431AB8AE95E63BC6
// (BlueprintCallable, BlueprintEvent)

void UQuest_30317_C::OnStop_56B7D98F48B9652D431AB8AE95E63BC6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30317_C", "OnStop_56B7D98F48B9652D431AB8AE95E63BC6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30317.Quest_30317_C.OnDlgClosed_D1CF52854BBC0F76F78725AA1C9ECA82
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30317_C::OnDlgClosed_D1CF52854BBC0F76F78725AA1C9ECA82(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30317_C", "OnDlgClosed_D1CF52854BBC0F76F78725AA1C9ECA82");

	Params::Quest_30317_C_OnDlgClosed_D1CF52854BBC0F76F78725AA1C9ECA82 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30317.Quest_30317_C.OnDlgSelectedOption_D1CF52854BBC0F76F78725AA1C9ECA82
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30317_C::OnDlgSelectedOption_D1CF52854BBC0F76F78725AA1C9ECA82(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30317_C", "OnDlgSelectedOption_D1CF52854BBC0F76F78725AA1C9ECA82");

	Params::Quest_30317_C_OnDlgSelectedOption_D1CF52854BBC0F76F78725AA1C9ECA82 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30317.Quest_30317_C.OnSuccess_8AF984BD4CD5E66F5CC6E3A5B0040218
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30317_C::OnSuccess_8AF984BD4CD5E66F5CC6E3A5B0040218(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30317_C", "OnSuccess_8AF984BD4CD5E66F5CC6E3A5B0040218");

	Params::Quest_30317_C_OnSuccess_8AF984BD4CD5E66F5CC6E3A5B0040218 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
