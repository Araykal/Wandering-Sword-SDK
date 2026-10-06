#pragma once



// Package: BPVE_JHTips_NGPInheritanceItem

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHTips_NGPInheritanceItem.BPVE_JHTips_NGPInheritanceItem_C
// 0x0010 (0x0398 - 0x0388)
class UBPVE_JHTips_NGPInheritanceItem_C final : public UNeoUI1Img1TxtComp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        NeoUIImageBase_110;                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHTips_NGPInheritanceItem(int32 EntryPoint);
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHTips_NGPInheritanceItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHTips_NGPInheritanceItem_C")
	}
	static class UBPVE_JHTips_NGPInheritanceItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHTips_NGPInheritanceItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHTips_NGPInheritanceItem_C;

SDK_NAMESPACE_END
