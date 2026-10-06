#pragma once



// Package: BPMV_FullscreenScroll2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_FullscreenScroll2.BPMV_FullscreenScroll2_C
// 0x0050 (0x0478 - 0x0428)
class UBPMV_FullscreenScroll2_C final : public UJHNeoUIFullscreenScrollView_2
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x0430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TextFadeOutAnim;                                   // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TextFadeInAnim;                                    // 0x0440(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ViewFadeOutAnim;                                   // 0x0448(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ViewFadeInAnim;                                    // 0x0450(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBorderBase*                       ClickArea;                                         // 0x0458(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         FadeInSpeed;                                       // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutSpeed;                                      // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isFadingOut;                                       // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_469[0x3];                                      // 0x0469(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TextFadeInSpeed;                                   // 0x046C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TextFadeOutSpeed;                                  // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TextShowDuration;                                  // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_FullscreenScroll2(int32 EntryPoint);
	void EVT_ModuleFadeOut();
	void EVT_GamepadKey_Close();
	void EVT_ParagraphFadeOut();
	void EVT_ParagraphFadeIn();
	void EVT_ShowModule();
	void SequenceEvent_3();
	void SequenceEvent_2();
	void SequenceEvent_1();
	void SequenceEvent_0();
	struct FEventReply On_ClickArea_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PlayStartAnimation();
	void SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll2_0();
	void SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll2_1();
	void SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll2_2();
	void SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll2_3();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_FullscreenScroll2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_FullscreenScroll2_C")
	}
	static class UBPMV_FullscreenScroll2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_FullscreenScroll2_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_FullscreenScroll2_C;

SDK_NAMESPACE_END
