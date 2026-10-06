#pragma once



// Package: Quest_30720

#include "Basic.hpp"

#include "Quest_30720_classes.hpp"
#include "Quest_30720_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30720.Quest_30720_C.ExecuteUbergraph_Quest_30720
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30720_C::ExecuteUbergraph_Quest_30720(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30720_C", "ExecuteUbergraph_Quest_30720");

	Params::Quest_30720_C_ExecuteUbergraph_Quest_30720 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30720.Quest_30720_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30720_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30720_C", "HandleFinishing");

	Params::Quest_30720_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30720.Quest_30720_C.OnSuccess_45E33EC040CECA350F6FCB95E575A566
// (BlueprintCallable, BlueprintEvent)

void UQuest_30720_C::OnSuccess_45E33EC040CECA350F6FCB95E575A566()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30720_C", "OnSuccess_45E33EC040CECA350F6FCB95E575A566");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30720.Quest_30720_C.OnFinished_B1E31C4C4C395EE56E0DB5A3BDF047BB
// (BlueprintCallable, BlueprintEvent)

void UQuest_30720_C::OnFinished_B1E31C4C4C395EE56E0DB5A3BDF047BB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30720_C", "OnFinished_B1E31C4C4C395EE56E0DB5A3BDF047BB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30720.Quest_30720_C.OnStop_B1E31C4C4C395EE56E0DB5A3BDF047BB
// (BlueprintCallable, BlueprintEvent)

void UQuest_30720_C::OnStop_B1E31C4C4C395EE56E0DB5A3BDF047BB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30720_C", "OnStop_B1E31C4C4C395EE56E0DB5A3BDF047BB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30720.Quest_30720_C.OnDlgClosed_FE79595F4BB3870471280F97E589B73D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30720_C::OnDlgClosed_FE79595F4BB3870471280F97E589B73D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30720_C", "OnDlgClosed_FE79595F4BB3870471280F97E589B73D");

	Params::Quest_30720_C_OnDlgClosed_FE79595F4BB3870471280F97E589B73D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30720.Quest_30720_C.OnDlgSelectedOption_FE79595F4BB3870471280F97E589B73D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30720_C::OnDlgSelectedOption_FE79595F4BB3870471280F97E589B73D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30720_C", "OnDlgSelectedOption_FE79595F4BB3870471280F97E589B73D");

	Params::Quest_30720_C_OnDlgSelectedOption_FE79595F4BB3870471280F97E589B73D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
