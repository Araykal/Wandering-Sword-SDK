#pragma once



// Package: Quest_29506

#include "Basic.hpp"

#include "Quest_29506_classes.hpp"
#include "Quest_29506_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29506.Quest_29506_C.ExecuteUbergraph_Quest_29506
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29506_C::ExecuteUbergraph_Quest_29506(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29506_C", "ExecuteUbergraph_Quest_29506");

	Params::Quest_29506_C_ExecuteUbergraph_Quest_29506 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29506.Quest_29506_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29506_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29506_C", "HandleFinishing");

	Params::Quest_29506_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29506.Quest_29506_C.OnFinished_182E89844C53B323DD1017AA2DCDC0CC
// (BlueprintCallable, BlueprintEvent)

void UQuest_29506_C::OnFinished_182E89844C53B323DD1017AA2DCDC0CC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29506_C", "OnFinished_182E89844C53B323DD1017AA2DCDC0CC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29506.Quest_29506_C.OnStop_182E89844C53B323DD1017AA2DCDC0CC
// (BlueprintCallable, BlueprintEvent)

void UQuest_29506_C::OnStop_182E89844C53B323DD1017AA2DCDC0CC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29506_C", "OnStop_182E89844C53B323DD1017AA2DCDC0CC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29506.Quest_29506_C.OnDlgClosed_A54CB8724D1F7FE0DDAFAB9DB24A5263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29506_C::OnDlgClosed_A54CB8724D1F7FE0DDAFAB9DB24A5263(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29506_C", "OnDlgClosed_A54CB8724D1F7FE0DDAFAB9DB24A5263");

	Params::Quest_29506_C_OnDlgClosed_A54CB8724D1F7FE0DDAFAB9DB24A5263 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29506.Quest_29506_C.OnDlgSelectedOption_A54CB8724D1F7FE0DDAFAB9DB24A5263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29506_C::OnDlgSelectedOption_A54CB8724D1F7FE0DDAFAB9DB24A5263(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29506_C", "OnDlgSelectedOption_A54CB8724D1F7FE0DDAFAB9DB24A5263");

	Params::Quest_29506_C_OnDlgSelectedOption_A54CB8724D1F7FE0DDAFAB9DB24A5263 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
