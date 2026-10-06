#pragma once



// Package: Quest_30645

#include "Basic.hpp"

#include "Quest_30645_classes.hpp"
#include "Quest_30645_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30645.Quest_30645_C.ExecuteUbergraph_Quest_30645
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30645_C::ExecuteUbergraph_Quest_30645(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30645_C", "ExecuteUbergraph_Quest_30645");

	Params::Quest_30645_C_ExecuteUbergraph_Quest_30645 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30645.Quest_30645_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30645_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30645_C", "HandleFinishing");

	Params::Quest_30645_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30645.Quest_30645_C.OnSuccess_EE05A4AB499FA62C25245ABB21B5F242
// (BlueprintCallable, BlueprintEvent)

void UQuest_30645_C::OnSuccess_EE05A4AB499FA62C25245ABB21B5F242()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30645_C", "OnSuccess_EE05A4AB499FA62C25245ABB21B5F242");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30645.Quest_30645_C.OnFinished_FFD1294D4F4D3213E3BBF1BADEC5050D
// (BlueprintCallable, BlueprintEvent)

void UQuest_30645_C::OnFinished_FFD1294D4F4D3213E3BBF1BADEC5050D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30645_C", "OnFinished_FFD1294D4F4D3213E3BBF1BADEC5050D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30645.Quest_30645_C.OnStop_FFD1294D4F4D3213E3BBF1BADEC5050D
// (BlueprintCallable, BlueprintEvent)

void UQuest_30645_C::OnStop_FFD1294D4F4D3213E3BBF1BADEC5050D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30645_C", "OnStop_FFD1294D4F4D3213E3BBF1BADEC5050D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30645.Quest_30645_C.OnDlgClosed_65EFA8C34BF8F633929B6A825856EE4C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30645_C::OnDlgClosed_65EFA8C34BF8F633929B6A825856EE4C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30645_C", "OnDlgClosed_65EFA8C34BF8F633929B6A825856EE4C");

	Params::Quest_30645_C_OnDlgClosed_65EFA8C34BF8F633929B6A825856EE4C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30645.Quest_30645_C.OnDlgSelectedOption_65EFA8C34BF8F633929B6A825856EE4C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30645_C::OnDlgSelectedOption_65EFA8C34BF8F633929B6A825856EE4C(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30645_C", "OnDlgSelectedOption_65EFA8C34BF8F633929B6A825856EE4C");

	Params::Quest_30645_C_OnDlgSelectedOption_65EFA8C34BF8F633929B6A825856EE4C Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
