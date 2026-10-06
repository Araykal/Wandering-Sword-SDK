#pragma once



// Package: BPVE_TipsBlockAuto

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_TipsBlockAuto.BPVE_TipsBlockAuto_C
// 0x0008 (0x03F0 - 0x03E8)
class UBPVE_TipsBlockAuto_C final : public UJHNeoUITipsBlock
{
public:
	class UNeoUIImageBase*                        IMG_EquipArmor;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_TipsBlockAuto_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_TipsBlockAuto_C")
	}
	static class UBPVE_TipsBlockAuto_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_TipsBlockAuto_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_TipsBlockAuto_C;

SDK_NAMESPACE_END
