#pragma once



// Package: Quest_30054

#include "Basic.hpp"

#include "Quest_30054_classes.hpp"
#include "Quest_30054_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_30054.Quest_30054_C.ExecuteUbergraph_Quest_30054
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30054_C::ExecuteUbergraph_Quest_30054(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30054_C", "ExecuteUbergraph_Quest_30054");

	Params::Quest_30054_C_ExecuteUbergraph_Quest_30054 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30054.Quest_30054_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30054_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30054_C", "HandleFinishing");

	Params::Quest_30054_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30054.Quest_30054_C.OnSuccess_D99DDB8946E548CEBBA5BA992187E06D
// (BlueprintCallable, BlueprintEvent)

void UQuest_30054_C::OnSuccess_D99DDB8946E548CEBBA5BA992187E06D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30054_C", "OnSuccess_D99DDB8946E548CEBBA5BA992187E06D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30054.Quest_30054_C.OnFinished_E8D123F645EC559067D431952F15F56F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30054_C::OnFinished_E8D123F645EC559067D431952F15F56F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30054_C", "OnFinished_E8D123F645EC559067D431952F15F56F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30054.Quest_30054_C.OnStop_E8D123F645EC559067D431952F15F56F
// (BlueprintCallable, BlueprintEvent)

void UQuest_30054_C::OnStop_E8D123F645EC559067D431952F15F56F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30054_C", "OnStop_E8D123F645EC559067D431952F15F56F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_30054.Quest_30054_C.OnDlgClosed_21A5939C430F2D6F47C9E7AB72457DB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30054_C::OnDlgClosed_21A5939C430F2D6F47C9E7AB72457DB5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30054_C", "OnDlgClosed_21A5939C430F2D6F47C9E7AB72457DB5");

	Params::Quest_30054_C_OnDlgClosed_21A5939C430F2D6F47C9E7AB72457DB5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_30054.Quest_30054_C.OnDlgSelectedOption_21A5939C430F2D6F47C9E7AB72457DB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_30054_C::OnDlgSelectedOption_21A5939C430F2D6F47C9E7AB72457DB5(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_30054_C", "OnDlgSelectedOption_21A5939C430F2D6F47C9E7AB72457DB5");

	Params::Quest_30054_C_OnDlgSelectedOption_21A5939C430F2D6F47C9E7AB72457DB5 Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
