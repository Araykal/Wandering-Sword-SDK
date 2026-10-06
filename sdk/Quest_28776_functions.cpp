#pragma once



// Package: Quest_28776

#include "Basic.hpp"

#include "Quest_28776_classes.hpp"
#include "Quest_28776_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28776.Quest_28776_C.ExecuteUbergraph_Quest_28776
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28776_C::ExecuteUbergraph_Quest_28776(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28776_C", "ExecuteUbergraph_Quest_28776");

	Params::Quest_28776_C_ExecuteUbergraph_Quest_28776 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28776.Quest_28776_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28776_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28776_C", "HandleFinishing");

	Params::Quest_28776_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28776.Quest_28776_C.OnSuccess_A7E198E1435541CDB2DB01AB0F72FA6C
// (BlueprintCallable, BlueprintEvent)

void UQuest_28776_C::OnSuccess_A7E198E1435541CDB2DB01AB0F72FA6C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28776_C", "OnSuccess_A7E198E1435541CDB2DB01AB0F72FA6C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28776.Quest_28776_C.OnFinished_F3E20FC348C5619B5961D99A263DA5CA
// (BlueprintCallable, BlueprintEvent)

void UQuest_28776_C::OnFinished_F3E20FC348C5619B5961D99A263DA5CA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28776_C", "OnFinished_F3E20FC348C5619B5961D99A263DA5CA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28776.Quest_28776_C.OnStop_F3E20FC348C5619B5961D99A263DA5CA
// (BlueprintCallable, BlueprintEvent)

void UQuest_28776_C::OnStop_F3E20FC348C5619B5961D99A263DA5CA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28776_C", "OnStop_F3E20FC348C5619B5961D99A263DA5CA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28776.Quest_28776_C.OnDlgClosed_8DF8B00D4E2E196063354287C6C284F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28776_C::OnDlgClosed_8DF8B00D4E2E196063354287C6C284F2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28776_C", "OnDlgClosed_8DF8B00D4E2E196063354287C6C284F2");

	Params::Quest_28776_C_OnDlgClosed_8DF8B00D4E2E196063354287C6C284F2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28776.Quest_28776_C.OnDlgSelectedOption_8DF8B00D4E2E196063354287C6C284F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28776_C::OnDlgSelectedOption_8DF8B00D4E2E196063354287C6C284F2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28776_C", "OnDlgSelectedOption_8DF8B00D4E2E196063354287C6C284F2");

	Params::Quest_28776_C_OnDlgSelectedOption_8DF8B00D4E2E196063354287C6C284F2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
