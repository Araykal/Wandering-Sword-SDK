#pragma once



// Package: UWBP_Tip2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass UWBP_Tip2.UWBP_Tip2_C
// 0x0058 (0x02B8 - 0x0260)
class UUWBP_Tip2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUWBP_Tip_C*                            UWBP_Tip;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUWBP_Tip_C*                            UWBP_Tip_1;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUWBP_Tip_C*                            UWBP_Tip_2;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUWBP_Tip_C*                            UWBP_Tip_3;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   In_Tool_Tip_Text;                                  // 0x0288(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(int32 BtnIndex)> TipItemClicked;                                   // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_MirrorNew_C*                        BP_Mirror;                                         // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UWBP_Tip2(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void RotationStart();
	void RotationEnd();
	void BndEvt__UWBP_Tip2_UWBP_Tip_3_K2Node_ComponentBoundEvent_3_TipItemClicked__DelegateSignature();
	void BndEvt__UWBP_Tip2_UWBP_Tip_1_K2Node_ComponentBoundEvent_0_TipItemClicked__DelegateSignature();
	void BndEvt__UWBP_Tip2_UWBP_Tip_K2Node_ComponentBoundEvent_1_TipItemClicked__DelegateSignature();
	void BndEvt__UWBP_Tip2_UWBP_Tip_2_K2Node_ComponentBoundEvent_2_TipItemClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("UWBP_Tip2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"UWBP_Tip2_C")
	}
	static class UUWBP_Tip2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUWBP_Tip2_C>();
	}
};
DUMPER7_ASSERTS_UUWBP_Tip2_C;

SDK_NAMESPACE_END
