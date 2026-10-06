#pragma once



// Package: BPCMP_JHAlert_Simple

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_JHAlert_Simple.BPCMP_JHAlert_Simple_C
// 0x0040 (0x0390 - 0x0350)
class UBPCMP_JHAlert_Simple_C final : public UJHNeoUIAlertContentSimple
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPCMP_AlertBTN_GamepadTip_C*           AlertBTN_GamepadTip;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  CT_GAA;                                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAADisplay_Bottom;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       GAADisplay_Top;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHCommon_Btn_Pure_C*                   GP_Btn1;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHCommon_Btn_Pure_C*                   GP_Btn2;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_83;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPCMP_JHAlert_Simple(int32 EntryPoint);
	void EVT_SyncWithGlobalInputMode();
	void EVT_Gamepad_ExitConfirmMode();
	void EVT_Gamepad_EnterConfirmMode();
	void BndEvt__BPCMP_JHAlert_Simple_GP_Btn2_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature();
	void BndEvt__BPCMP_JHAlert_Simple_GP_Btn1_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature();
	void EVT_ChangeBtnMode(bool isTwo);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_JHAlert_Simple_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_JHAlert_Simple_C")
	}
	static class UBPCMP_JHAlert_Simple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_JHAlert_Simple_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_JHAlert_Simple_C;

SDK_NAMESPACE_END
