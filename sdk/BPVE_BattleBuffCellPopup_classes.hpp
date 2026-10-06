#pragma once



// Package: BPVE_BattleBuffCellPopup

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_BattleBuffCellPopup.BPVE_BattleBuffCellPopup_C
// 0x0018 (0x03B0 - 0x0398)
class UBPVE_BattleBuffCellPopup_C final : public UJHNeoUIBattleBuffCell_Popup
{
public:
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_35;                           // 0x0398(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_136;                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_142;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_BattleBuffCellPopup_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_BattleBuffCellPopup_C")
	}
	static class UBPVE_BattleBuffCellPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_BattleBuffCellPopup_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_BattleBuffCellPopup_C;

SDK_NAMESPACE_END
