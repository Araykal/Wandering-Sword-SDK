#pragma once



// Package: BPVE_HUD_Quest

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_HUD_Quest.BPVE_HUD_Quest_C
// 0x0000 (0x02F8 - 0x02F8)
class UBPVE_HUD_Quest_C final : public UJHNeoUIHUDQuestVE
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_HUD_Quest_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_HUD_Quest_C")
	}
	static class UBPVE_HUD_Quest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_HUD_Quest_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_HUD_Quest_C;

SDK_NAMESPACE_END
