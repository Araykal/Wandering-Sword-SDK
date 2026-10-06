#pragma once



// Package: Quest_12673

#include "Basic.hpp"

#include "Quest_12673_classes.hpp"
#include "Quest_12673_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12673.Quest_12673_C.ExecuteUbergraph_Quest_12673
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12673_C::ExecuteUbergraph_Quest_12673(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12673_C", "ExecuteUbergraph_Quest_12673");

	Params::Quest_12673_C_ExecuteUbergraph_Quest_12673 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12673.Quest_12673_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12673_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12673_C", "HandleFinishing");

	Params::Quest_12673_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12673.Quest_12673_C.OnSuccess_3D04511549A678E71B3FB9BB7836CAEE
// (BlueprintCallable, BlueprintEvent)

void UQuest_12673_C::OnSuccess_3D04511549A678E71B3FB9BB7836CAEE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12673_C", "OnSuccess_3D04511549A678E71B3FB9BB7836CAEE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12673.Quest_12673_C.OnFinished_4CBE018F4E39DC280CBC9186A4ABC49B
// (BlueprintCallable, BlueprintEvent)

void UQuest_12673_C::OnFinished_4CBE018F4E39DC280CBC9186A4ABC49B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12673_C", "OnFinished_4CBE018F4E39DC280CBC9186A4ABC49B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12673.Quest_12673_C.OnStop_4CBE018F4E39DC280CBC9186A4ABC49B
// (BlueprintCallable, BlueprintEvent)

void UQuest_12673_C::OnStop_4CBE018F4E39DC280CBC9186A4ABC49B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12673_C", "OnStop_4CBE018F4E39DC280CBC9186A4ABC49B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12673.Quest_12673_C.OnDlgClosed_D73D4CD543880D8FEF787DA5ABD7D031
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12673_C::OnDlgClosed_D73D4CD543880D8FEF787DA5ABD7D031(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12673_C", "OnDlgClosed_D73D4CD543880D8FEF787DA5ABD7D031");

	Params::Quest_12673_C_OnDlgClosed_D73D4CD543880D8FEF787DA5ABD7D031 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12673.Quest_12673_C.OnDlgSelectedOption_D73D4CD543880D8FEF787DA5ABD7D031
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12673_C::OnDlgSelectedOption_D73D4CD543880D8FEF787DA5ABD7D031(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12673_C", "OnDlgSelectedOption_D73D4CD543880D8FEF787DA5ABD7D031");

	Params::Quest_12673_C_OnDlgSelectedOption_D73D4CD543880D8FEF787DA5ABD7D031 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
