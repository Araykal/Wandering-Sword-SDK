#pragma once



// Package: Quest_5809

#include "Basic.hpp"

#include "Quest_5809_classes.hpp"
#include "Quest_5809_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5809.Quest_5809_C.ExecuteUbergraph_Quest_5809
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5809_C::ExecuteUbergraph_Quest_5809(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5809_C", "ExecuteUbergraph_Quest_5809");

	Params::Quest_5809_C_ExecuteUbergraph_Quest_5809 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5809.Quest_5809_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5809_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5809_C", "HandleFinishing");

	Params::Quest_5809_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5809.Quest_5809_C.OnSuccess_D7D8DBB046D71BC0718D0D9FDBF17497
// (BlueprintCallable, BlueprintEvent)

void UQuest_5809_C::OnSuccess_D7D8DBB046D71BC0718D0D9FDBF17497()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5809_C", "OnSuccess_D7D8DBB046D71BC0718D0D9FDBF17497");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5809.Quest_5809_C.OnFinished_8155E4DA45A6A770A3E29F98BF6F7A72
// (BlueprintCallable, BlueprintEvent)

void UQuest_5809_C::OnFinished_8155E4DA45A6A770A3E29F98BF6F7A72()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5809_C", "OnFinished_8155E4DA45A6A770A3E29F98BF6F7A72");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5809.Quest_5809_C.OnStop_8155E4DA45A6A770A3E29F98BF6F7A72
// (BlueprintCallable, BlueprintEvent)

void UQuest_5809_C::OnStop_8155E4DA45A6A770A3E29F98BF6F7A72()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5809_C", "OnStop_8155E4DA45A6A770A3E29F98BF6F7A72");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5809.Quest_5809_C.OnDlgClosed_D6972C334EF6B5E5A018ADBCAECB9355
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5809_C::OnDlgClosed_D6972C334EF6B5E5A018ADBCAECB9355(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5809_C", "OnDlgClosed_D6972C334EF6B5E5A018ADBCAECB9355");

	Params::Quest_5809_C_OnDlgClosed_D6972C334EF6B5E5A018ADBCAECB9355 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5809.Quest_5809_C.OnDlgSelectedOption_D6972C334EF6B5E5A018ADBCAECB9355
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5809_C::OnDlgSelectedOption_D6972C334EF6B5E5A018ADBCAECB9355(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5809_C", "OnDlgSelectedOption_D6972C334EF6B5E5A018ADBCAECB9355");

	Params::Quest_5809_C_OnDlgSelectedOption_D6972C334EF6B5E5A018ADBCAECB9355 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
