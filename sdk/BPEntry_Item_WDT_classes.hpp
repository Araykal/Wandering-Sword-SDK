#pragma once



// Package: BPEntry_Item_WDT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPEntry_Item_WDT.BPEntry_Item_WDT_C
// 0x0020 (0x0328 - 0x0308)
class UBPEntry_Item_WDT_C : public UJHNeoUIItemEntryWDT
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_JHItem;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PreciseType;                                       // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShowTipsIntFlag;                                   // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPEntry_Item_WDT(int32 EntryPoint);
	void BndEvt__BPEntry_Item_WDT_BTN_JHItem_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__BPEntry_Item_WDT_BTN_JHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	class UWidget* Get_Item_Display_Tool_Tip_Widget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPEntry_Item_WDT_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPEntry_Item_WDT_C")
	}
	static class UBPEntry_Item_WDT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPEntry_Item_WDT_C>();
	}
};
DUMPER7_ASSERTS_UBPEntry_Item_WDT_C;

SDK_NAMESPACE_END
