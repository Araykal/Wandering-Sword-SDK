#pragma once



// Package: UWBP_Tip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass UWBP_Tip.UWBP_Tip_C
// 0x0058 (0x02B8 - 0x0260)
class UUWBP_Tip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                BTNInteraction;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GamePadKey;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Key;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Label_C*                           WBP_Label_C_252;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   InText;                                            // 0x0288(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ButtonIndex;                                       // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              TipItemClicked;                                    // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_UWBP_Tip(int32 EntryPoint);
	void Construct();
	void BndEvt__UWBP_GatherTip_BTNGather_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetText(const class FText& InText_0);
	void CheckGamepad();
	class FText GetText_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("UWBP_Tip_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"UWBP_Tip_C")
	}
	static class UUWBP_Tip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUWBP_Tip_C>();
	}
};
DUMPER7_ASSERTS_UUWBP_Tip_C;

SDK_NAMESPACE_END
