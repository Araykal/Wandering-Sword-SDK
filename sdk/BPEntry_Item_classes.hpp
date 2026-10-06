#pragma once



// Package: BPEntry_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPEntry_Item.BPEntry_Item_C
// 0x0018 (0x0310 - 0x02F8)
class UBPEntry_Item_C final : public UJHNeoUIItemEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_JHItem;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPEntry_Item(int32 EntryPoint);
	void BndEvt__BPEntry_Item_BTN_JHItem_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__BPEntry_Item_BTN_JHItem_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void Construct();
	class UWidget* Get_ItemDisplay_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPEntry_Item_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPEntry_Item_C")
	}
	static class UBPEntry_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPEntry_Item_C>();
	}
};
DUMPER7_ASSERTS_UBPEntry_Item_C;

SDK_NAMESPACE_END
