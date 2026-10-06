#pragma once



// Package: JHGHC_PropRegionElement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHGHC_PropRegionElement.JHGHC_PropRegionElement_C
// 0x0038 (0x03A0 - 0x0368)
class UJHGHC_PropRegionElement_C final : public UJHNeoUIGHC_RegionElement_Item
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_GHC_Prop;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_DLCMark;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_InheritanceMark;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_NPCOnly;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_36;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_JHGHC_PropRegionElement(int32 EntryPoint);
	void EVT_GamepadHideTips(int32 intflag, const class FString& strFlag);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void BndEvt__JHGHC_PropRegionElement_BTN_GHC_Prop_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__JHGHC_PropRegionElement_BTN_GHC_Prop_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonMouseEvt__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHGHC_PropRegionElement_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHGHC_PropRegionElement_C")
	}
	static class UJHGHC_PropRegionElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHGHC_PropRegionElement_C>();
	}
};
DUMPER7_ASSERTS_UJHGHC_PropRegionElement_C;

SDK_NAMESPACE_END
