#pragma once



// Package: BPVE_JHTips_SpellBlock3_Wide

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHTips_SpellBlock3_Wide.BPVE_JHTips_SpellBlock3_Wide_C
// 0x0008 (0x0398 - 0x0390)
class UBPVE_JHTips_SpellBlock3_Wide_C final : public UJHNeoUITipsBlock_Spell
{
public:
	class UNeoUICanvasPanelBase*                  CT_Header;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void HideHeader();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHTips_SpellBlock3_Wide_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHTips_SpellBlock3_Wide_C")
	}
	static class UBPVE_JHTips_SpellBlock3_Wide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHTips_SpellBlock3_Wide_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHTips_SpellBlock3_Wide_C;

SDK_NAMESPACE_END
