#pragma once



// Package: WBC_Damage

#include "Basic.hpp"

#include "WBC_Damage_classes.hpp"
#include "WBC_Damage_parameters.hpp"


SDK_NAMESPACE_START

// Function WBC_Damage.WBC_Damage_C.ExecuteUbergraph_WBC_Damage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBC_Damage_C::ExecuteUbergraph_WBC_Damage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBC_Damage_C", "ExecuteUbergraph_WBC_Damage");

	Params::WBC_Damage_C_ExecuteUbergraph_WBC_Damage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBC_Damage.WBC_Damage_C.HandleShowSpecialImage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESpecialWordType                        SpecialDamageType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBC_Damage_C::HandleShowSpecialImage(ESpecialWordType SpecialDamageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBC_Damage_C", "HandleShowSpecialImage");

	Params::WBC_Damage_C_HandleShowSpecialImage Parms{};

	Parms.SpecialDamageType = SpecialDamageType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBC_Damage.WBC_Damage_C.HandleShowDamageAndTypes
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DamageTypes                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBC_Damage_C::HandleShowDamageAndTypes(float Damage, int32 DamageTypes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBC_Damage_C", "HandleShowDamageAndTypes");

	Params::WBC_Damage_C_HandleShowDamageAndTypes Parms{};

	Parms.Damage = Damage;
	Parms.DamageTypes = DamageTypes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBC_Damage.WBC_Damage_C.HandleShowMana
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBC_Damage_C::HandleShowMana(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBC_Damage_C", "HandleShowMana");

	Params::WBC_Damage_C_HandleShowMana Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBC_Damage.WBC_Damage_C.HandleShowDamage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBC_Damage_C::HandleShowDamage(float Damage, EDamageType DamageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBC_Damage_C", "HandleShowDamage");

	Params::WBC_Damage_C_HandleShowDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBC_Damage.WBC_Damage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UWBC_Damage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBC_Damage_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


SDK_NAMESPACE_END
