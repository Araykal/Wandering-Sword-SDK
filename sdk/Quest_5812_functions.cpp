#pragma once



// Package: Quest_5812

#include "Basic.hpp"

#include "Quest_5812_classes.hpp"
#include "Quest_5812_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5812.Quest_5812_C.ExecuteUbergraph_Quest_5812
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5812_C::ExecuteUbergraph_Quest_5812(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5812_C", "ExecuteUbergraph_Quest_5812");

	Params::Quest_5812_C_ExecuteUbergraph_Quest_5812 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5812.Quest_5812_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5812_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5812_C", "HandleFinishing");

	Params::Quest_5812_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5812.Quest_5812_C.OnSuccess_27FA001C437C7C836757AE9205FA857A
// (BlueprintCallable, BlueprintEvent)

void UQuest_5812_C::OnSuccess_27FA001C437C7C836757AE9205FA857A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5812_C", "OnSuccess_27FA001C437C7C836757AE9205FA857A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5812.Quest_5812_C.OnFinished_8C7B9CBE43059685B2D02E892CB7A519
// (BlueprintCallable, BlueprintEvent)

void UQuest_5812_C::OnFinished_8C7B9CBE43059685B2D02E892CB7A519()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5812_C", "OnFinished_8C7B9CBE43059685B2D02E892CB7A519");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5812.Quest_5812_C.OnStop_8C7B9CBE43059685B2D02E892CB7A519
// (BlueprintCallable, BlueprintEvent)

void UQuest_5812_C::OnStop_8C7B9CBE43059685B2D02E892CB7A519()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5812_C", "OnStop_8C7B9CBE43059685B2D02E892CB7A519");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5812.Quest_5812_C.OnDlgClosed_284B0364407673FC9ABF00AC95DC4041
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5812_C::OnDlgClosed_284B0364407673FC9ABF00AC95DC4041(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5812_C", "OnDlgClosed_284B0364407673FC9ABF00AC95DC4041");

	Params::Quest_5812_C_OnDlgClosed_284B0364407673FC9ABF00AC95DC4041 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5812.Quest_5812_C.OnDlgSelectedOption_284B0364407673FC9ABF00AC95DC4041
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5812_C::OnDlgSelectedOption_284B0364407673FC9ABF00AC95DC4041(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5812_C", "OnDlgSelectedOption_284B0364407673FC9ABF00AC95DC4041");

	Params::Quest_5812_C_OnDlgSelectedOption_284B0364407673FC9ABF00AC95DC4041 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
