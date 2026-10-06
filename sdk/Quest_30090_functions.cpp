#pragma once



// Package: Quest_30090

#include "Basic.hpp"

#include "Quest_30090_classes.hpp"
#include "Quest_30090_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30090.Quest_30090_C.ExecuteUbergraph_Quest_30090
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30090_C::ExecuteUbergraph_Quest_30090(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30090_C", "ExecuteUbergraph_Quest_30090");

	Params::Quest_30090_C_ExecuteUbergraph_Quest_30090 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30090.Quest_30090_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30090_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30090_C", "HandleFinishing");

	Params::Quest_30090_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30090.Quest_30090_C.OnSuccess_C187F4104BC41EE480487587FE0F6348
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_30090_C::OnSuccess_C187F4104BC41EE480487587FE0F6348(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30090_C", "OnSuccess_C187F4104BC41EE480487587FE0F6348");

	Params::Quest_30090_C_OnSuccess_C187F4104BC41EE480487587FE0F6348 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30090.Quest_30090_C.OnFinished_ED84D10142E751D209895C9DC7E798B8
// (BlueprintCallable, BlueprintEvent)

void UQuest_30090_C::OnFinished_ED84D10142E751D209895C9DC7E798B8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30090_C", "OnFinished_ED84D10142E751D209895C9DC7E798B8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30090.Quest_30090_C.OnStop_ED84D10142E751D209895C9DC7E798B8
// (BlueprintCallable, BlueprintEvent)

void UQuest_30090_C::OnStop_ED84D10142E751D209895C9DC7E798B8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30090_C", "OnStop_ED84D10142E751D209895C9DC7E798B8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30090.Quest_30090_C.OnDlgClosed_723544B04BA67EA829782CB1CE36C5CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30090_C::OnDlgClosed_723544B04BA67EA829782CB1CE36C5CA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30090_C", "OnDlgClosed_723544B04BA67EA829782CB1CE36C5CA");

	Params::Quest_30090_C_OnDlgClosed_723544B04BA67EA829782CB1CE36C5CA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30090.Quest_30090_C.OnDlgSelectedOption_723544B04BA67EA829782CB1CE36C5CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30090_C::OnDlgSelectedOption_723544B04BA67EA829782CB1CE36C5CA(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30090_C", "OnDlgSelectedOption_723544B04BA67EA829782CB1CE36C5CA");

	Params::Quest_30090_C_OnDlgSelectedOption_723544B04BA67EA829782CB1CE36C5CA Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
