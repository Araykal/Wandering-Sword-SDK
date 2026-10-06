#pragma once



// Package: Quest_28203

#include "Basic.hpp"

#include "Quest_28203_classes.hpp"
#include "Quest_28203_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28203.Quest_28203_C.ExecuteUbergraph_Quest_28203
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28203_C::ExecuteUbergraph_Quest_28203(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28203_C", "ExecuteUbergraph_Quest_28203");

	Params::Quest_28203_C_ExecuteUbergraph_Quest_28203 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28203.Quest_28203_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28203_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28203_C", "HandleFinishing");

	Params::Quest_28203_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28203.Quest_28203_C.OnSuccess_076A6D4E446E804C6CC76CB1B002C08A
// (BlueprintCallable, BlueprintEvent)

void UQuest_28203_C::OnSuccess_076A6D4E446E804C6CC76CB1B002C08A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28203_C", "OnSuccess_076A6D4E446E804C6CC76CB1B002C08A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28203.Quest_28203_C.OnFinished_3CA43AF24DB394C1B5B2C69DDBAAA234
// (BlueprintCallable, BlueprintEvent)

void UQuest_28203_C::OnFinished_3CA43AF24DB394C1B5B2C69DDBAAA234()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28203_C", "OnFinished_3CA43AF24DB394C1B5B2C69DDBAAA234");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28203.Quest_28203_C.OnStop_3CA43AF24DB394C1B5B2C69DDBAAA234
// (BlueprintCallable, BlueprintEvent)

void UQuest_28203_C::OnStop_3CA43AF24DB394C1B5B2C69DDBAAA234()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28203_C", "OnStop_3CA43AF24DB394C1B5B2C69DDBAAA234");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28203.Quest_28203_C.OnDlgClosed_26E78AF74DFC62F43AC9E89EF50856E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28203_C::OnDlgClosed_26E78AF74DFC62F43AC9E89EF50856E5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28203_C", "OnDlgClosed_26E78AF74DFC62F43AC9E89EF50856E5");

	Params::Quest_28203_C_OnDlgClosed_26E78AF74DFC62F43AC9E89EF50856E5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28203.Quest_28203_C.OnDlgSelectedOption_26E78AF74DFC62F43AC9E89EF50856E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28203_C::OnDlgSelectedOption_26E78AF74DFC62F43AC9E89EF50856E5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28203_C", "OnDlgSelectedOption_26E78AF74DFC62F43AC9E89EF50856E5");

	Params::Quest_28203_C_OnDlgSelectedOption_26E78AF74DFC62F43AC9E89EF50856E5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
