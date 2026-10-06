#pragma once



// Package: BPVE_MeridianPropertyLine

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_MeridianPropertyLine.BPVE_MeridianPropertyLine_C
// 0x0008 (0x0460 - 0x0458)
class UBPVE_MeridianPropertyLine_C final : public UMeridianPropertyLine
{
public:
	class UNeoUIImageBase*                        NeoUIImageBase_94;                                 // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_MeridianPropertyLine_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_MeridianPropertyLine_C")
	}
	static class UBPVE_MeridianPropertyLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_MeridianPropertyLine_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_MeridianPropertyLine_C;

SDK_NAMESPACE_END
