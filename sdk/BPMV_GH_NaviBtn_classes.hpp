#pragma once



// Package: BPMV_GH_NaviBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_GH_NaviBtn.BPMV_GH_NaviBtn_C
// 0x0018 (0x0410 - 0x03F8)
class UBPMV_GH_NaviBtn_C final : public UJHNeoUIGamingHistoryNaviBarCell
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            JHGPCBtn;                                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_GH_NaviBtn(int32 EntryPoint);
	void BndEvt__BPMV_GH_NaviBtn_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_GH_NaviBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_GH_NaviBtn_C")
	}
	static class UBPMV_GH_NaviBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_GH_NaviBtn_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_GH_NaviBtn_C;

SDK_NAMESPACE_END
