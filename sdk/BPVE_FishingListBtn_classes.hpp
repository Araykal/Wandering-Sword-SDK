#pragma once



// Package: BPVE_FishingListBtn

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_FishingListBtn.BPVE_FishingListBtn_C
// 0x0018 (0x0410 - 0x03F8)
class UBPVE_FishingListBtn_C final : public UNeoUI2ImgComp
{
public:
	class UNeoUIBorderBase*                       NeoUIBorderBase_45;                                // 0x03F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BtnClick;                                          // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void GotoNormalStatus();
	void GotoActiveStatus();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_FishingListBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_FishingListBtn_C")
	}
	static class UBPVE_FishingListBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_FishingListBtn_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_FishingListBtn_C;

SDK_NAMESPACE_END
