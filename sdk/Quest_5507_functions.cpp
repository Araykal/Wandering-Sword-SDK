#pragma once



// Package: Quest_5507

#include "Basic.hpp"

#include "Quest_5507_classes.hpp"
#include "Quest_5507_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5507.Quest_5507_C.ExecuteUbergraph_Quest_5507
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5507_C::ExecuteUbergraph_Quest_5507(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5507_C", "ExecuteUbergraph_Quest_5507");

	Params::Quest_5507_C_ExecuteUbergraph_Quest_5507 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5507.Quest_5507_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5507_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5507_C", "HandleFinishing");

	Params::Quest_5507_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5507.Quest_5507_C.OnSuccess_8AF60583483227D3217F90B86A80129F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5507_C::OnSuccess_8AF60583483227D3217F90B86A80129F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5507_C", "OnSuccess_8AF60583483227D3217F90B86A80129F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5507.Quest_5507_C.OnFinished_BEA3BACA4FFA262651BB0EA32ED83BF4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5507_C::OnFinished_BEA3BACA4FFA262651BB0EA32ED83BF4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5507_C", "OnFinished_BEA3BACA4FFA262651BB0EA32ED83BF4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5507.Quest_5507_C.OnStop_BEA3BACA4FFA262651BB0EA32ED83BF4
// (BlueprintCallable, BlueprintEvent)

void UQuest_5507_C::OnStop_BEA3BACA4FFA262651BB0EA32ED83BF4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5507_C", "OnStop_BEA3BACA4FFA262651BB0EA32ED83BF4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5507.Quest_5507_C.OnDlgClosed_94BDE3FE4A8DFAF0F23742A857FA01F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5507_C::OnDlgClosed_94BDE3FE4A8DFAF0F23742A857FA01F4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5507_C", "OnDlgClosed_94BDE3FE4A8DFAF0F23742A857FA01F4");

	Params::Quest_5507_C_OnDlgClosed_94BDE3FE4A8DFAF0F23742A857FA01F4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5507.Quest_5507_C.OnDlgSelectedOption_94BDE3FE4A8DFAF0F23742A857FA01F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5507_C::OnDlgSelectedOption_94BDE3FE4A8DFAF0F23742A857FA01F4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5507_C", "OnDlgSelectedOption_94BDE3FE4A8DFAF0F23742A857FA01F4");

	Params::Quest_5507_C_OnDlgSelectedOption_94BDE3FE4A8DFAF0F23742A857FA01F4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
