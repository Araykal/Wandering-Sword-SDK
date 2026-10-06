#pragma once



// Package: BPCMP_BulkListPanel

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_BulkListPanel.BPCMP_BulkListPanel_C
// 0x0008 (0x0288 - 0x0280)
class UBPCMP_BulkListPanel_C final : public UBulkSelectionListPanel
{
public:
	class UNeoUIImageBase*                        NeoUIImageBase_69;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_BulkListPanel_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_BulkListPanel_C")
	}
	static class UBPCMP_BulkListPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_BulkListPanel_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_BulkListPanel_C;

SDK_NAMESPACE_END
