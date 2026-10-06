#pragma once



// Package: BPMV_Trading_NaviBtn2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_Trading_NaviBtn2.BPMV_Trading_NaviBtn2_C
// 0x0028 (0x05A0 - 0x0578)
class UBPMV_Trading_NaviBtn2_C final : public UJHTradingNaviBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            Btn_TradingNavi;                                   // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BtnMainClick;                                      // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPMV_Trading_NaviBtn2(int32 EntryPoint);
	void BndEvt__BPMV_Trading_NaviBtn2_Btn_TradingNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0);
	void BndEvt__BPVE_Prime_Team_Property_NaviBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ChangeIFAData(const class FString& AreaTag);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_Trading_NaviBtn2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_Trading_NaviBtn2_C")
	}
	static class UBPMV_Trading_NaviBtn2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_Trading_NaviBtn2_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_Trading_NaviBtn2_C;

SDK_NAMESPACE_END
