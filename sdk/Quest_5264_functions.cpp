#pragma once



// Package: Quest_5264

#include "Basic.hpp"

#include "Quest_5264_classes.hpp"
#include "Quest_5264_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5264.Quest_5264_C.ExecuteUbergraph_Quest_5264
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5264_C::ExecuteUbergraph_Quest_5264(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5264_C", "ExecuteUbergraph_Quest_5264");

	Params::Quest_5264_C_ExecuteUbergraph_Quest_5264 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5264.Quest_5264_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5264_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5264_C", "HandleFinishing");

	Params::Quest_5264_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5264.Quest_5264_C.OnSuccess_27D4647E43612401D815749CCEFE87B6
// (BlueprintCallable, BlueprintEvent)

void UQuest_5264_C::OnSuccess_27D4647E43612401D815749CCEFE87B6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5264_C", "OnSuccess_27D4647E43612401D815749CCEFE87B6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5264.Quest_5264_C.OnFinished_479ED5DB432DEB360247318FA81F0B4D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5264_C::OnFinished_479ED5DB432DEB360247318FA81F0B4D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5264_C", "OnFinished_479ED5DB432DEB360247318FA81F0B4D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5264.Quest_5264_C.OnStop_479ED5DB432DEB360247318FA81F0B4D
// (BlueprintCallable, BlueprintEvent)

void UQuest_5264_C::OnStop_479ED5DB432DEB360247318FA81F0B4D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5264_C", "OnStop_479ED5DB432DEB360247318FA81F0B4D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5264.Quest_5264_C.OnDlgClosed_4FB2CD1A48674E04D2B76B94145A09DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5264_C::OnDlgClosed_4FB2CD1A48674E04D2B76B94145A09DC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5264_C", "OnDlgClosed_4FB2CD1A48674E04D2B76B94145A09DC");

	Params::Quest_5264_C_OnDlgClosed_4FB2CD1A48674E04D2B76B94145A09DC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5264.Quest_5264_C.OnDlgSelectedOption_4FB2CD1A48674E04D2B76B94145A09DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5264_C::OnDlgSelectedOption_4FB2CD1A48674E04D2B76B94145A09DC(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5264_C", "OnDlgSelectedOption_4FB2CD1A48674E04D2B76B94145A09DC");

	Params::Quest_5264_C_OnDlgSelectedOption_4FB2CD1A48674E04D2B76B94145A09DC Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
