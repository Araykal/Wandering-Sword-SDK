#pragma once



// Package: BPVE_JHConfig_WithLock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHConfig_WithLock.BPVE_JHConfig_WithLock_C
// 0x0020 (0x0328 - 0x0308)
class UBPVE_JHConfig_WithLock_C final : public UJHNeoUIConfigItem_WithLock
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIBorderBase*                       BTN_Lock;                                          // 0x0310(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Locked;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Unlocked;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHConfig_WithLock(int32 EntryPoint);
	void BndEvt__BPVE_JHConfig_WithLock_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void EVT_UpdateLockStatus(bool IsLocked);
	void Construct();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHConfig_WithLock_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHConfig_WithLock_C")
	}
	static class UBPVE_JHConfig_WithLock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHConfig_WithLock_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHConfig_WithLock_C;

SDK_NAMESPACE_END
