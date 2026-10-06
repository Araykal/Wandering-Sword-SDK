#pragma once



// Package: Quest_5345

#include "Basic.hpp"

#include "Quest_5345_classes.hpp"
#include "Quest_5345_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5345.Quest_5345_C.ExecuteUbergraph_Quest_5345
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5345_C::ExecuteUbergraph_Quest_5345(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5345_C", "ExecuteUbergraph_Quest_5345");

	Params::Quest_5345_C_ExecuteUbergraph_Quest_5345 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5345.Quest_5345_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5345_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5345_C", "HandleFinishing");

	Params::Quest_5345_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5345.Quest_5345_C.OnFinished_FEB97BF146DC7F76E8325181B1E11B87
// (BlueprintCallable, BlueprintEvent)

void UQuest_5345_C::OnFinished_FEB97BF146DC7F76E8325181B1E11B87()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5345_C", "OnFinished_FEB97BF146DC7F76E8325181B1E11B87");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5345.Quest_5345_C.OnStop_FEB97BF146DC7F76E8325181B1E11B87
// (BlueprintCallable, BlueprintEvent)

void UQuest_5345_C::OnStop_FEB97BF146DC7F76E8325181B1E11B87()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5345_C", "OnStop_FEB97BF146DC7F76E8325181B1E11B87");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5345.Quest_5345_C.OnDlgClosed_EE58188E40458B36F24AFABAD15D685F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5345_C::OnDlgClosed_EE58188E40458B36F24AFABAD15D685F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5345_C", "OnDlgClosed_EE58188E40458B36F24AFABAD15D685F");

	Params::Quest_5345_C_OnDlgClosed_EE58188E40458B36F24AFABAD15D685F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5345.Quest_5345_C.OnDlgSelectedOption_EE58188E40458B36F24AFABAD15D685F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5345_C::OnDlgSelectedOption_EE58188E40458B36F24AFABAD15D685F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5345_C", "OnDlgSelectedOption_EE58188E40458B36F24AFABAD15D685F");

	Params::Quest_5345_C_OnDlgSelectedOption_EE58188E40458B36F24AFABAD15D685F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
