#pragma once



// Package: BPVE_TutorialContent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_TutorialContent.BPVE_TutorialContent_C
// 0x0030 (0x0330 - 0x0300)
class UBPVE_TutorialContent_C final : public UJHNeoUITutorialContentVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PreAnim;                                           // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NextAnim;                                          // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNeoUIImageBase*                        Navi_Next;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        Navi_Pre;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Cursor;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_TutorialContent(int32 EntryPoint);
	void SequenceEvent_0();
	void EVT_PlayPreviousAnim();
	void EVT_PlayNextAnim();
	void EVT_UpdateContentCursor();
	void SequenceEvent_1();
	struct FEventReply On_Navi_Next_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply On_Navi_Pre_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SequenceEvent__ENTRYPOINTBPVE_TutorialContent_0();
	void SequenceEvent__ENTRYPOINTBPVE_TutorialContent_1();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_TutorialContent_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_TutorialContent_C")
	}
	static class UBPVE_TutorialContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_TutorialContent_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_TutorialContent_C;

SDK_NAMESPACE_END
