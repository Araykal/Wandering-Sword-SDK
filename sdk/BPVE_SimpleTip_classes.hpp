#pragma once



// Package: BPVE_SimpleTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_SimpleTip.BPVE_SimpleTip_C
// 0x0018 (0x0300 - 0x02E8)
class UBPVE_SimpleTip_C final : public UJHSimpleTip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        NeoUIImageBase;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Main;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_SimpleTip(int32 EntryPoint);
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_SimpleTip_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_SimpleTip_C")
	}
	static class UBPVE_SimpleTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_SimpleTip_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_SimpleTip_C;

SDK_NAMESPACE_END
