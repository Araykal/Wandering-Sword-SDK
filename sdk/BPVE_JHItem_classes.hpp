#pragma once



// Package: BPVE_JHItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHItem.BPVE_JHItem_C
// 0x0008 (0x02F8 - 0x02F0)
class UBPVE_JHItem_C final : public UJHItemDisplayElement
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPVE_JHItem(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHItem_C")
	}
	static class UBPVE_JHItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHItem_C;

SDK_NAMESPACE_END
