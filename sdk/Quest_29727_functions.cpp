#pragma once



// Package: Quest_29727

#include "Basic.hpp"

#include "Quest_29727_classes.hpp"
#include "Quest_29727_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29727.Quest_29727_C.ExecuteUbergraph_Quest_29727
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29727_C::ExecuteUbergraph_Quest_29727(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29727_C", "ExecuteUbergraph_Quest_29727");

	Params::Quest_29727_C_ExecuteUbergraph_Quest_29727 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29727.Quest_29727_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29727_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29727_C", "HandleFinishing");

	Params::Quest_29727_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29727.Quest_29727_C.OnSuccess_A4DE32BD4F7FCC1C9830F4A19C5A6F85
// (BlueprintCallable, BlueprintEvent)

void UQuest_29727_C::OnSuccess_A4DE32BD4F7FCC1C9830F4A19C5A6F85()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29727_C", "OnSuccess_A4DE32BD4F7FCC1C9830F4A19C5A6F85");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29727.Quest_29727_C.OnFinished_3C3F67A444FF7C057F1109B5913E318B
// (BlueprintCallable, BlueprintEvent)

void UQuest_29727_C::OnFinished_3C3F67A444FF7C057F1109B5913E318B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29727_C", "OnFinished_3C3F67A444FF7C057F1109B5913E318B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29727.Quest_29727_C.OnStop_3C3F67A444FF7C057F1109B5913E318B
// (BlueprintCallable, BlueprintEvent)

void UQuest_29727_C::OnStop_3C3F67A444FF7C057F1109B5913E318B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29727_C", "OnStop_3C3F67A444FF7C057F1109B5913E318B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29727.Quest_29727_C.OnDlgClosed_7650651C465A47F1A46A0D9C88384DB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29727_C::OnDlgClosed_7650651C465A47F1A46A0D9C88384DB0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29727_C", "OnDlgClosed_7650651C465A47F1A46A0D9C88384DB0");

	Params::Quest_29727_C_OnDlgClosed_7650651C465A47F1A46A0D9C88384DB0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29727.Quest_29727_C.OnDlgSelectedOption_7650651C465A47F1A46A0D9C88384DB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29727_C::OnDlgSelectedOption_7650651C465A47F1A46A0D9C88384DB0(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29727_C", "OnDlgSelectedOption_7650651C465A47F1A46A0D9C88384DB0");

	Params::Quest_29727_C_OnDlgSelectedOption_7650651C465A47F1A46A0D9C88384DB0 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
