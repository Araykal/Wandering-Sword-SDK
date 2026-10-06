#pragma once



// Package: Quest_28937

#include "Basic.hpp"

#include "Quest_28937_classes.hpp"
#include "Quest_28937_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28937.Quest_28937_C.ExecuteUbergraph_Quest_28937
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28937_C::ExecuteUbergraph_Quest_28937(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28937_C", "ExecuteUbergraph_Quest_28937");

	Params::Quest_28937_C_ExecuteUbergraph_Quest_28937 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28937.Quest_28937_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28937_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28937_C", "HandleFinishing");

	Params::Quest_28937_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28937.Quest_28937_C.OnSuccess_73770FFD404143D384EC9687210D0289
// (BlueprintCallable, BlueprintEvent)

void UQuest_28937_C::OnSuccess_73770FFD404143D384EC9687210D0289()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28937_C", "OnSuccess_73770FFD404143D384EC9687210D0289");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28937.Quest_28937_C.OnFinished_939CD23D4348C100BC8498BAD230C42A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28937_C::OnFinished_939CD23D4348C100BC8498BAD230C42A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28937_C", "OnFinished_939CD23D4348C100BC8498BAD230C42A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28937.Quest_28937_C.OnStop_939CD23D4348C100BC8498BAD230C42A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28937_C::OnStop_939CD23D4348C100BC8498BAD230C42A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28937_C", "OnStop_939CD23D4348C100BC8498BAD230C42A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28937.Quest_28937_C.OnDlgClosed_167FEF1147067753FFFA309F35488ECF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28937_C::OnDlgClosed_167FEF1147067753FFFA309F35488ECF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28937_C", "OnDlgClosed_167FEF1147067753FFFA309F35488ECF");

	Params::Quest_28937_C_OnDlgClosed_167FEF1147067753FFFA309F35488ECF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28937.Quest_28937_C.OnDlgSelectedOption_167FEF1147067753FFFA309F35488ECF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28937_C::OnDlgSelectedOption_167FEF1147067753FFFA309F35488ECF(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28937_C", "OnDlgSelectedOption_167FEF1147067753FFFA309F35488ECF");

	Params::Quest_28937_C_OnDlgSelectedOption_167FEF1147067753FFFA309F35488ECF Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
