#pragma once



// Package: BPMV_GameOver

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_GameOver.BPMV_GameOver_C
// 0x0030 (0x03E8 - 0x03B8)
class UBPMV_GameOver_C final : public UJHNeoUIGameOverView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIButtonBase*                       NeoUIButtonBase_127;                               // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_77;                                 // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Title;                                         // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              GameOverCallback;                                  // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPMV_GameOver(int32 EntryPoint);
	void BndEvt__BPMV_GameOver_NeoUIButtonBase_127_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_GameOver_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_GameOver_C")
	}
	static class UBPMV_GameOver_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_GameOver_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_GameOver_C;

SDK_NAMESPACE_END
