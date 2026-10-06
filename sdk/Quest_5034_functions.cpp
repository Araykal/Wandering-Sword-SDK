#pragma once



// Package: Quest_5034

#include "Basic.hpp"

#include "Quest_5034_classes.hpp"
#include "Quest_5034_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5034.Quest_5034_C.ExecuteUbergraph_Quest_5034
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5034_C::ExecuteUbergraph_Quest_5034(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5034_C", "ExecuteUbergraph_Quest_5034");

	Params::Quest_5034_C_ExecuteUbergraph_Quest_5034 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5034.Quest_5034_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_5034_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5034_C", "End");

	Params::Quest_5034_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5034.Quest_5034_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5034_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5034_C", "HandleFinishing");

	Params::Quest_5034_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5034.Quest_5034_C.OnFinished_E3FECFA8480655D41347FE90B30DD197
// (BlueprintCallable, BlueprintEvent)

void UQuest_5034_C::OnFinished_E3FECFA8480655D41347FE90B30DD197()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5034_C", "OnFinished_E3FECFA8480655D41347FE90B30DD197");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5034.Quest_5034_C.OnStop_E3FECFA8480655D41347FE90B30DD197
// (BlueprintCallable, BlueprintEvent)

void UQuest_5034_C::OnStop_E3FECFA8480655D41347FE90B30DD197()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5034_C", "OnStop_E3FECFA8480655D41347FE90B30DD197");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5034.Quest_5034_C.OnDlgClosed_3593A4C24F84EC0BAEE5B595143ED76D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5034_C::OnDlgClosed_3593A4C24F84EC0BAEE5B595143ED76D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5034_C", "OnDlgClosed_3593A4C24F84EC0BAEE5B595143ED76D");

	Params::Quest_5034_C_OnDlgClosed_3593A4C24F84EC0BAEE5B595143ED76D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5034.Quest_5034_C.OnDlgSelectedOption_3593A4C24F84EC0BAEE5B595143ED76D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5034_C::OnDlgSelectedOption_3593A4C24F84EC0BAEE5B595143ED76D(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5034_C", "OnDlgSelectedOption_3593A4C24F84EC0BAEE5B595143ED76D");

	Params::Quest_5034_C_OnDlgSelectedOption_3593A4C24F84EC0BAEE5B595143ED76D Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
