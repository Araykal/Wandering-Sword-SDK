#pragma once



// Package: Quest_12297

#include "Basic.hpp"

#include "Quest_12297_classes.hpp"
#include "Quest_12297_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_12297.Quest_12297_C.ExecuteUbergraph_Quest_12297
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12297_C::ExecuteUbergraph_Quest_12297(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12297_C", "ExecuteUbergraph_Quest_12297");

	Params::Quest_12297_C_ExecuteUbergraph_Quest_12297 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12297.Quest_12297_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12297_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12297_C", "HandleFinishing");

	Params::Quest_12297_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12297.Quest_12297_C.OnSuccess_D3E95EB04D4D24487091FB95BD176691
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12297_C::OnSuccess_D3E95EB04D4D24487091FB95BD176691(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12297_C", "OnSuccess_D3E95EB04D4D24487091FB95BD176691");

	Params::Quest_12297_C_OnSuccess_D3E95EB04D4D24487091FB95BD176691 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12297.Quest_12297_C.OnSuccess_04D6484240DD30DEABB98EAE1CAD886B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12297_C::OnSuccess_04D6484240DD30DEABB98EAE1CAD886B(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12297_C", "OnSuccess_04D6484240DD30DEABB98EAE1CAD886B");

	Params::Quest_12297_C_OnSuccess_04D6484240DD30DEABB98EAE1CAD886B Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12297.Quest_12297_C.OnSuccess_452E25564F487771FF35968732545875
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12297_C::OnSuccess_452E25564F487771FF35968732545875(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12297_C", "OnSuccess_452E25564F487771FF35968732545875");

	Params::Quest_12297_C_OnSuccess_452E25564F487771FF35968732545875 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12297.Quest_12297_C.OnFinished_31FF607147E18D7E4A21A48A457ADC9F
// (BlueprintCallable, BlueprintEvent)

void UQuest_12297_C::OnFinished_31FF607147E18D7E4A21A48A457ADC9F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12297_C", "OnFinished_31FF607147E18D7E4A21A48A457ADC9F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12297.Quest_12297_C.OnStop_31FF607147E18D7E4A21A48A457ADC9F
// (BlueprintCallable, BlueprintEvent)

void UQuest_12297_C::OnStop_31FF607147E18D7E4A21A48A457ADC9F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12297_C", "OnStop_31FF607147E18D7E4A21A48A457ADC9F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_12297.Quest_12297_C.OnDlgClosed_6AAB42D040EA3162076DBEA105CD17DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12297_C::OnDlgClosed_6AAB42D040EA3162076DBEA105CD17DD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12297_C", "OnDlgClosed_6AAB42D040EA3162076DBEA105CD17DD");

	Params::Quest_12297_C_OnDlgClosed_6AAB42D040EA3162076DBEA105CD17DD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12297.Quest_12297_C.OnDlgSelectedOption_6AAB42D040EA3162076DBEA105CD17DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_12297_C::OnDlgSelectedOption_6AAB42D040EA3162076DBEA105CD17DD(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12297_C", "OnDlgSelectedOption_6AAB42D040EA3162076DBEA105CD17DD");

	Params::Quest_12297_C_OnDlgSelectedOption_6AAB42D040EA3162076DBEA105CD17DD Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_12297.Quest_12297_C.OnSuccess_060608DA43B73BDF6EE5EBABFE661505
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWinOrLose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_12297_C::OnSuccess_060608DA43B73BDF6EE5EBABFE661505(bool bWinOrLose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_12297_C", "OnSuccess_060608DA43B73BDF6EE5EBABFE661505");

	Params::Quest_12297_C_OnSuccess_060608DA43B73BDF6EE5EBABFE661505 Parms{};

	Parms.bWinOrLose = bWinOrLose;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
