#pragma once



// Package: Widget_Arrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass Widget_Arrow.Widget_Arrow_C
// 0x0510 (0x0770 - 0x0260)
class UWidget_Arrow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                Button_100;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         WidgetParam;                                       // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALittleGameLuoShu*                      BP_LuoShu;                                         // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                           Normal;                                            // 0x0280(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           NewVar_0;                                          // 0x04F8(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Widget_Arrow(int32 EntryPoint);
	void BndEvt__Widget_Arrow_Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void InitWidget(int32 ParamFlag);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetButtonStyle(int32 Style);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Widget_Arrow_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Widget_Arrow_C")
	}
	static class UWidget_Arrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWidget_Arrow_C>();
	}
};
DUMPER7_ASSERTS_UWidget_Arrow_C;

SDK_NAMESPACE_END
