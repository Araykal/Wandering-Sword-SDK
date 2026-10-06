#pragma once



// Package: BPVE_InputMappingPanel2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_InputMappingPanel2.BPVE_InputMappingPanel2_C
// 0x0020 (0x03D0 - 0x03B0)
class UBPVE_InputMappingPanel2_C final : public UJHNeoUIConfig_InputMappingPanel2
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        IMG_TitleBG;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIBorderBase*                       NeoUIBorderBase_57;                                // 0x03C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsCollapsed;                                       // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BPVE_InputMappingPanel2(int32 EntryPoint);
	void Construct();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_InputMappingPanel2_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_InputMappingPanel2_C")
	}
	static class UBPVE_InputMappingPanel2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_InputMappingPanel2_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_InputMappingPanel2_C;

SDK_NAMESPACE_END
