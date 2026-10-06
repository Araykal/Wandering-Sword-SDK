#pragma once



// Package: Quest_12702

#include "Basic.hpp"

#include "Quest_12702_classes.hpp"
#include "Quest_12702_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12702.Quest_12702_C.ExecuteUbergraph_Quest_12702
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12702_C::ExecuteUbergraph_Quest_12702(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12702_C", "ExecuteUbergraph_Quest_12702");

	Params::Quest_12702_C_ExecuteUbergraph_Quest_12702 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12702.Quest_12702_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12702_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12702_C", "HandleFinishing");

	Params::Quest_12702_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12702.Quest_12702_C.OnSuccess_F7A2A43C41510B79568075B338919105
// (BlueprintCallable, BlueprintEvent)

void UQuest_12702_C::OnSuccess_F7A2A43C41510B79568075B338919105()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12702_C", "OnSuccess_F7A2A43C41510B79568075B338919105");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12702.Quest_12702_C.OnFinished_C94EEC864A4D6A2B70FF86B24803066B
// (BlueprintCallable, BlueprintEvent)

void UQuest_12702_C::OnFinished_C94EEC864A4D6A2B70FF86B24803066B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12702_C", "OnFinished_C94EEC864A4D6A2B70FF86B24803066B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12702.Quest_12702_C.OnStop_C94EEC864A4D6A2B70FF86B24803066B
// (BlueprintCallable, BlueprintEvent)

void UQuest_12702_C::OnStop_C94EEC864A4D6A2B70FF86B24803066B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12702_C", "OnStop_C94EEC864A4D6A2B70FF86B24803066B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12702.Quest_12702_C.OnDlgClosed_99914AB249897B63601A27A6CBFE5BE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12702_C::OnDlgClosed_99914AB249897B63601A27A6CBFE5BE3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12702_C", "OnDlgClosed_99914AB249897B63601A27A6CBFE5BE3");

	Params::Quest_12702_C_OnDlgClosed_99914AB249897B63601A27A6CBFE5BE3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12702.Quest_12702_C.OnDlgSelectedOption_99914AB249897B63601A27A6CBFE5BE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12702_C::OnDlgSelectedOption_99914AB249897B63601A27A6CBFE5BE3(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12702_C", "OnDlgSelectedOption_99914AB249897B63601A27A6CBFE5BE3");

	Params::Quest_12702_C_OnDlgSelectedOption_99914AB249897B63601A27A6CBFE5BE3 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
