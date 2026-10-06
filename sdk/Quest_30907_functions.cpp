#pragma once



// Package: Quest_30907

#include "Basic.hpp"

#include "Quest_30907_classes.hpp"
#include "Quest_30907_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30907.Quest_30907_C.ExecuteUbergraph_Quest_30907
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30907_C::ExecuteUbergraph_Quest_30907(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30907_C", "ExecuteUbergraph_Quest_30907");

	Params::Quest_30907_C_ExecuteUbergraph_Quest_30907 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30907.Quest_30907_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30907_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30907_C", "HandleFinishing");

	Params::Quest_30907_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30907.Quest_30907_C.OnFinished_20EDCBD24E39DAA5CEBD0ABB386BEA6F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30907_C::OnFinished_20EDCBD24E39DAA5CEBD0ABB386BEA6F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30907_C", "OnFinished_20EDCBD24E39DAA5CEBD0ABB386BEA6F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30907.Quest_30907_C.OnStop_20EDCBD24E39DAA5CEBD0ABB386BEA6F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30907_C::OnStop_20EDCBD24E39DAA5CEBD0ABB386BEA6F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30907_C", "OnStop_20EDCBD24E39DAA5CEBD0ABB386BEA6F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30907.Quest_30907_C.OnDlgClosed_5E4A3D91467843444DE1B2B5E097D309
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30907_C::OnDlgClosed_5E4A3D91467843444DE1B2B5E097D309(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30907_C", "OnDlgClosed_5E4A3D91467843444DE1B2B5E097D309");

	Params::Quest_30907_C_OnDlgClosed_5E4A3D91467843444DE1B2B5E097D309 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30907.Quest_30907_C.OnDlgSelectedOption_5E4A3D91467843444DE1B2B5E097D309
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30907_C::OnDlgSelectedOption_5E4A3D91467843444DE1B2B5E097D309(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30907_C", "OnDlgSelectedOption_5E4A3D91467843444DE1B2B5E097D309");

	Params::Quest_30907_C_OnDlgSelectedOption_5E4A3D91467843444DE1B2B5E097D309 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
