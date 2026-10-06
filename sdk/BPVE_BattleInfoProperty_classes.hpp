#pragma once



// Package: BPVE_BattleInfoProperty

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_BattleInfoProperty.BPVE_BattleInfoProperty_C
// 0x0008 (0x0398 - 0x0390)
class UBPVE_BattleInfoProperty_C final : public UJHNeoUIBattleInfoPropertyLine
{
public:
	class UNeoUIBorderBase*                       NeoUIBorderBase_84;                                // 0x0390(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_BattleInfoProperty_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_BattleInfoProperty_C")
	}
	static class UBPVE_BattleInfoProperty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_BattleInfoProperty_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_BattleInfoProperty_C;

SDK_NAMESPACE_END
