#pragma once



// Package: BPVE_JHTips_NGPInheritance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHTips_NGPInheritance.BPVE_JHTips_NGPInheritance_C
// 0x0018 (0x0318 - 0x0300)
class UBPVE_JHTips_NGPInheritance_C final : public UJHNeoUITipsInheritanceVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        NeoUIImageBase_50;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Title;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHTips_NGPInheritance(int32 EntryPoint);
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHTips_NGPInheritance_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHTips_NGPInheritance_C")
	}
	static class UBPVE_JHTips_NGPInheritance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHTips_NGPInheritance_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHTips_NGPInheritance_C;

SDK_NAMESPACE_END
