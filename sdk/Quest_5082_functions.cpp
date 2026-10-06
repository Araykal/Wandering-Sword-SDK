#pragma once



// Package: Quest_5082

#include "Basic.hpp"

#include "Quest_5082_classes.hpp"
#include "Quest_5082_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5082.Quest_5082_C.ExecuteUbergraph_Quest_5082
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5082_C::ExecuteUbergraph_Quest_5082(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5082_C", "ExecuteUbergraph_Quest_5082");

	Params::Quest_5082_C_ExecuteUbergraph_Quest_5082 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5082.Quest_5082_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_5082_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5082_C", "End");

	Params::Quest_5082_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5082.Quest_5082_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5082_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5082_C", "HandleFinishing");

	Params::Quest_5082_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5082.Quest_5082_C.OnFinished_F277715042F5ECE2554C589D560CF0FA
// (BlueprintCallable, BlueprintEvent)

void UQuest_5082_C::OnFinished_F277715042F5ECE2554C589D560CF0FA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5082_C", "OnFinished_F277715042F5ECE2554C589D560CF0FA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5082.Quest_5082_C.OnStop_F277715042F5ECE2554C589D560CF0FA
// (BlueprintCallable, BlueprintEvent)

void UQuest_5082_C::OnStop_F277715042F5ECE2554C589D560CF0FA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5082_C", "OnStop_F277715042F5ECE2554C589D560CF0FA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5082.Quest_5082_C.OnDlgClosed_3CAE414047C672E317A6C8BB085AE562
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5082_C::OnDlgClosed_3CAE414047C672E317A6C8BB085AE562(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5082_C", "OnDlgClosed_3CAE414047C672E317A6C8BB085AE562");

	Params::Quest_5082_C_OnDlgClosed_3CAE414047C672E317A6C8BB085AE562 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5082.Quest_5082_C.OnDlgSelectedOption_3CAE414047C672E317A6C8BB085AE562
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5082_C::OnDlgSelectedOption_3CAE414047C672E317A6C8BB085AE562(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5082_C", "OnDlgSelectedOption_3CAE414047C672E317A6C8BB085AE562");

	Params::Quest_5082_C_OnDlgSelectedOption_3CAE414047C672E317A6C8BB085AE562 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
