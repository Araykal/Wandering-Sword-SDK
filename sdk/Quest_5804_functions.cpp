#pragma once



// Package: Quest_5804

#include "Basic.hpp"

#include "Quest_5804_classes.hpp"
#include "Quest_5804_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5804.Quest_5804_C.ExecuteUbergraph_Quest_5804
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5804_C::ExecuteUbergraph_Quest_5804(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5804_C", "ExecuteUbergraph_Quest_5804");

	Params::Quest_5804_C_ExecuteUbergraph_Quest_5804 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5804.Quest_5804_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5804_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5804_C", "HandleFinishing");

	Params::Quest_5804_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5804.Quest_5804_C.OnSuccess_CF48352242D706E8B52DFDA9AC6E9BFE
// (BlueprintCallable, BlueprintEvent)

void UQuest_5804_C::OnSuccess_CF48352242D706E8B52DFDA9AC6E9BFE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5804_C", "OnSuccess_CF48352242D706E8B52DFDA9AC6E9BFE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5804.Quest_5804_C.OnFinished_3D83B0FF462F3C1AC181FC80E66754F9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5804_C::OnFinished_3D83B0FF462F3C1AC181FC80E66754F9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5804_C", "OnFinished_3D83B0FF462F3C1AC181FC80E66754F9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5804.Quest_5804_C.OnStop_3D83B0FF462F3C1AC181FC80E66754F9
// (BlueprintCallable, BlueprintEvent)

void UQuest_5804_C::OnStop_3D83B0FF462F3C1AC181FC80E66754F9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5804_C", "OnStop_3D83B0FF462F3C1AC181FC80E66754F9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5804.Quest_5804_C.OnDlgClosed_94B2DDD742551D4E256554925D86B00C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5804_C::OnDlgClosed_94B2DDD742551D4E256554925D86B00C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5804_C", "OnDlgClosed_94B2DDD742551D4E256554925D86B00C");

	Params::Quest_5804_C_OnDlgClosed_94B2DDD742551D4E256554925D86B00C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5804.Quest_5804_C.OnDlgSelectedOption_94B2DDD742551D4E256554925D86B00C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5804_C::OnDlgSelectedOption_94B2DDD742551D4E256554925D86B00C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5804_C", "OnDlgSelectedOption_94B2DDD742551D4E256554925D86B00C");

	Params::Quest_5804_C_OnDlgSelectedOption_94B2DDD742551D4E256554925D86B00C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
