#pragma once



// Package: BPVE_EAC_AutoBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_EAC_AutoBtn.BPVE_EAC_AutoBtn_C
// 0x0038 (0x0430 - 0x03F8)
class UBPVE_EAC_AutoBtn_C final : public UJHNeoUIEstateArenaAutoBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTA_EAC_AutoMode;                                  // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           NormalClr;                                         // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DisableClr;                                        // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_EAC_AutoBtn(int32 EntryPoint);
	void EVT_ChangeValidStatus(bool IsValid);
	void BndEvt__BPVE_EAC_AutoBtn_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_EAC_AutoBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_EAC_AutoBtn_C")
	}
	static class UBPVE_EAC_AutoBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_EAC_AutoBtn_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_EAC_AutoBtn_C;

SDK_NAMESPACE_END
