#pragma once



// Package: BPVE_Prime_ModuleTitleBar

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_Prime_ModuleTitleBar.BPVE_Prime_ModuleTitleBar_C
// 0x0008 (0x0390 - 0x0388)
class UBPVE_Prime_ModuleTitleBar_C final : public UNeoUI1Img1TxtComp
{
public:
	class UImage*                                 Image_132;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_Prime_ModuleTitleBar_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_Prime_ModuleTitleBar_C")
	}
	static class UBPVE_Prime_ModuleTitleBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_Prime_ModuleTitleBar_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_Prime_ModuleTitleBar_C;

SDK_NAMESPACE_END
