#pragma once



// Package: Quest_31320

#include "Basic.hpp"

#include "Quest_31320_classes.hpp"
#include "Quest_31320_parameters.hpp"


SDK_NAMESPACE_START

// Function Quest_31320.Quest_31320_C.ExecuteUbergraph_Quest_31320
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31320_C::ExecuteUbergraph_Quest_31320(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31320_C", "ExecuteUbergraph_Quest_31320");

	Params::Quest_31320_C_ExecuteUbergraph_Quest_31320 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31320.Quest_31320_C.HandleFinishing
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31320_C::HandleFinishing(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31320_C", "HandleFinishing");

	Params::Quest_31320_C_HandleFinishing Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31320.Quest_31320_C.OnFinished_7780E31442BE48390607F3807500BE92
// (BlueprintCallable, BlueprintEvent)

void UQuest_31320_C::OnFinished_7780E31442BE48390607F3807500BE92()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31320_C", "OnFinished_7780E31442BE48390607F3807500BE92");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_31320.Quest_31320_C.OnStop_7780E31442BE48390607F3807500BE92
// (BlueprintCallable, BlueprintEvent)

void UQuest_31320_C::OnStop_7780E31442BE48390607F3807500BE92()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31320_C", "OnStop_7780E31442BE48390607F3807500BE92");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Quest_31320.Quest_31320_C.OnDlgClosed_EB916B45477E987D571B25B73C0AC8BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31320_C::OnDlgClosed_EB916B45477E987D571B25B73C0AC8BE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31320_C", "OnDlgClosed_EB916B45477E987D571B25B73C0AC8BE");

	Params::Quest_31320_C_OnDlgClosed_EB916B45477E987D571B25B73C0AC8BE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31320.Quest_31320_C.OnDlgSelectedOption_EB916B45477E987D571B25B73C0AC8BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31320_C::OnDlgSelectedOption_EB916B45477E987D571B25B73C0AC8BE(int32 NPCId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31320_C", "OnDlgSelectedOption_EB916B45477E987D571B25B73C0AC8BE");

	Params::Quest_31320_C_OnDlgSelectedOption_EB916B45477E987D571B25B73C0AC8BE Parms{};

	Parms.NPCId = NPCId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Quest_31320.Quest_31320_C.RemoveSkillAndGiveItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NPCId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemDefId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_31320_C::RemoveSkillAndGiveItem(int32 NPCId, int32 SkillId, int32 ItemDefId, int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Quest_31320_C", "RemoveSkillAndGiveItem");

	Params::Quest_31320_C_RemoveSkillAndGiveItem Parms{};

	Parms.NPCId = NPCId;
	Parms.SkillId = SkillId;
	Parms.ItemDefId = ItemDefId;
	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


SDK_NAMESPACE_END
