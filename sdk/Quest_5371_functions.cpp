#pragma once



// Package: Quest_5371

#include "Basic.hpp"

#include "Quest_5371_classes.hpp"
#include "Quest_5371_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5371.Quest_5371_C.ExecuteUbergraph_Quest_5371
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5371_C::ExecuteUbergraph_Quest_5371(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5371_C", "ExecuteUbergraph_Quest_5371");

	Params::Quest_5371_C_ExecuteUbergraph_Quest_5371 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5371.Quest_5371_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5371_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5371_C", "HandleFinishing");

	Params::Quest_5371_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5371.Quest_5371_C.OnFinished_F5AA3DB84B8B70F6527DC291B582C4F7
// (BlueprintCallable, BlueprintEvent)

void UQuest_5371_C::OnFinished_F5AA3DB84B8B70F6527DC291B582C4F7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5371_C", "OnFinished_F5AA3DB84B8B70F6527DC291B582C4F7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5371.Quest_5371_C.OnStop_F5AA3DB84B8B70F6527DC291B582C4F7
// (BlueprintCallable, BlueprintEvent)

void UQuest_5371_C::OnStop_F5AA3DB84B8B70F6527DC291B582C4F7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5371_C", "OnStop_F5AA3DB84B8B70F6527DC291B582C4F7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5371.Quest_5371_C.OnDlgClosed_CBC3D51A47CAF4E8C50FDE9556B7B3F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5371_C::OnDlgClosed_CBC3D51A47CAF4E8C50FDE9556B7B3F5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5371_C", "OnDlgClosed_CBC3D51A47CAF4E8C50FDE9556B7B3F5");

	Params::Quest_5371_C_OnDlgClosed_CBC3D51A47CAF4E8C50FDE9556B7B3F5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5371.Quest_5371_C.OnDlgSelectedOption_CBC3D51A47CAF4E8C50FDE9556B7B3F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5371_C::OnDlgSelectedOption_CBC3D51A47CAF4E8C50FDE9556B7B3F5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5371_C", "OnDlgSelectedOption_CBC3D51A47CAF4E8C50FDE9556B7B3F5");

	Params::Quest_5371_C_OnDlgSelectedOption_CBC3D51A47CAF4E8C50FDE9556B7B3F5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
