#pragma once



// Package: BPCMP_TeamMountPetBtn

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_TeamMountPetBtn.BPCMP_TeamMountPetBtn_C
// 0x0030 (0x05A8 - 0x0578)
class UBPCMP_TeamMountPetBtn_C final : public UNeoUI1Btn1TxtComp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_TeamBottomBtn;                                 // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHNeoUISeqPlayer_C*                    SeqPlayer;                                         // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BtnClick;                                          // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPCMP_TeamMountPetBtn(int32 EntryPoint);
	void BndEvt__BPCMP_Team_BottomBtn_BTN_TeamBottomBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn_0);
	void BndEvt__BPCMP_Team_BottomBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_TeamMountPetBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_TeamMountPetBtn_C")
	}
	static class UBPCMP_TeamMountPetBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_TeamMountPetBtn_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_TeamMountPetBtn_C;

SDK_NAMESPACE_END
