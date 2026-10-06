#pragma once



// Package: Quest_28753

#include "Basic.hpp"

#include "Quest_28753_classes.hpp"
#include "Quest_28753_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28753.Quest_28753_C.ExecuteUbergraph_Quest_28753
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28753_C::ExecuteUbergraph_Quest_28753(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28753_C", "ExecuteUbergraph_Quest_28753");

	Params::Quest_28753_C_ExecuteUbergraph_Quest_28753 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28753.Quest_28753_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28753_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28753_C", "HandleFinishing");

	Params::Quest_28753_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28753.Quest_28753_C.OnSuccess_A5B80FB0474302D39ABFB3B1BADCB14B
// (BlueprintCallable, BlueprintEvent)

void UQuest_28753_C::OnSuccess_A5B80FB0474302D39ABFB3B1BADCB14B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28753_C", "OnSuccess_A5B80FB0474302D39ABFB3B1BADCB14B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28753.Quest_28753_C.OnFinished_6070E39143C0E66CC1BDAA9B63FD3636
// (BlueprintCallable, BlueprintEvent)

void UQuest_28753_C::OnFinished_6070E39143C0E66CC1BDAA9B63FD3636()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28753_C", "OnFinished_6070E39143C0E66CC1BDAA9B63FD3636");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28753.Quest_28753_C.OnStop_6070E39143C0E66CC1BDAA9B63FD3636
// (BlueprintCallable, BlueprintEvent)

void UQuest_28753_C::OnStop_6070E39143C0E66CC1BDAA9B63FD3636()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28753_C", "OnStop_6070E39143C0E66CC1BDAA9B63FD3636");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28753.Quest_28753_C.OnDlgClosed_5D3C343B4D2CD0D8A3E5E5A6F89F2D64
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28753_C::OnDlgClosed_5D3C343B4D2CD0D8A3E5E5A6F89F2D64(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28753_C", "OnDlgClosed_5D3C343B4D2CD0D8A3E5E5A6F89F2D64");

	Params::Quest_28753_C_OnDlgClosed_5D3C343B4D2CD0D8A3E5E5A6F89F2D64 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28753.Quest_28753_C.OnDlgSelectedOption_5D3C343B4D2CD0D8A3E5E5A6F89F2D64
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28753_C::OnDlgSelectedOption_5D3C343B4D2CD0D8A3E5E5A6F89F2D64(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28753_C", "OnDlgSelectedOption_5D3C343B4D2CD0D8A3E5E5A6F89F2D64");

	Params::Quest_28753_C_OnDlgSelectedOption_5D3C343B4D2CD0D8A3E5E5A6F89F2D64 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
