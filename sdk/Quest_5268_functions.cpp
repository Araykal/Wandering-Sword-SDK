#pragma once



// Package: Quest_5268

#include "Basic.hpp"

#include "Quest_5268_classes.hpp"
#include "Quest_5268_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5268.Quest_5268_C.ExecuteUbergraph_Quest_5268
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5268_C::ExecuteUbergraph_Quest_5268(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5268_C", "ExecuteUbergraph_Quest_5268");

	Params::Quest_5268_C_ExecuteUbergraph_Quest_5268 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5268.Quest_5268_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5268_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5268_C", "HandleFinishing");

	Params::Quest_5268_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5268.Quest_5268_C.OnSuccess_89A713E7487C0A449A8C679B95DCA73C
// (BlueprintCallable, BlueprintEvent)

void UQuest_5268_C::OnSuccess_89A713E7487C0A449A8C679B95DCA73C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5268_C", "OnSuccess_89A713E7487C0A449A8C679B95DCA73C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5268.Quest_5268_C.OnFinished_BABC2A43487A3FB2954471A20D11BB99
// (BlueprintCallable, BlueprintEvent)

void UQuest_5268_C::OnFinished_BABC2A43487A3FB2954471A20D11BB99()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5268_C", "OnFinished_BABC2A43487A3FB2954471A20D11BB99");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5268.Quest_5268_C.OnStop_BABC2A43487A3FB2954471A20D11BB99
// (BlueprintCallable, BlueprintEvent)

void UQuest_5268_C::OnStop_BABC2A43487A3FB2954471A20D11BB99()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5268_C", "OnStop_BABC2A43487A3FB2954471A20D11BB99");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5268.Quest_5268_C.OnDlgClosed_BF3CE630402A83E3B66F3BB442AC5646
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5268_C::OnDlgClosed_BF3CE630402A83E3B66F3BB442AC5646(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5268_C", "OnDlgClosed_BF3CE630402A83E3B66F3BB442AC5646");

	Params::Quest_5268_C_OnDlgClosed_BF3CE630402A83E3B66F3BB442AC5646 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5268.Quest_5268_C.OnDlgSelectedOption_BF3CE630402A83E3B66F3BB442AC5646
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5268_C::OnDlgSelectedOption_BF3CE630402A83E3B66F3BB442AC5646(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5268_C", "OnDlgSelectedOption_BF3CE630402A83E3B66F3BB442AC5646");

	Params::Quest_5268_C_OnDlgSelectedOption_BF3CE630402A83E3B66F3BB442AC5646 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
