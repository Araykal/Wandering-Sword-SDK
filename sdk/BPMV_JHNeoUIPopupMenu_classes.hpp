#pragma once



// Package: BPMV_JHNeoUIPopupMenu

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHNeoUIPopupMenu.BPMV_JHNeoUIPopupMenu_C
// 0x0008 (0x03D8 - 0x03D0)
class UBPMV_JHNeoUIPopupMenu_C final : public UJHNeoUIPopupMenuView
{
public:
	class UNeoUIBorderBase*                       NeoUIBorderBase_68;                                // 0x03D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHNeoUIPopupMenu_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHNeoUIPopupMenu_C")
	}
	static class UBPMV_JHNeoUIPopupMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHNeoUIPopupMenu_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHNeoUIPopupMenu_C;

SDK_NAMESPACE_END
