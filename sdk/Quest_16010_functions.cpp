#pragma once



// Package: Quest_16010

#include "Basic.hpp"

#include "Quest_16010_classes.hpp"
#include "Quest_16010_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_16010.Quest_16010_C.ExecuteUbergraph_Quest_16010
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16010_C::ExecuteUbergraph_Quest_16010(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16010_C", "ExecuteUbergraph_Quest_16010");

	Params::Quest_16010_C_ExecuteUbergraph_Quest_16010 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16010.Quest_16010_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16010_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16010_C", "HandleFinishing");

	Params::Quest_16010_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16010.Quest_16010_C.OnFinished_CED119A142B3A64BADF09EB50D42B906
// (BlueprintCallable, BlueprintEvent)

void UQuest_16010_C::OnFinished_CED119A142B3A64BADF09EB50D42B906()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16010_C", "OnFinished_CED119A142B3A64BADF09EB50D42B906");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16010.Quest_16010_C.OnStop_CED119A142B3A64BADF09EB50D42B906
// (BlueprintCallable, BlueprintEvent)

void UQuest_16010_C::OnStop_CED119A142B3A64BADF09EB50D42B906()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16010_C", "OnStop_CED119A142B3A64BADF09EB50D42B906");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_16010.Quest_16010_C.OnDlgClosed_168D90BB4DB2423744D81A80EAC7E57F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16010_C::OnDlgClosed_168D90BB4DB2423744D81A80EAC7E57F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16010_C", "OnDlgClosed_168D90BB4DB2423744D81A80EAC7E57F");

	Params::Quest_16010_C_OnDlgClosed_168D90BB4DB2423744D81A80EAC7E57F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_16010.Quest_16010_C.OnDlgSelectedOption_168D90BB4DB2423744D81A80EAC7E57F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_16010_C::OnDlgSelectedOption_168D90BB4DB2423744D81A80EAC7E57F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_16010_C", "OnDlgSelectedOption_168D90BB4DB2423744D81A80EAC7E57F");

	Params::Quest_16010_C_OnDlgSelectedOption_168D90BB4DB2423744D81A80EAC7E57F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
