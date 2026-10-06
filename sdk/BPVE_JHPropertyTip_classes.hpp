#pragma once



// Package: BPVE_JHPropertyTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHPropertyTip.BPVE_JHPropertyTip_C
// 0x0028 (0x0310 - 0x02E8)
class UBPVE_JHPropertyTip_C final : public UJHPropertyTip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPVE_TipsHeader_C*                     Header;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_53;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_TipsBlock_C*                      VE_Desc;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHPropertyTip(int32 EntryPoint);
	void EVT_SetupHierarchy();
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHPropertyTip_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHPropertyTip_C")
	}
	static class UBPVE_JHPropertyTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHPropertyTip_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHPropertyTip_C;

SDK_NAMESPACE_END
