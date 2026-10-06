#pragma once



// Package: Quest_28964

#include "Basic.hpp"

#include "Quest_28964_classes.hpp"
#include "Quest_28964_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28964.Quest_28964_C.ExecuteUbergraph_Quest_28964
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28964_C::ExecuteUbergraph_Quest_28964(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28964_C", "ExecuteUbergraph_Quest_28964");

	Params::Quest_28964_C_ExecuteUbergraph_Quest_28964 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28964.Quest_28964_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_28964_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28964_C", "End");

	Params::Quest_28964_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28964.Quest_28964_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28964_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28964_C", "HandleFinishing");

	Params::Quest_28964_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28964.Quest_28964_C.OnFinished_8EFF481743413930463B6C9D9E32DDAA
// (BlueprintCallable, BlueprintEvent)

void UQuest_28964_C::OnFinished_8EFF481743413930463B6C9D9E32DDAA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28964_C", "OnFinished_8EFF481743413930463B6C9D9E32DDAA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28964.Quest_28964_C.OnStop_8EFF481743413930463B6C9D9E32DDAA
// (BlueprintCallable, BlueprintEvent)

void UQuest_28964_C::OnStop_8EFF481743413930463B6C9D9E32DDAA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28964_C", "OnStop_8EFF481743413930463B6C9D9E32DDAA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28964.Quest_28964_C.OnDlgClosed_CB7F083144BFBCD629201F8C36B86EF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28964_C::OnDlgClosed_CB7F083144BFBCD629201F8C36B86EF2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28964_C", "OnDlgClosed_CB7F083144BFBCD629201F8C36B86EF2");

	Params::Quest_28964_C_OnDlgClosed_CB7F083144BFBCD629201F8C36B86EF2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28964.Quest_28964_C.OnDlgSelectedOption_CB7F083144BFBCD629201F8C36B86EF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28964_C::OnDlgSelectedOption_CB7F083144BFBCD629201F8C36B86EF2(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28964_C", "OnDlgSelectedOption_CB7F083144BFBCD629201F8C36B86EF2");

	Params::Quest_28964_C_OnDlgSelectedOption_CB7F083144BFBCD629201F8C36B86EF2 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
