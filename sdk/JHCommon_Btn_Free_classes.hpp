#pragma once



// Package: JHCommon_Btn_Free

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHCommon_Btn_Free.JHCommon_Btn_Free_C
// 0x0028 (0x05A0 - 0x0578)
class UJHCommon_Btn_Free_C final : public UNeoUI1Btn1TxtComp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            JHGPCBtn;                                          // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BtnClick;                                          // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_JHCommon_Btn_Free(int32 EntryPoint);
	void BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0);
	void BndEvt__JHCommon_Btn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ChangeIFAData(const class FString& Str);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHCommon_Btn_Free_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHCommon_Btn_Free_C")
	}
	static class UJHCommon_Btn_Free_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHCommon_Btn_Free_C>();
	}
};
DUMPER7_ASSERTS_UJHCommon_Btn_Free_C;

SDK_NAMESPACE_END
