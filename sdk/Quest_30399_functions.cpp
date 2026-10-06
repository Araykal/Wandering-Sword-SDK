#pragma once



// Package: Quest_30399

#include "Basic.hpp"

#include "Quest_30399_classes.hpp"
#include "Quest_30399_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30399.Quest_30399_C.ExecuteUbergraph_Quest_30399
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30399_C::ExecuteUbergraph_Quest_30399(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30399_C", "ExecuteUbergraph_Quest_30399");

	Params::Quest_30399_C_ExecuteUbergraph_Quest_30399 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30399.Quest_30399_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30399_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30399_C", "HandleFinishing");

	Params::Quest_30399_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30399.Quest_30399_C.OnSuccess_827B97D0474239196187AD8C055D47AB
// (BlueprintCallable, BlueprintEvent)

void UQuest_30399_C::OnSuccess_827B97D0474239196187AD8C055D47AB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30399_C", "OnSuccess_827B97D0474239196187AD8C055D47AB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30399.Quest_30399_C.OnFinished_1982E2764EE70D0E6232F3BB23D5590B
// (BlueprintCallable, BlueprintEvent)

void UQuest_30399_C::OnFinished_1982E2764EE70D0E6232F3BB23D5590B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30399_C", "OnFinished_1982E2764EE70D0E6232F3BB23D5590B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30399.Quest_30399_C.OnStop_1982E2764EE70D0E6232F3BB23D5590B
// (BlueprintCallable, BlueprintEvent)

void UQuest_30399_C::OnStop_1982E2764EE70D0E6232F3BB23D5590B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30399_C", "OnStop_1982E2764EE70D0E6232F3BB23D5590B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30399.Quest_30399_C.OnDlgClosed_F4DA752744030A5509133C8EEBF94DCC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30399_C::OnDlgClosed_F4DA752744030A5509133C8EEBF94DCC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30399_C", "OnDlgClosed_F4DA752744030A5509133C8EEBF94DCC");

	Params::Quest_30399_C_OnDlgClosed_F4DA752744030A5509133C8EEBF94DCC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30399.Quest_30399_C.OnDlgSelectedOption_F4DA752744030A5509133C8EEBF94DCC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30399_C::OnDlgSelectedOption_F4DA752744030A5509133C8EEBF94DCC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30399_C", "OnDlgSelectedOption_F4DA752744030A5509133C8EEBF94DCC");

	Params::Quest_30399_C_OnDlgSelectedOption_F4DA752744030A5509133C8EEBF94DCC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
