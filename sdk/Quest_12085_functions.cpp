#pragma once



// Package: Quest_12085

#include "Basic.hpp"

#include "Quest_12085_classes.hpp"
#include "Quest_12085_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12085.Quest_12085_C.ExecuteUbergraph_Quest_12085
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12085_C::ExecuteUbergraph_Quest_12085(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12085_C", "ExecuteUbergraph_Quest_12085");

	Params::Quest_12085_C_ExecuteUbergraph_Quest_12085 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12085.Quest_12085_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12085_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12085_C", "HandleFinishing");

	Params::Quest_12085_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12085.Quest_12085_C.OnFinished_4A3E47234535DDB111CE118EC767415E
// (BlueprintCallable, BlueprintEvent)

void UQuest_12085_C::OnFinished_4A3E47234535DDB111CE118EC767415E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12085_C", "OnFinished_4A3E47234535DDB111CE118EC767415E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12085.Quest_12085_C.OnStop_4A3E47234535DDB111CE118EC767415E
// (BlueprintCallable, BlueprintEvent)

void UQuest_12085_C::OnStop_4A3E47234535DDB111CE118EC767415E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12085_C", "OnStop_4A3E47234535DDB111CE118EC767415E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12085.Quest_12085_C.OnDlgClosed_E34014E241D5A035A4C3689A14E92A54
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12085_C::OnDlgClosed_E34014E241D5A035A4C3689A14E92A54(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12085_C", "OnDlgClosed_E34014E241D5A035A4C3689A14E92A54");

	Params::Quest_12085_C_OnDlgClosed_E34014E241D5A035A4C3689A14E92A54 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12085.Quest_12085_C.OnDlgSelectedOption_E34014E241D5A035A4C3689A14E92A54
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12085_C::OnDlgSelectedOption_E34014E241D5A035A4C3689A14E92A54(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12085_C", "OnDlgSelectedOption_E34014E241D5A035A4C3689A14E92A54");

	Params::Quest_12085_C_OnDlgSelectedOption_E34014E241D5A035A4C3689A14E92A54 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
