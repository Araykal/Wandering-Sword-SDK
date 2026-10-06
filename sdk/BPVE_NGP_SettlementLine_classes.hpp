#pragma once



// Package: BPVE_NGP_SettlementLine

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_NGP_SettlementLine.BPVE_NGP_SettlementLine_C
// 0x0018 (0x03E0 - 0x03C8)
class UBPVE_NGP_SettlementLine_C final : public UNeoUI2TxtComp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        NeoUIImageBase_21;                                 // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Score;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_NGP_SettlementLine(int32 EntryPoint);
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_NGP_SettlementLine_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_NGP_SettlementLine_C")
	}
	static class UBPVE_NGP_SettlementLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_NGP_SettlementLine_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_NGP_SettlementLine_C;

SDK_NAMESPACE_END
