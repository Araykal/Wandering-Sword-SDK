#pragma once



// Package: BPVE_SkillViewGenreCell

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_SkillViewGenreCell.BPVE_SkillViewGenreCell_C
// 0x0008 (0x0308 - 0x0300)
class UBPVE_SkillViewGenreCell_C final : public UJHNeoUISkillView_GenreVECell
{
public:
	class UNeoUIBorderBase*                       NeoUIBorderBase_65;                                // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_SkillViewGenreCell_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_SkillViewGenreCell_C")
	}
	static class UBPVE_SkillViewGenreCell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_SkillViewGenreCell_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_SkillViewGenreCell_C;

SDK_NAMESPACE_END
