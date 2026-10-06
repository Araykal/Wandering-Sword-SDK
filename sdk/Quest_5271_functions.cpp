#pragma once



// Package: Quest_5271

#include "Basic.hpp"

#include "Quest_5271_classes.hpp"
#include "Quest_5271_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_5271.Quest_5271_C.ExecuteUbergraph_Quest_5271
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5271_C::ExecuteUbergraph_Quest_5271(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5271_C", "ExecuteUbergraph_Quest_5271");

	Params::Quest_5271_C_ExecuteUbergraph_Quest_5271 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5271.Quest_5271_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5271_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5271_C", "HandleFinishing");

	Params::Quest_5271_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5271.Quest_5271_C.OnSuccess_E065B08741CFA37011E48A86B90C7E33
// (BlueprintCallable, BlueprintEvent)

void UQuest_5271_C::OnSuccess_E065B08741CFA37011E48A86B90C7E33()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5271_C", "OnSuccess_E065B08741CFA37011E48A86B90C7E33");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5271.Quest_5271_C.OnFinished_D8ED0AEA412CB0EB21DCECA0C9AFC17B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5271_C::OnFinished_D8ED0AEA412CB0EB21DCECA0C9AFC17B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5271_C", "OnFinished_D8ED0AEA412CB0EB21DCECA0C9AFC17B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5271.Quest_5271_C.OnStop_D8ED0AEA412CB0EB21DCECA0C9AFC17B
// (BlueprintCallable, BlueprintEvent)

void UQuest_5271_C::OnStop_D8ED0AEA412CB0EB21DCECA0C9AFC17B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5271_C", "OnStop_D8ED0AEA412CB0EB21DCECA0C9AFC17B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_5271.Quest_5271_C.OnDlgClosed_45CAEC2743FB25181C0A05BD3CB31E9F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5271_C::OnDlgClosed_45CAEC2743FB25181C0A05BD3CB31E9F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5271_C", "OnDlgClosed_45CAEC2743FB25181C0A05BD3CB31E9F");

	Params::Quest_5271_C_OnDlgClosed_45CAEC2743FB25181C0A05BD3CB31E9F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_5271.Quest_5271_C.OnDlgSelectedOption_45CAEC2743FB25181C0A05BD3CB31E9F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_5271_C::OnDlgSelectedOption_45CAEC2743FB25181C0A05BD3CB31E9F(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_5271_C", "OnDlgSelectedOption_45CAEC2743FB25181C0A05BD3CB31E9F");

	Params::Quest_5271_C_OnDlgSelectedOption_45CAEC2743FB25181C0A05BD3CB31E9F Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
