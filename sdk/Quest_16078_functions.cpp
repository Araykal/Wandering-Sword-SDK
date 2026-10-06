#pragma once



// Package: Quest_16078

#include "Basic.hpp"

#include "Quest_16078_classes.hpp"
#include "Quest_16078_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16078.Quest_16078_C.ExecuteUbergraph_Quest_16078
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16078_C::ExecuteUbergraph_Quest_16078(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16078_C", "ExecuteUbergraph_Quest_16078");

	Params::Quest_16078_C_ExecuteUbergraph_Quest_16078 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16078.Quest_16078_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16078_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16078_C", "HandleFinishing");

	Params::Quest_16078_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16078.Quest_16078_C.OnFinished_9021FD9D4A70EB5410F0BEA0FCC8089B
// (BlueprintCallable, BlueprintEvent)

void UQuest_16078_C::OnFinished_9021FD9D4A70EB5410F0BEA0FCC8089B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16078_C", "OnFinished_9021FD9D4A70EB5410F0BEA0FCC8089B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16078.Quest_16078_C.OnStop_9021FD9D4A70EB5410F0BEA0FCC8089B
// (BlueprintCallable, BlueprintEvent)

void UQuest_16078_C::OnStop_9021FD9D4A70EB5410F0BEA0FCC8089B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16078_C", "OnStop_9021FD9D4A70EB5410F0BEA0FCC8089B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16078.Quest_16078_C.OnDlgClosed_AF86499249DFDB00BD256DA355EC19E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16078_C::OnDlgClosed_AF86499249DFDB00BD256DA355EC19E4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16078_C", "OnDlgClosed_AF86499249DFDB00BD256DA355EC19E4");

	Params::Quest_16078_C_OnDlgClosed_AF86499249DFDB00BD256DA355EC19E4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16078.Quest_16078_C.OnDlgSelectedOption_AF86499249DFDB00BD256DA355EC19E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16078_C::OnDlgSelectedOption_AF86499249DFDB00BD256DA355EC19E4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16078_C", "OnDlgSelectedOption_AF86499249DFDB00BD256DA355EC19E4");

	Params::Quest_16078_C_OnDlgSelectedOption_AF86499249DFDB00BD256DA355EC19E4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
