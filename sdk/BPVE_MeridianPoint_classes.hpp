#pragma once



// Package: BPVE_MeridianPoint

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_MeridianPoint.BPVE_MeridianPoint_C
// 0x0018 (0x02F0 - 0x02D8)
class UBPVE_MeridianPoint_C final : public UNeoUIVisualElementBase
{
public:
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_39;                           // 0x02D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_42;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Count;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void UpdateNumber(int32 Count);
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_MeridianPoint_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_MeridianPoint_C")
	}
	static class UBPVE_MeridianPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_MeridianPoint_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_MeridianPoint_C;

SDK_NAMESPACE_END
