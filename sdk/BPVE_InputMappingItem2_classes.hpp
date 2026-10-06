#pragma once



// Package: BPVE_InputMappingItem2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_InputMappingItem2.BPVE_InputMappingItem2_C
// 0x0020 (0x03A8 - 0x0388)
class UBPVE_InputMappingItem2_C final : public UJHNeoUIInputMappingItem2
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       EditingAnim;                                       // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UJHGPCBtn_C*                            BTN_Config_InputLine;                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIBorderBase*                       NeoUIBorderBase_61;                                // 0x03A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_InputMappingItem2(int32 EntryPoint);
	void EVT_PlayEditingAnim();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_InputMappingItem2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_InputMappingItem2_C")
	}
	static class UBPVE_InputMappingItem2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_InputMappingItem2_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_InputMappingItem2_C;

SDK_NAMESPACE_END
