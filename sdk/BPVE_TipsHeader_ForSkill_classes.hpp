#pragma once



// Package: BPVE_TipsHeader_ForSkill

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_TipsHeader_ForSkill.BPVE_TipsHeader_ForSkill_C
// 0x0000 (0x0288 - 0x0288)
class UBPVE_TipsHeader_ForSkill_C final : public UJHNeoUITipsCommonHeader
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_TipsHeader_ForSkill_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_TipsHeader_ForSkill_C")
	}
	static class UBPVE_TipsHeader_ForSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_TipsHeader_ForSkill_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_TipsHeader_ForSkill_C;

SDK_NAMESPACE_END
