#pragma once



// Package: BPMV_FullscreenScroll

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_FullscreenScroll.BPMV_FullscreenScroll_C
// 0x0038 (0x0420 - 0x03E8)
class UBPMV_FullscreenScroll_C final : public UJHNeoUIFullscreenScrollView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ViewFadeOutAnim;                                   // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ViewFadeInAnim;                                    // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SpreadText;                                        // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNeoUIBorderBase*                       ClickArea;                                         // 0x0408(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         SpreadTextSpeed;                                   // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeInSpeed;                                       // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutSpeed;                                      // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isFadingOut;                                       // 0x041C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BPMV_FullscreenScroll(int32 EntryPoint);
	void EVT_StartFadeOut();
	void EVT_StartToShow();
	void SequenceEvent_1();
	void SequenceEvent_2();
	void SequenceEvent_0();
	struct FEventReply On_ClickArea_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PlayStartAnimation();
	void SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_0();
	void SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_1();
	void SequenceEvent__ENTRYPOINTBPMV_FullscreenScroll_2();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_FullscreenScroll_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_FullscreenScroll_C")
	}
	static class UBPMV_FullscreenScroll_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_FullscreenScroll_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_FullscreenScroll_C;

SDK_NAMESPACE_END
