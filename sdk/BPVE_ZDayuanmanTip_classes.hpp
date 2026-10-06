#pragma once



// Package: BPVE_ZDayuanmanTip

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_ZDayuanmanTip.BPVE_ZDayuanmanTip_C
// 0x0028 (0x0300 - 0x02D8)
class UBPVE_ZDayuanmanTip_C final : public UNeoUIVisualElementBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHNeoUISeqPlayer_C*                    IMG_DaYuanMan;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Icon;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_RongHuiGuanTong;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_134;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_ZDayuanmanTip(int32 EntryPoint);
	void Construct();
	void ChangeImage(const struct FSlateBrush& NewParam);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_ZDayuanmanTip_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_ZDayuanmanTip_C")
	}
	static class UBPVE_ZDayuanmanTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_ZDayuanmanTip_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_ZDayuanmanTip_C;

SDK_NAMESPACE_END
