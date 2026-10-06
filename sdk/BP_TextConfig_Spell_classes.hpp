#pragma once



// Package: BP_TextConfig_Spell

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_TextConfig_Spell.BP_TextConfig_Spell_C
// 0x0000 (0x0028 - 0x0028)
class UBP_TextConfig_Spell_C final : public UJHNeoUITextConfig_Spell
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_TextConfig_Spell_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_TextConfig_Spell_C")
	}
	static class UBP_TextConfig_Spell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TextConfig_Spell_C>();
	}
};
DUMPER7_ASSERTS_UBP_TextConfig_Spell_C;

SDK_NAMESPACE_END
