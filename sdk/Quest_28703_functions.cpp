#pragma once



// Package: Quest_28703

#include "Basic.hpp"

#include "Quest_28703_classes.hpp"
#include "Quest_28703_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28703.Quest_28703_C.ExecuteUbergraph_Quest_28703
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28703_C::ExecuteUbergraph_Quest_28703(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28703_C", "ExecuteUbergraph_Quest_28703");

	Params::Quest_28703_C_ExecuteUbergraph_Quest_28703 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28703.Quest_28703_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28703_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28703_C", "HandleFinishing");

	Params::Quest_28703_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28703.Quest_28703_C.OnSuccess_96B103064FFA44632C6AFEAF0C2FB271
// (BlueprintCallable, BlueprintEvent)

void UQuest_28703_C::OnSuccess_96B103064FFA44632C6AFEAF0C2FB271()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28703_C", "OnSuccess_96B103064FFA44632C6AFEAF0C2FB271");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28703.Quest_28703_C.OnFinished_8F736F2F4E66A74B56A1C993D8C877AC
// (BlueprintCallable, BlueprintEvent)

void UQuest_28703_C::OnFinished_8F736F2F4E66A74B56A1C993D8C877AC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28703_C", "OnFinished_8F736F2F4E66A74B56A1C993D8C877AC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28703.Quest_28703_C.OnStop_8F736F2F4E66A74B56A1C993D8C877AC
// (BlueprintCallable, BlueprintEvent)

void UQuest_28703_C::OnStop_8F736F2F4E66A74B56A1C993D8C877AC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28703_C", "OnStop_8F736F2F4E66A74B56A1C993D8C877AC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28703.Quest_28703_C.OnDlgClosed_B07D0BF5450A5CC2E33A4CB1E660A9F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28703_C::OnDlgClosed_B07D0BF5450A5CC2E33A4CB1E660A9F8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28703_C", "OnDlgClosed_B07D0BF5450A5CC2E33A4CB1E660A9F8");

	Params::Quest_28703_C_OnDlgClosed_B07D0BF5450A5CC2E33A4CB1E660A9F8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28703.Quest_28703_C.OnDlgSelectedOption_B07D0BF5450A5CC2E33A4CB1E660A9F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28703_C::OnDlgSelectedOption_B07D0BF5450A5CC2E33A4CB1E660A9F8(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28703_C", "OnDlgSelectedOption_B07D0BF5450A5CC2E33A4CB1E660A9F8");

	Params::Quest_28703_C_OnDlgSelectedOption_B07D0BF5450A5CC2E33A4CB1E660A9F8 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
