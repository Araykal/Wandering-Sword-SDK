#pragma once



// Package: BTN_NGP_SkillStyle

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BTN_NGP_SkillStyle.BTN_NGP_SkillStyle_C
// 0x0008 (0x0310 - 0x0308)
class UBTN_NGP_SkillStyle_C final : public UJHNeoUINGP_SkillTypeBtn
{
public:
	class UNeoUIBorderBase*                       NeoUIBorderBase_41;                                // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BTN_NGP_SkillStyle_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BTN_NGP_SkillStyle_C")
	}
	static class UBTN_NGP_SkillStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTN_NGP_SkillStyle_C>();
	}
};
DUMPER7_ASSERTS_UBTN_NGP_SkillStyle_C;

SDK_NAMESPACE_END
