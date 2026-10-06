#pragma once



// Package: BPVE_Prime_Team_Property_NaviBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_Prime_Team_Property_NaviBtn.BPVE_Prime_Team_Property_NaviBtn_C
// 0x0020 (0x05A0 - 0x0580)
class UBPVE_Prime_Team_Property_NaviBtn_C final : public UJHPrimeTeamProppertyNaviBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0580(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        IMG_A_1;                                           // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_57;                                 // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_Prime_Team_Property_NaviBtn(int32 EntryPoint);
	void BndEvt__BPVE_Prime_Team_Property_NaviBtn_Btn_PrimeTeamPropertyNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0);
	void BndEvt__BPVE_Prime_Team_Property_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_Prime_Team_Property_NaviBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_Prime_Team_Property_NaviBtn_C")
	}
	static class UBPVE_Prime_Team_Property_NaviBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_Prime_Team_Property_NaviBtn_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_Prime_Team_Property_NaviBtn_C;

SDK_NAMESPACE_END
