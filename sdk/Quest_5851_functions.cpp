#pragma once



// Package: Quest_5851

#include "Basic.hpp"

#include "Quest_5851_classes.hpp"
#include "Quest_5851_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5851.Quest_5851_C.ExecuteUbergraph_Quest_5851
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5851_C::ExecuteUbergraph_Quest_5851(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5851_C", "ExecuteUbergraph_Quest_5851");

	Params::Quest_5851_C_ExecuteUbergraph_Quest_5851 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5851.Quest_5851_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5851_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5851_C", "HandleFinishing");

	Params::Quest_5851_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5851.Quest_5851_C.OnFinished_4577D3FA4588A4D5D4058A9F064F62EF
// (BlueprintCallable, BlueprintEvent)

void UQuest_5851_C::OnFinished_4577D3FA4588A4D5D4058A9F064F62EF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5851_C", "OnFinished_4577D3FA4588A4D5D4058A9F064F62EF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5851.Quest_5851_C.OnStop_4577D3FA4588A4D5D4058A9F064F62EF
// (BlueprintCallable, BlueprintEvent)

void UQuest_5851_C::OnStop_4577D3FA4588A4D5D4058A9F064F62EF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5851_C", "OnStop_4577D3FA4588A4D5D4058A9F064F62EF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5851.Quest_5851_C.OnDlgClosed_9797AC784DC0273462CECD9D5DF70803
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5851_C::OnDlgClosed_9797AC784DC0273462CECD9D5DF70803(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5851_C", "OnDlgClosed_9797AC784DC0273462CECD9D5DF70803");

	Params::Quest_5851_C_OnDlgClosed_9797AC784DC0273462CECD9D5DF70803 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5851.Quest_5851_C.OnDlgSelectedOption_9797AC784DC0273462CECD9D5DF70803
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5851_C::OnDlgSelectedOption_9797AC784DC0273462CECD9D5DF70803(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5851_C", "OnDlgSelectedOption_9797AC784DC0273462CECD9D5DF70803");

	Params::Quest_5851_C_OnDlgSelectedOption_9797AC784DC0273462CECD9D5DF70803 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
