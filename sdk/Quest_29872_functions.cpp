#pragma once



// Package: Quest_29872

#include "Basic.hpp"

#include "Quest_29872_classes.hpp"
#include "Quest_29872_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29872.Quest_29872_C.ExecuteUbergraph_Quest_29872
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29872_C::ExecuteUbergraph_Quest_29872(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29872_C", "ExecuteUbergraph_Quest_29872");

	Params::Quest_29872_C_ExecuteUbergraph_Quest_29872 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29872.Quest_29872_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29872_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29872_C", "HandleFinishing");

	Params::Quest_29872_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29872.Quest_29872_C.OnFinished_71DED5264A8B0E8E4E61B4B99191ED3D
// (BlueprintCallable, BlueprintEvent)

void UQuest_29872_C::OnFinished_71DED5264A8B0E8E4E61B4B99191ED3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29872_C", "OnFinished_71DED5264A8B0E8E4E61B4B99191ED3D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29872.Quest_29872_C.OnStop_71DED5264A8B0E8E4E61B4B99191ED3D
// (BlueprintCallable, BlueprintEvent)

void UQuest_29872_C::OnStop_71DED5264A8B0E8E4E61B4B99191ED3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29872_C", "OnStop_71DED5264A8B0E8E4E61B4B99191ED3D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29872.Quest_29872_C.OnDlgClosed_DE96F7364EAB0C130F02968184C58C28
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29872_C::OnDlgClosed_DE96F7364EAB0C130F02968184C58C28(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29872_C", "OnDlgClosed_DE96F7364EAB0C130F02968184C58C28");

	Params::Quest_29872_C_OnDlgClosed_DE96F7364EAB0C130F02968184C58C28 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29872.Quest_29872_C.OnDlgSelectedOption_DE96F7364EAB0C130F02968184C58C28
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29872_C::OnDlgSelectedOption_DE96F7364EAB0C130F02968184C58C28(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29872_C", "OnDlgSelectedOption_DE96F7364EAB0C130F02968184C58C28");

	Params::Quest_29872_C_OnDlgSelectedOption_DE96F7364EAB0C130F02968184C58C28 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
