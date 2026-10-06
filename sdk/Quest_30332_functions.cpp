#pragma once



// Package: Quest_30332

#include "Basic.hpp"

#include "Quest_30332_classes.hpp"
#include "Quest_30332_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30332.Quest_30332_C.ExecuteUbergraph_Quest_30332
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30332_C::ExecuteUbergraph_Quest_30332(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30332_C", "ExecuteUbergraph_Quest_30332");

	Params::Quest_30332_C_ExecuteUbergraph_Quest_30332 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30332.Quest_30332_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30332_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30332_C", "HandleFinishing");

	Params::Quest_30332_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30332.Quest_30332_C.OnSuccess_3F5ACF704A93B6285FB525A9C94E8229
// (BlueprintCallable, BlueprintEvent)

void UQuest_30332_C::OnSuccess_3F5ACF704A93B6285FB525A9C94E8229()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30332_C", "OnSuccess_3F5ACF704A93B6285FB525A9C94E8229");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30332.Quest_30332_C.OnFinished_E07E6315465FA91BBD13DCA7DFF8163F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30332_C::OnFinished_E07E6315465FA91BBD13DCA7DFF8163F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30332_C", "OnFinished_E07E6315465FA91BBD13DCA7DFF8163F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30332.Quest_30332_C.OnStop_E07E6315465FA91BBD13DCA7DFF8163F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30332_C::OnStop_E07E6315465FA91BBD13DCA7DFF8163F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30332_C", "OnStop_E07E6315465FA91BBD13DCA7DFF8163F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30332.Quest_30332_C.OnDlgClosed_5D916372426EFD52191D9692EAE0C8B3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30332_C::OnDlgClosed_5D916372426EFD52191D9692EAE0C8B3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30332_C", "OnDlgClosed_5D916372426EFD52191D9692EAE0C8B3");

	Params::Quest_30332_C_OnDlgClosed_5D916372426EFD52191D9692EAE0C8B3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30332.Quest_30332_C.OnDlgSelectedOption_5D916372426EFD52191D9692EAE0C8B3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30332_C::OnDlgSelectedOption_5D916372426EFD52191D9692EAE0C8B3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30332_C", "OnDlgSelectedOption_5D916372426EFD52191D9692EAE0C8B3");

	Params::Quest_30332_C_OnDlgSelectedOption_5D916372426EFD52191D9692EAE0C8B3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
