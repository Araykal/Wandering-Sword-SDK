#pragma once



// Package: Quest_28314

#include "Basic.hpp"

#include "Quest_28314_classes.hpp"
#include "Quest_28314_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_28314.Quest_28314_C.ExecuteUbergraph_Quest_28314
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28314_C::ExecuteUbergraph_Quest_28314(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28314_C", "ExecuteUbergraph_Quest_28314");

	Params::Quest_28314_C_ExecuteUbergraph_Quest_28314 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28314.Quest_28314_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28314_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28314_C", "HandleFinishing");

	Params::Quest_28314_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28314.Quest_28314_C.OnSuccess_E6B00F3E4B7DEB946288CA8A677FDB50
// (BlueprintCallable, BlueprintEvent)

void UQuest_28314_C::OnSuccess_E6B00F3E4B7DEB946288CA8A677FDB50()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28314_C", "OnSuccess_E6B00F3E4B7DEB946288CA8A677FDB50");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28314.Quest_28314_C.OnFinished_C82B7D8A4888F6A595E705A9FD018FDA
// (BlueprintCallable, BlueprintEvent)

void UQuest_28314_C::OnFinished_C82B7D8A4888F6A595E705A9FD018FDA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28314_C", "OnFinished_C82B7D8A4888F6A595E705A9FD018FDA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28314.Quest_28314_C.OnStop_C82B7D8A4888F6A595E705A9FD018FDA
// (BlueprintCallable, BlueprintEvent)

void UQuest_28314_C::OnStop_C82B7D8A4888F6A595E705A9FD018FDA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28314_C", "OnStop_C82B7D8A4888F6A595E705A9FD018FDA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_28314.Quest_28314_C.OnDlgClosed_BF1604A146F2D6BE1101CEA5A8256D85
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28314_C::OnDlgClosed_BF1604A146F2D6BE1101CEA5A8256D85(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28314_C", "OnDlgClosed_BF1604A146F2D6BE1101CEA5A8256D85");

	Params::Quest_28314_C_OnDlgClosed_BF1604A146F2D6BE1101CEA5A8256D85 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_28314.Quest_28314_C.OnDlgSelectedOption_BF1604A146F2D6BE1101CEA5A8256D85
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_28314_C::OnDlgSelectedOption_BF1604A146F2D6BE1101CEA5A8256D85(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_28314_C", "OnDlgSelectedOption_BF1604A146F2D6BE1101CEA5A8256D85");

	Params::Quest_28314_C_OnDlgSelectedOption_BF1604A146F2D6BE1101CEA5A8256D85 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
