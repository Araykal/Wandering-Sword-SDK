#pragma once



// Package: BPVE_DialogModuleOption

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_DialogModuleOption.BPVE_DialogModuleOption_C
// 0x0040 (0x0320 - 0x02E0)
class UBPVE_DialogModuleOption_C final : public UDialogModuleListVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        NeoUIImageBase_114;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_178;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_DialogModuleOptionElement_C*      VE_Op1;                                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_DialogModuleOptionElement_C*      VE_Op2;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_DialogModuleOptionElement_C*      VE_Op3;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_DialogModuleOptionElement_C*      VE_Op4;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_DialogModuleOptionElement_C*      VE_Op5;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_DialogModuleOption(int32 EntryPoint);
	void EVT_FocusDefaultOption();
	void EVT_ShowOption();
	void EVT_RenderView();
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_DialogModuleOption_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_DialogModuleOption_C")
	}
	static class UBPVE_DialogModuleOption_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_DialogModuleOption_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_DialogModuleOption_C;

SDK_NAMESPACE_END
