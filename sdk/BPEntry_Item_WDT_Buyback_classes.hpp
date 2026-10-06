#pragma once



// Package: BPEntry_Item_WDT_Buyback

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BPEntry_Item_WDT_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPEntry_Item_WDT_Buyback.BPEntry_Item_WDT_Buyback_C
// 0x0008 (0x0330 - 0x0328)
class UBPEntry_Item_WDT_Buyback_C final : public UBPEntry_Item_WDT_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BPEntry_Item_WDT_Buyback_C;         // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPEntry_Item_WDT_Buyback(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPEntry_Item_WDT_Buyback_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPEntry_Item_WDT_Buyback_C")
	}
	static class UBPEntry_Item_WDT_Buyback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPEntry_Item_WDT_Buyback_C>();
	}
};
DUMPER7_ASSERTS_UBPEntry_Item_WDT_Buyback_C;

SDK_NAMESPACE_END
