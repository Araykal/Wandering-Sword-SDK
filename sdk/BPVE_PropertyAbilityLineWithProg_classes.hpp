#pragma once



// Package: BPVE_PropertyAbilityLineWithProg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_PropertyAbilityLineWithProg.BPVE_PropertyAbilityLineWithProg_C
// 0x0040 (0x04A0 - 0x0460)
class UBPVE_PropertyAbilityLineWithProg_C final : public UJHNeoUIPropertyLineWithProgress
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_PropertyAbilityLineWithProg;                   // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0470(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIBorderBase*                       NeoUIBorderBase_79;                                // 0x0480(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_163;                                // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              ItemClicked;                                       // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPVE_PropertyAbilityLineWithProg(int32 EntryPoint);
	void BndEvt__BPVE_PropertyAbilityLineWithProg_BTN_PropertyAbilityLineWithProg_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void Construct();
	class UWidget* Get_Tool_Tip_Widget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_PropertyAbilityLineWithProg_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_PropertyAbilityLineWithProg_C")
	}
	static class UBPVE_PropertyAbilityLineWithProg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_PropertyAbilityLineWithProg_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_PropertyAbilityLineWithProg_C;

SDK_NAMESPACE_END
