#pragma once



// Package: BPVE_EADEle

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_EADEle.BPVE_EADEle_C
// 0x0010 (0x0318 - 0x0308)
class UBPVE_EADEle_C final : public UJHNeoUI_EAD_NPCItem
{
public:
	class UNeoUIImageBase*                        NeoUIImageBase_36;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Count_1;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_EADEle_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_EADEle_C")
	}
	static class UBPVE_EADEle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_EADEle_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_EADEle_C;

SDK_NAMESPACE_END
