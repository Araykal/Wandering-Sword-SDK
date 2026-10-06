#pragma once



// Package: GA_QingGongBack

#include "Basic.hpp"

#include "GA_QingGongBack_classes.hpp"
#include "GA_QingGongBack_parameters.hpp"


SDK_NAMESPACE_START

// Function GA_QingGongBack.GA_QingGongBack_C.ExecuteUbergraph_GA_QingGongBack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_QingGongBack_C::ExecuteUbergraph_GA_QingGongBack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "ExecuteUbergraph_GA_QingGongBack");

	Params::GA_QingGongBack_C_ExecuteUbergraph_GA_QingGongBack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_QingGongBack.GA_QingGongBack_C.大招定屏后
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGongBack_C::大招定屏后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "大招定屏后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGongBack.GA_QingGongBack_C.瞬移到背后
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGongBack_C::瞬移到背后()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "瞬移到背后");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGongBack.GA_QingGongBack_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_QingGongBack_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "K2_OnEndAbility");

	Params::GA_QingGongBack_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_QingGongBack.GA_QingGongBack_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_QingGongBack_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGongBack.GA_QingGongBack_C.OnCompleted_988EDF7F42C78BB0094DEFA3A176BED1
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGongBack_C::OnCompleted_988EDF7F42C78BB0094DEFA3A176BED1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "OnCompleted_988EDF7F42C78BB0094DEFA3A176BED1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGongBack.GA_QingGongBack_C.OnInterrupted_988EDF7F42C78BB0094DEFA3A176BED1
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGongBack_C::OnInterrupted_988EDF7F42C78BB0094DEFA3A176BED1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "OnInterrupted_988EDF7F42C78BB0094DEFA3A176BED1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGongBack.GA_QingGongBack_C.OnCancelled_988EDF7F42C78BB0094DEFA3A176BED1
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGongBack_C::OnCancelled_988EDF7F42C78BB0094DEFA3A176BED1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "OnCancelled_988EDF7F42C78BB0094DEFA3A176BED1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGongBack.GA_QingGongBack_C.OnTargetLocationReached_2837B2FB4C76CF893D752F840776FE7D
// (BlueprintCallable, BlueprintEvent)

void UGA_QingGongBack_C::OnTargetLocationReached_2837B2FB4C76CF893D752F840776FE7D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "OnTargetLocationReached_2837B2FB4C76CF893D752F840776FE7D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_QingGongBack.GA_QingGongBack_C.改变轻功状态
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

void UGA_QingGongBack_C::改变轻功状态(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "改变轻功状态");

	Params::GA_QingGongBack_C_改变轻功状态 Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_QingGongBack.GA_QingGongBack_C.创建粒子材质
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D*                       FlipbookSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_QingGongBack_C::创建粒子材质(class AActor* Target, struct FVector2D* FlipbookSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "创建粒子材质");

	Params::GA_QingGongBack_C_创建粒子材质 Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (FlipbookSize != nullptr)
		*FlipbookSize = std::move(Parms.FlipbookSize);
}


// Function GA_QingGongBack.GA_QingGongBack_C.更新粒子材质
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D*                       FlipbookSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_QingGongBack_C::更新粒子材质(class AActor* NewParam, struct FVector2D* FlipbookSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_QingGongBack_C", "更新粒子材质");

	Params::GA_QingGongBack_C_更新粒子材质 Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

	if (FlipbookSize != nullptr)
		*FlipbookSize = std::move(Parms.FlipbookSize);
}


SDK_NAMESPACE_END
