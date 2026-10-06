#pragma once



// Package: VE_JHVolumeAdjustPanel2

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass VE_JHVolumeAdjustPanel2.VE_JHVolumeAdjustPanel2_C
// 0x0020 (0x03B0 - 0x0390)
class UVE_JHVolumeAdjustPanel2_C final : public UJHNeoUIGameConfigPanel2
{
public:
	class UNeoUIImageBase*                        IMG_TitleBG;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIBorderBase*                       NeoUIBorderBase_57;                                // 0x0398(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        SlotContents;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsCollapsed;                                       // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("VE_JHVolumeAdjustPanel2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VE_JHVolumeAdjustPanel2_C")
	}
	static class UVE_JHVolumeAdjustPanel2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVE_JHVolumeAdjustPanel2_C>();
	}
};
DUMPER7_ASSERTS_UVE_JHVolumeAdjustPanel2_C;

SDK_NAMESPACE_END
