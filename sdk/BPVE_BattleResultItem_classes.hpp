#pragma once



// Package: BPVE_BattleResultItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_BattleResultItem.BPVE_BattleResultItem_C
// 0x0028 (0x0310 - 0x02E8)
class UBPVE_BattleResultItem_C final : public UBattleResultItemElement
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeInAnim;                                        // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UJHGPCBtn_C*                            BTN_BattleWinItem;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_111;                          // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_BattleResultItem(int32 EntryPoint);
	void BndEvt__BPVE_BattleResultItem_BTN_BattleWinItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void EVT_FadeAnim();
	void Construct();
	void Display_Event_0(class UBPCMP_JHItem_C* Display_0);
	class UWidget* GetToolTipWidget_0();
	void SequenceEvent__ENTRYPOINTBPVE_BattleResultItem_0(class UBPCMP_JHItem_C* Display_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_BattleResultItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_BattleResultItem_C")
	}
	static class UBPVE_BattleResultItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_BattleResultItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_BattleResultItem_C;

SDK_NAMESPACE_END
