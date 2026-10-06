#pragma once



// Package: BPVE_EAC_Ele

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_EAC_Ele.BPVE_EAC_Ele_C
// 0x0018 (0x0328 - 0x0310)
class UBPVE_EAC_Ele_C final : public UJHNeoUIEstateArenaConfigElement
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_EAC_Ele;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_EAC_Ele(int32 EntryPoint);
	void BndEvt__BPVE_EAC_Ele_BTN_EAC_Ele_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonDoubleClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__BPVE_EAC_Ele_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_EAC_Ele_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_EAC_Ele_C")
	}
	static class UBPVE_EAC_Ele_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_EAC_Ele_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_EAC_Ele_C;

SDK_NAMESPACE_END
