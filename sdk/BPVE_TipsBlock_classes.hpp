#pragma once



// Package: BPVE_TipsBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_TipsBlock.BPVE_TipsBlock_C
// 0x0010 (0x03F8 - 0x03E8)
class UBPVE_TipsBlock_C final : public UJHNeoUITipsBlock
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIVerticalBox*                      VB_Content;                                        // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_TipsBlock(int32 EntryPoint);
	void EVT_HideHeader();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_TipsBlock_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_TipsBlock_C")
	}
	static class UBPVE_TipsBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_TipsBlock_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_TipsBlock_C;

SDK_NAMESPACE_END
