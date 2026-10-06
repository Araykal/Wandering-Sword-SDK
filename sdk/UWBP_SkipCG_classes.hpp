#pragma once



// Package: UWBP_SkipCG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass UWBP_SkipCG.UWBP_SkipCG_C
// 0x0020 (0x0280 - 0x0260)
class UUWBP_SkipCG_C final : public USkipCGWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_50;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJH_CircularProgressBar_C*              CircularProgressBar;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GamePadKey;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UWBP_SkipCG(int32 EntryPoint);
	void EVT_ResetProgressBar();
	void EVT_StopLongPressAnim();
	void EVT_StartLongPressAnim();
	void OnProgressEnd_Event_0(int32 Param);
	void CustomEvent_0(bool IsGamepadMode);
	void BP_OnShow();
	void BP_OnHide();
	void BndEvt__UWBP_SkipCG_Button_50_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void CheckGamepad();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("UWBP_SkipCG_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"UWBP_SkipCG_C")
	}
	static class UUWBP_SkipCG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUWBP_SkipCG_C>();
	}
};
DUMPER7_ASSERTS_UUWBP_SkipCG_C;

SDK_NAMESPACE_END
