#pragma once



// Package: BPVE_GHC_Tip0

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_GHC_Tip0.BPVE_GHC_Tip0_C
// 0x0028 (0x02B8 - 0x0290)
class UBPVE_GHC_Tip0_C final : public UJHNeoUI_GHC_NPCTip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIButtonBase*                       BTN_Exit;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_55;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_167;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_204;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_GHC_Tip0(int32 EntryPoint);
	void BndEvt__BPVE_GHC_Tip0_BTN_EXIT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_GHC_Tip0_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_GHC_Tip0_C")
	}
	static class UBPVE_GHC_Tip0_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_GHC_Tip0_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_GHC_Tip0_C;

SDK_NAMESPACE_END
