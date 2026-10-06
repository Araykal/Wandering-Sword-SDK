#pragma once



// Package: BP_JHConfigTabBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BP_JHConfigTabBtn.BP_JHConfigTabBtn_C
// 0x0018 (0x03C8 - 0x03B0)
class UBP_JHConfigTabBtn_C final : public UJHNeoUIConfigV2TabBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_ConfigTabBtn;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_JHConfigTabBtn(int32 EntryPoint);
	void EVT_SyncWithGlobalInputMode();
	void BndEvt__BP_JHConfigTabBtn_BTN_ConfigTabBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void EVT_UpdateActiveStatus(bool IsActive);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHConfigTabBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHConfigTabBtn_C")
	}
	static class UBP_JHConfigTabBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JHConfigTabBtn_C>();
	}
};
DUMPER7_ASSERTS_UBP_JHConfigTabBtn_C;

SDK_NAMESPACE_END
