#pragma once



// Package: Quest_5410

#include "Basic.hpp"

#include "Quest_5410_classes.hpp"
#include "Quest_5410_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5410.Quest_5410_C.ExecuteUbergraph_Quest_5410
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5410_C::ExecuteUbergraph_Quest_5410(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5410_C", "ExecuteUbergraph_Quest_5410");

	Params::Quest_5410_C_ExecuteUbergraph_Quest_5410 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5410.Quest_5410_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5410_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5410_C", "HandleFinishing");

	Params::Quest_5410_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5410.Quest_5410_C.OnSuccess_447AD5B54B1F209B33CEA29E878B5BCD
// (BlueprintCallable, BlueprintEvent)

void UQuest_5410_C::OnSuccess_447AD5B54B1F209B33CEA29E878B5BCD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5410_C", "OnSuccess_447AD5B54B1F209B33CEA29E878B5BCD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5410.Quest_5410_C.OnFinished_0445E7C74DB2C9361DAC53915F7B88E0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5410_C::OnFinished_0445E7C74DB2C9361DAC53915F7B88E0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5410_C", "OnFinished_0445E7C74DB2C9361DAC53915F7B88E0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5410.Quest_5410_C.OnStop_0445E7C74DB2C9361DAC53915F7B88E0
// (BlueprintCallable, BlueprintEvent)

void UQuest_5410_C::OnStop_0445E7C74DB2C9361DAC53915F7B88E0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5410_C", "OnStop_0445E7C74DB2C9361DAC53915F7B88E0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5410.Quest_5410_C.OnDlgClosed_304631B744556CE913C0D291DE35C027
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5410_C::OnDlgClosed_304631B744556CE913C0D291DE35C027(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5410_C", "OnDlgClosed_304631B744556CE913C0D291DE35C027");

	Params::Quest_5410_C_OnDlgClosed_304631B744556CE913C0D291DE35C027 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5410.Quest_5410_C.OnDlgSelectedOption_304631B744556CE913C0D291DE35C027
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5410_C::OnDlgSelectedOption_304631B744556CE913C0D291DE35C027(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5410_C", "OnDlgSelectedOption_304631B744556CE913C0D291DE35C027");

	Params::Quest_5410_C_OnDlgSelectedOption_304631B744556CE913C0D291DE35C027 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
