#pragma once



// Package: BPVE_BattleSpellColumn_XinFa

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_BattleSpellColumn_XinFa.BPVE_BattleSpellColumn_XinFa_C
// 0x0028 (0x0338 - 0x0310)
class UBPVE_BattleSpellColumn_XinFa_C final : public UBattleSpellDisplayColumn_XinFa
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUICanvasPanelBase*                  CT_Top;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_158;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_132;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                边界;                                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_BattleSpellColumn_XinFa(int32 EntryPoint);
	void BndEvt__BPVE_BattleSpellColumn_XinFa_Cell5_K2Node_ComponentBoundEvent_6_CellClick__DelegateSignature();
	void BndEvt__BPVE_BattleSpellColumn_XinFa_Cell4_K2Node_ComponentBoundEvent_5_CellClick__DelegateSignature();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void EVT_SetupHierarchy();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void BndEvt__BPVE_BattleSpellColumn_Cell3_K2Node_ComponentBoundEvent_4_CellClick__DelegateSignature();
	void BndEvt__BPVE_BattleSpellColumn_Cell2_K2Node_ComponentBoundEvent_3_CellClick__DelegateSignature();
	void BndEvt__BPVE_BattleSpellColumn_Cell1_K2Node_ComponentBoundEvent_2_CellClick__DelegateSignature();
	void BndEvt__BPVE_BattleSpellColumn_Cell0_K2Node_ComponentBoundEvent_1_CellClick__DelegateSignature();
	void BndEvt__BPVE_BattleSpellColumn_Cell0_K2Node_ComponentBoundEvent_0_CellMouseEnter__DelegateSignature();
	class UWidget* Navi_GotoLeft(EUINavigation Navigation_0);
	class UWidget* Navi_GotoRight(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_BattleSpellColumn_XinFa_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_BattleSpellColumn_XinFa_C")
	}
	static class UBPVE_BattleSpellColumn_XinFa_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_BattleSpellColumn_XinFa_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_BattleSpellColumn_XinFa_C;

SDK_NAMESPACE_END
