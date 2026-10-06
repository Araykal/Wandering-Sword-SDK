#pragma once



// Package: Quest_12665

#include "Basic.hpp"

#include "Quest_12665_classes.hpp"
#include "Quest_12665_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12665.Quest_12665_C.ExecuteUbergraph_Quest_12665
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12665_C::ExecuteUbergraph_Quest_12665(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12665_C", "ExecuteUbergraph_Quest_12665");

	Params::Quest_12665_C_ExecuteUbergraph_Quest_12665 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12665.Quest_12665_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12665_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12665_C", "HandleFinishing");

	Params::Quest_12665_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12665.Quest_12665_C.OnSuccess_42F699E14382348936472BA5008D34F0
// (BlueprintCallable, BlueprintEvent)

void UQuest_12665_C::OnSuccess_42F699E14382348936472BA5008D34F0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12665_C", "OnSuccess_42F699E14382348936472BA5008D34F0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12665.Quest_12665_C.OnFinished_4CA942C4440ABF143E9BFAB3506BA1F6
// (BlueprintCallable, BlueprintEvent)

void UQuest_12665_C::OnFinished_4CA942C4440ABF143E9BFAB3506BA1F6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12665_C", "OnFinished_4CA942C4440ABF143E9BFAB3506BA1F6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12665.Quest_12665_C.OnStop_4CA942C4440ABF143E9BFAB3506BA1F6
// (BlueprintCallable, BlueprintEvent)

void UQuest_12665_C::OnStop_4CA942C4440ABF143E9BFAB3506BA1F6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12665_C", "OnStop_4CA942C4440ABF143E9BFAB3506BA1F6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12665.Quest_12665_C.OnDlgClosed_387185AB4FD0F98B20869C9AF12D18A6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12665_C::OnDlgClosed_387185AB4FD0F98B20869C9AF12D18A6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12665_C", "OnDlgClosed_387185AB4FD0F98B20869C9AF12D18A6");

	Params::Quest_12665_C_OnDlgClosed_387185AB4FD0F98B20869C9AF12D18A6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12665.Quest_12665_C.OnDlgSelectedOption_387185AB4FD0F98B20869C9AF12D18A6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12665_C::OnDlgSelectedOption_387185AB4FD0F98B20869C9AF12D18A6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12665_C", "OnDlgSelectedOption_387185AB4FD0F98B20869C9AF12D18A6");

	Params::Quest_12665_C_OnDlgSelectedOption_387185AB4FD0F98B20869C9AF12D18A6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
