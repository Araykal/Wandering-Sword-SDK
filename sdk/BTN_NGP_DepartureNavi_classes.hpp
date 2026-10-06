#pragma once



// Package: BTN_NGP_DepartureNavi

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BTN_NGP_DepartureNavi.BTN_NGP_DepartureNavi_C
// 0x0020 (0x03C0 - 0x03A0)
class UBTN_NGP_DepartureNavi_C final : public UJHNeoUINGP_DepartureBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_NGP;                                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIButtonBase*                       BTN_Normal;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTN_NGP_DepartureNavi(int32 EntryPoint);
	void EVT_UpdateActiveStatus_1(bool IsActive);
	void EVT_SyncWithGlobalInputMode();
	void BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BTN_NGP_DepartureNavi_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BTN_NGP_DepartureNavi_C")
	}
	static class UBTN_NGP_DepartureNavi_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTN_NGP_DepartureNavi_C>();
	}
};
DUMPER7_ASSERTS_UBTN_NGP_DepartureNavi_C;

SDK_NAMESPACE_END
