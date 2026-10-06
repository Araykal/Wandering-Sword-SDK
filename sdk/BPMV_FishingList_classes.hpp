#pragma once



// Package: BPMV_FishingList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_FishingList.BPMV_FishingList_C
// 0x0020 (0x03F0 - 0x03D0)
class UBPMV_FishingList_C final : public UJHneoUIFishingListView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        GlobalBG;                                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_GamepadTip;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_82;                                 // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_FishingList(int32 EntryPoint);
	void EVT_VisualShow();
	void EVT_SyncWithGlobalInputMode();
	void EVT_FocusFirst();
	void BndEvt__BPMV_FishingList_Btn2_K2Node_ComponentBoundEvent_2_BtnClick__DelegateSignature();
	void BndEvt__BPMV_FishingList_Btn1_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature();
	void BndEvt__BPMV_FishingList_Btn0_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_FishingList_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_FishingList_C")
	}
	static class UBPMV_FishingList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_FishingList_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_FishingList_C;

SDK_NAMESPACE_END
