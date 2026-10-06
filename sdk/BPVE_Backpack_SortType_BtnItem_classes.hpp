#pragma once



// Package: BPVE_Backpack_SortType_BtnItem

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_Backpack_SortType_BtnItem.BPVE_Backpack_SortType_BtnItem_C
// 0x0008 (0x0580 - 0x0578)
class UBPVE_Backpack_SortType_BtnItem_C final : public UNeoUI1Btn1TxtComp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPVE_Backpack_SortType_BtnItem(int32 EntryPoint);
	void EVT_RenderView();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_Backpack_SortType_BtnItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_Backpack_SortType_BtnItem_C")
	}
	static class UBPVE_Backpack_SortType_BtnItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_Backpack_SortType_BtnItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_Backpack_SortType_BtnItem_C;

SDK_NAMESPACE_END
