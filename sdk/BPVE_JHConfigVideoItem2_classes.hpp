#pragma once



// Package: BPVE_JHConfigVideoItem2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHConfigVideoItem2.BPVE_JHConfigVideoItem2_C
// 0x0010 (0x0318 - 0x0308)
class UBPVE_JHConfigVideoItem2_C final : public UJHCondigVideoItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        IMG_Icon;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHConfigVideoItem2(int32 EntryPoint);
	void BndEvt__BPVE_JHConfigVideoItem2_CB_Main_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Construct();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHConfigVideoItem2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHConfigVideoItem2_C")
	}
	static class UBPVE_JHConfigVideoItem2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHConfigVideoItem2_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHConfigVideoItem2_C;

SDK_NAMESPACE_END
