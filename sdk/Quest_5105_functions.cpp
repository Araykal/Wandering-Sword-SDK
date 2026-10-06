#pragma once



// Package: Quest_5105

#include "Basic.hpp"

#include "Quest_5105_classes.hpp"
#include "Quest_5105_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5105.Quest_5105_C.ExecuteUbergraph_Quest_5105
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5105_C::ExecuteUbergraph_Quest_5105(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5105_C", "ExecuteUbergraph_Quest_5105");

	Params::Quest_5105_C_ExecuteUbergraph_Quest_5105 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5105.Quest_5105_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    GuidanceType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuest_5105_C::End(const class FString& GuidanceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5105_C", "End");

	Params::Quest_5105_C_End Parms{};

	Parms.GuidanceType = std::move(GuidanceType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5105.Quest_5105_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5105_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5105_C", "HandleFinishing");

	Params::Quest_5105_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5105.Quest_5105_C.OnFinished_7989BB4244EF35CEAF809ABA74810B8F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5105_C::OnFinished_7989BB4244EF35CEAF809ABA74810B8F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5105_C", "OnFinished_7989BB4244EF35CEAF809ABA74810B8F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5105.Quest_5105_C.OnStop_7989BB4244EF35CEAF809ABA74810B8F
// (BlueprintCallable, BlueprintEvent)

void UQuest_5105_C::OnStop_7989BB4244EF35CEAF809ABA74810B8F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5105_C", "OnStop_7989BB4244EF35CEAF809ABA74810B8F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5105.Quest_5105_C.OnDlgClosed_B8AA536B404141D296EF38B63705CD92
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5105_C::OnDlgClosed_B8AA536B404141D296EF38B63705CD92(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5105_C", "OnDlgClosed_B8AA536B404141D296EF38B63705CD92");

	Params::Quest_5105_C_OnDlgClosed_B8AA536B404141D296EF38B63705CD92 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5105.Quest_5105_C.OnDlgSelectedOption_B8AA536B404141D296EF38B63705CD92
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5105_C::OnDlgSelectedOption_B8AA536B404141D296EF38B63705CD92(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5105_C", "OnDlgSelectedOption_B8AA536B404141D296EF38B63705CD92");

	Params::Quest_5105_C_OnDlgSelectedOption_B8AA536B404141D296EF38B63705CD92 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
