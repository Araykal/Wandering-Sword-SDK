#pragma once



// Package: BPVE_NAVI_BTN_NEXT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_NAVI_BTN_NEXT.BPVE_NAVI_BTN_NEXT_C
// 0x0010 (0x02E8 - 0x02D8)
class UBPVE_NAVI_BTN_NEXT_C final : public UJHMeridianNaviBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIButtonBase*                       NeoUIButtonBase_63;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_NAVI_BTN_NEXT(int32 EntryPoint);
	void BndEvt__BPVE_NAVI_BTN_NEXT_NeoUIButtonBase_63_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EVT_RenderView();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_NAVI_BTN_NEXT_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_NAVI_BTN_NEXT_C")
	}
	static class UBPVE_NAVI_BTN_NEXT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_NAVI_BTN_NEXT_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_NAVI_BTN_NEXT_C;

SDK_NAMESPACE_END
