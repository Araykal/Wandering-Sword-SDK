#pragma once



// Package: Quest_11829

#include "Basic.hpp"

#include "Quest_11829_classes.hpp"
#include "Quest_11829_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_11829.Quest_11829_C.ExecuteUbergraph_Quest_11829
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11829_C::ExecuteUbergraph_Quest_11829(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11829_C", "ExecuteUbergraph_Quest_11829");

	Params::Quest_11829_C_ExecuteUbergraph_Quest_11829 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11829.Quest_11829_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11829_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11829_C", "HandleFinishing");

	Params::Quest_11829_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11829.Quest_11829_C.OnSuccess_C84E6F6A46A7FB1DD36F21AC99C94F52
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11829_C::OnSuccess_C84E6F6A46A7FB1DD36F21AC99C94F52(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11829_C", "OnSuccess_C84E6F6A46A7FB1DD36F21AC99C94F52");

	Params::Quest_11829_C_OnSuccess_C84E6F6A46A7FB1DD36F21AC99C94F52 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11829.Quest_11829_C.OnSuccess_1506BE1E4B25D94273864CAF25E56728
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11829_C::OnSuccess_1506BE1E4B25D94273864CAF25E56728(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11829_C", "OnSuccess_1506BE1E4B25D94273864CAF25E56728");

	Params::Quest_11829_C_OnSuccess_1506BE1E4B25D94273864CAF25E56728 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11829.Quest_11829_C.OnSuccess_2D391CDF4A5397B19F9CD4ADAD3B6CAC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11829_C::OnSuccess_2D391CDF4A5397B19F9CD4ADAD3B6CAC(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11829_C", "OnSuccess_2D391CDF4A5397B19F9CD4ADAD3B6CAC");

	Params::Quest_11829_C_OnSuccess_2D391CDF4A5397B19F9CD4ADAD3B6CAC Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11829.Quest_11829_C.OnFinished_C7D5A5564D06935C4C61C88D77578914
// (BlueprintCallable, BlueprintEvent)

void UQuest_11829_C::OnFinished_C7D5A5564D06935C4C61C88D77578914()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11829_C", "OnFinished_C7D5A5564D06935C4C61C88D77578914");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11829.Quest_11829_C.OnStop_C7D5A5564D06935C4C61C88D77578914
// (BlueprintCallable, BlueprintEvent)

void UQuest_11829_C::OnStop_C7D5A5564D06935C4C61C88D77578914()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11829_C", "OnStop_C7D5A5564D06935C4C61C88D77578914");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_11829.Quest_11829_C.OnDlgClosed_C1317DED4FEF7207CB92FEA82FFC86C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11829_C::OnDlgClosed_C1317DED4FEF7207CB92FEA82FFC86C6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11829_C", "OnDlgClosed_C1317DED4FEF7207CB92FEA82FFC86C6");

	Params::Quest_11829_C_OnDlgClosed_C1317DED4FEF7207CB92FEA82FFC86C6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11829.Quest_11829_C.OnDlgSelectedOption_C1317DED4FEF7207CB92FEA82FFC86C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_11829_C::OnDlgSelectedOption_C1317DED4FEF7207CB92FEA82FFC86C6(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11829_C", "OnDlgSelectedOption_C1317DED4FEF7207CB92FEA82FFC86C6");

	Params::Quest_11829_C_OnDlgSelectedOption_C1317DED4FEF7207CB92FEA82FFC86C6 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_11829.Quest_11829_C.OnSuccess_4FE7980F4086C98A3CBFF1AECED312E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_11829_C::OnSuccess_4FE7980F4086C98A3CBFF1AECED312E5(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_11829_C", "OnSuccess_4FE7980F4086C98A3CBFF1AECED312E5");

	Params::Quest_11829_C_OnSuccess_4FE7980F4086C98A3CBFF1AECED312E5 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
