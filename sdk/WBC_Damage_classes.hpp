#pragma once



// Package: WBC_Damage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass WBC_Damage.WBC_Damage_C
// 0x0010 (0x05A0 - 0x0590)
class UWBC_Damage_C final : public UDamageWidgetComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0590(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBC_Damage(int32 EntryPoint);
	void HandleShowSpecialImage(ESpecialWordType SpecialDamageType);
	void HandleShowDamageAndTypes(float Damage, int32 DamageTypes);
	void HandleShowMana(float InValue);
	void HandleShowDamage(float Damage, EDamageType DamageType);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBC_Damage_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBC_Damage_C")
	}
	static class UWBC_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBC_Damage_C>();
	}
};
DUMPER7_ASSERTS_UWBC_Damage_C;

SDK_NAMESPACE_END
