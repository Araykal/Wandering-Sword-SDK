#pragma once



// Package: BPVE_SectLikingListCell

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_SectLikingListCell.BPVE_SectLikingListCell_C
// 0x0010 (0x03D8 - 0x03C8)
class UBPVE_SectLikingListCell_C final : public UTeam_Property_SectLikingCell
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        NeoUIImageBase_103;                                // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_SectLikingListCell(int32 EntryPoint);
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_SectLikingListCell_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_SectLikingListCell_C")
	}
	static class UBPVE_SectLikingListCell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_SectLikingListCell_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_SectLikingListCell_C;

SDK_NAMESPACE_END
