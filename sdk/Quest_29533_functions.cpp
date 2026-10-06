#pragma once



// Package: Quest_29533

#include "Basic.hpp"

#include "Quest_29533_classes.hpp"
#include "Quest_29533_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_29533.Quest_29533_C.ExecuteUbergraph_Quest_29533
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29533_C::ExecuteUbergraph_Quest_29533(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29533_C", "ExecuteUbergraph_Quest_29533");

	Params::Quest_29533_C_ExecuteUbergraph_Quest_29533 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29533.Quest_29533_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29533_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29533_C", "HandleFinishing");

	Params::Quest_29533_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29533.Quest_29533_C.OnSuccess_02B59FEF46734B359EF2BEAA71C77C48
// (BlueprintCallable, BlueprintEvent)

void UQuest_29533_C::OnSuccess_02B59FEF46734B359EF2BEAA71C77C48()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29533_C", "OnSuccess_02B59FEF46734B359EF2BEAA71C77C48");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29533.Quest_29533_C.OnFinished_BFAF3E754F6B3D03F1982098234147FF
// (BlueprintCallable, BlueprintEvent)

void UQuest_29533_C::OnFinished_BFAF3E754F6B3D03F1982098234147FF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29533_C", "OnFinished_BFAF3E754F6B3D03F1982098234147FF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29533.Quest_29533_C.OnStop_BFAF3E754F6B3D03F1982098234147FF
// (BlueprintCallable, BlueprintEvent)

void UQuest_29533_C::OnStop_BFAF3E754F6B3D03F1982098234147FF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29533_C", "OnStop_BFAF3E754F6B3D03F1982098234147FF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_29533.Quest_29533_C.OnDlgClosed_85DAB8094EFB95CABEF9B6A08F0708B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29533_C::OnDlgClosed_85DAB8094EFB95CABEF9B6A08F0708B4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29533_C", "OnDlgClosed_85DAB8094EFB95CABEF9B6A08F0708B4");

	Params::Quest_29533_C_OnDlgClosed_85DAB8094EFB95CABEF9B6A08F0708B4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_29533.Quest_29533_C.OnDlgSelectedOption_85DAB8094EFB95CABEF9B6A08F0708B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_29533_C::OnDlgSelectedOption_85DAB8094EFB95CABEF9B6A08F0708B4(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_29533_C", "OnDlgSelectedOption_85DAB8094EFB95CABEF9B6A08F0708B4");

	Params::Quest_29533_C_OnDlgSelectedOption_85DAB8094EFB95CABEF9B6A08F0708B4 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
