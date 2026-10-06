#pragma once



// Package: BPCMP_TowerItem

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_TowerItem.BPCMP_TowerItem_C
// 0x0000 (0x0288 - 0x0288)
class UBPCMP_TowerItem_C final : public UJHNeoUIBattleTowerItem
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_TowerItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_TowerItem_C")
	}
	static class UBPCMP_TowerItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_TowerItem_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_TowerItem_C;

SDK_NAMESPACE_END
