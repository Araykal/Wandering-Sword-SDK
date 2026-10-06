#pragma once



// Package: Quest_28041

#include "Basic.hpp"

#include "Quest_28041_classes.hpp"
#include "Quest_28041_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28041.Quest_28041_C.ExecuteUbergraph_Quest_28041
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28041_C::ExecuteUbergraph_Quest_28041(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28041_C", "ExecuteUbergraph_Quest_28041");

	Params::Quest_28041_C_ExecuteUbergraph_Quest_28041 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28041.Quest_28041_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28041_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28041_C", "HandleFinishing");

	Params::Quest_28041_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28041.Quest_28041_C.OnDlgClosed_8B0650D842C747EE978C6F96CC77CB74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28041_C::OnDlgClosed_8B0650D842C747EE978C6F96CC77CB74(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28041_C", "OnDlgClosed_8B0650D842C747EE978C6F96CC77CB74");

	Params::Quest_28041_C_OnDlgClosed_8B0650D842C747EE978C6F96CC77CB74 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28041.Quest_28041_C.OnDlgSelectedOption_8B0650D842C747EE978C6F96CC77CB74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28041_C::OnDlgSelectedOption_8B0650D842C747EE978C6F96CC77CB74(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28041_C", "OnDlgSelectedOption_8B0650D842C747EE978C6F96CC77CB74");

	Params::Quest_28041_C_OnDlgSelectedOption_8B0650D842C747EE978C6F96CC77CB74 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28041.Quest_28041_C.OnFinished_27543BA14483D629EC86D8A8AD63777A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28041_C::OnFinished_27543BA14483D629EC86D8A8AD63777A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28041_C", "OnFinished_27543BA14483D629EC86D8A8AD63777A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28041.Quest_28041_C.OnStop_27543BA14483D629EC86D8A8AD63777A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28041_C::OnStop_27543BA14483D629EC86D8A8AD63777A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28041_C", "OnStop_27543BA14483D629EC86D8A8AD63777A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28041.Quest_28041_C.OnSuccess_4FC58BD14A64C51722F048A437A00352
// (BlueprintCallable, BlueprintEvent)

void UQuest_28041_C::OnSuccess_4FC58BD14A64C51722F048A437A00352()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28041_C", "OnSuccess_4FC58BD14A64C51722F048A437A00352");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28041.Quest_28041_C.OnSuccess_428C00044CB40FC28F2BEA884220AA6C
// (BlueprintCallable, BlueprintEvent)

void UQuest_28041_C::OnSuccess_428C00044CB40FC28F2BEA884220AA6C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28041_C", "OnSuccess_428C00044CB40FC28F2BEA884220AA6C");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
