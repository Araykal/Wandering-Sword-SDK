#pragma once



// Package: BPVE_BattleBuffCell

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_BattleBuffCell.BPVE_BattleBuffCell_C
// 0x0018 (0x03B0 - 0x0398)
class UBPVE_BattleBuffCell_C final : public UJHNeoUIBattleBuffCell
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_35;                           // 0x03A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_142;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_BattleBuffCell(int32 EntryPoint);
	void EVT_RenderView();
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_BattleBuffCell_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_BattleBuffCell_C")
	}
	static class UBPVE_BattleBuffCell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_BattleBuffCell_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_BattleBuffCell_C;

SDK_NAMESPACE_END
